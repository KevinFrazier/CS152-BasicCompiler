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
%token MULT DIV PLUS MINUS EQUAL L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET NOT END
%token <dval> NUMBER
%type <dval> exp

%token <sval> IDENT
%type <sval> var term
%left PLUS MINUS
%left MULT DIV
%nonassoc UMINUS

%token TRUE FALSE

%% 
input:	
     			| input line            
			;

line:		exp EQUAL END         { printf("\t%f\n", $1);}
    		| var END
         | term END
         | relation-expr END
         ;

bool-expr: relation-and-expr AND relation-and-expr {printf("bool-expr -> relation-expr and relation-expr");}

relation-and-expr: relation-expr AND relation-expr {printf("relation-and-expr -> relation-expr and relation-expr");}

relation-expr: NOT relation-expr {printf("relation-expr -> not relation-expr");}
         | exp comp exp  {printf("relation-expr -> exp comp exp");}
         | L_PAREN bool-expr R_PAREN {print("relation=expr -> (bool-expr)")}
         | TRUE
         | FALSE
exp:		NUMBER                { $$ = $1;}
   		| exp PLUS exp        { $$ = $1 + $3;}
			| exp MINUS exp       { $$ = $1 - $3;}
			| exp MULT exp        { $$ = $1 * $3;}
			| exp DIV exp         { if ($3==0) yyerror("divide by zero"); else $$ = $1 / $3;}
			| MINUS exp %prec UMINUS { $$ = -$2;}
			| L_PAREN exp R_PAREN { $$ = $2;}
			;


term: MINUS var  {printf("term -> -var\n");}
         | MINUS exp {printf("term -> -exp\n");}
      ;
var: IDENT { printf("var -> ident\n");}
         | IDENT L_SQUARE_BRACKET exp R_SQUARE_BRACKET {printf("var -> ident [ exp ] \n ");}
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

