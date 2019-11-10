/*
-string works
-need to recreate CFGs

*/

%{
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 //extern int yylex();
 FILE * yyin;

%}

%union{
  double dval;
  int ival;
  char* sval;
}

%error-verbose
%start input
%token MULT DIV PLUS MINUS EQUAL L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET NOT END EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA ASSIGN TRUE FALSE RETURN MOD AND CONTINUE READ WRITE INTEGER OF ARRAY
%token <dval> NUMBER
%type <dval> exp multexp

%token <sval> IDENT
%type <sval> var term comp
%left PLUS MINUS
%left MULT DIV
%nonassoc UMINUS
%token BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY BEGIN_PARAMS END_PARAMS FUNCTION
%token DO BEGINLOOP ENDLOOP WHILE IF THEN ENDIF ELSE

%% 
input:	| input line            
			;

line:		exp EQUAL END         { printf("\t%f\n", $1);}
    		| var END
         | term END
			| comp END
			| exp END
			| multexp END
			| bool_expr END
			| declaration END
         ;

statement: var ASSIGN exp {printf("statement -> var ASSIGN exp");}
         | IF bool_expr THEN many_statements ELSE many_statements ENDIF
         | IF bool_expr THEN many_statements ENDIF
         | WHILE bool_expr BEGINLOOP many_statements ENDLOOP
         | DO BEGINLOOP many_statements ENDLOOP WHILE bool_expr 
         | READ many_vars {printf("statement -> READ manyVars");}
         | WRITE many_vars {printf("statement -> WRITE manyVars");}
         | CONTINUE
         | RETURN exp
         ;

many_statements : statement
         | statement SEMICOLON many_statements
many_vars: var
         | var COMMA many_vars
         ;
program: 
			| function
			| function program
			;

term: opt_umin var  {printf("term -> -var\n");}
			| opt_umin NUMBER
			| opt_umin L_PAREN exp R_PAREN {printf("term -> -exp\n");}
			| IDENT L_PAREN many_exp R_PAREN
         ;

opt_umin: | UMINUS
			;

many_exp: exp
			| exp COMMA many_exp
			;

many_ident: IDENT
			 | IDENT COMMA many_ident
			 ;

many_declaration: declaration
					 | declaration SEMICOLON many_declaration
					 ;

function: FUNCTION IDENT SEMICOLON BEGIN_PARAMS many_declaration END_PARAMS BEGIN_LOCALS many_declaration END_LOCALS BEGIN_BODY many_statements END_BODY

declaration: many_ident COLON INTEGER
			  | many_ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER
			  ;

bool_expr: relation_and_expr {printf("bool-expr -> relation-and-expr \n");}
         | relation_and_expr AND relation_and_expr {printf("bool-expr -> relation-expr and relation-expr");}
         ;

relation_and_expr: relation_expr {printf("relation-and-expr -> relation-expr \n");}
         |relation_expr AND relation_expr {printf("relation-and-expr -> relation-expr and relation-expr");}
         ;

relation_expr: NOT relation_expr {printf("relation-expr -> not relation-expr \n");}
         | exp comp exp  {printf("relation-expr -> exp comp exp \n");}
         | L_PAREN bool_expr R_PAREN {printf("relation=expr -> (bool-expr) \n");}
         | TRUE
         | FALSE
         ;

var: IDENT { printf("var -> ident\n");}
         | IDENT L_SQUARE_BRACKET exp R_SQUARE_BRACKET {printf("var -> ident [ exp ] \n ");}
	      ;

comp: EQ
		| NEQ
		| LT
		| GT
		| LTE
		| GTE
		;

exp: multexp						
		| multexp PLUS exp		
		| multexp MINUS exp		
		;

multexp: term						
			| term MULT multexp	
			| term DIV multexp	
			| term MOD multexp	
			;

%%

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

