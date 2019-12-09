/*
-string works
-need to recreate CFGs

*/

%{
 #include <iostream>
 #include <cstdlib>
 #include "model.hpp"

 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern int yylex();
 extern ASTNode* root;

%}

%union{
  
	int ival;
	char* sval;
	Statement* stat;
	StatementList* stat_list;
	Expr* expr;
}

%error-verbose
%start input
%token MULT DIV PLUS MINUS EQUAL L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET NOT END  SEMICOLON COLON COMMA ASSIGN TRUE FALSE RETURN MOD AND CONTINUE READ WRITE INTEGER OF ARRAY OR COMMENT
%token <ival> NUMBER 

%token <sval> IDENT EQ NEQ LT GT LTE GTE UMINUS
%type <sval> comp 
%left PLUS MINUS
%left MULT DIV
%nonassoc UMINUS
%token BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY BEGIN_PARAMS END_PARAMS FUNCTION
%token DO BEGINLOOP ENDLOOP WHILE IF THEN ENDIF ELSE

%type <expr> bool_expr relation_and_expr relation_expr var term ident multexp exp many_ident

%%
input:	| input line            
			;

line:		exp EQUAL END         {}
			| many_ends comment many_ends program many_ends comment many_ends
         ;

statement: var ASSIGN exp comment many_ends {}
         | IF bool_expr THEN comment many_ends many_statements comment many_ends ELSE comment many_ends many_statements comment many_ends ENDIF comment many_ends {}
         | IF bool_expr THEN comment many_ends many_statements comment many_ends ENDIF comment many_ends {}
         | WHILE bool_expr comment many_ends BEGINLOOP comment many_ends many_statements comment many_ends ENDLOOP comment many_ends {}
         | DO comment many_ends BEGINLOOP comment many_ends many_statements comment many_ends ENDLOOP comment many_ends WHILE bool_expr comment many_ends {}
         | comment many_ends READ many_vars comment many_ends {}
         | comment many_ends WRITE many_vars comment many_ends {}
         | comment many_ends CONTINUE comment many_ends {}
         | comment many_ends RETURN exp comment many_ends {}
         ;

many_statements : comment many_ends {}
         | statement SEMICOLON comment many_ends many_statements comment many_ends {}

many_vars: var {}
         | var COMMA many_vars {}
         ;
program:	function {}
			| function program {}
			;

many_exp: exp {}
			| exp COMMA many_exp {}
			;

many_ident: ident {}
			 | ident COMMA many_ident {}
			 ;

many_ends:
			| END many_ends
			;

many_declaration: comment many_ends {}
					 | declaration SEMICOLON comment many_ends many_declaration comment many_ends{}
					 ;

function: FUNCTION ident SEMICOLON many_ends BEGIN_PARAMS many_ends many_declaration END_PARAMS many_ends BEGIN_LOCALS many_ends many_declaration many_ends END_LOCALS many_ends BEGIN_BODY many_ends many_statements many_ends END_BODY many_ends {}

declaration: many_ident COLON INTEGER {$$ = new Expr($1, ":");}
			  | many_ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {}
			  ;

bool_expr: relation_and_expr {$$ = $1;}
         | relation_and_expr OR relation_and_expr {}
         ;

relation_and_expr: relation_expr {$$ = $1;}
         | relation_expr AND relation_and_expr {}
         ;

relation_expr: exp comp exp  {$$ = new Expr($1, $2, $3);}
         | L_PAREN bool_expr R_PAREN {$$ = $2;}
         | TRUE {$$ = new ExprID("true");}
         | FALSE {$$ = new ExprID("false");}
			| NOT exp comp exp {}
			| NOT L_PAREN bool_expr R_PAREN {}
			| NOT TRUE {}
			| NOT FALSE {}
         ;

var: ident {$$ = $1;}
         | ident L_SQUARE_BRACKET exp R_SQUARE_BRACKET {}
	      ;

term: var {$$ = $1;}
			| '-' var %prec UMINUS {$$ = new Expr(new ExprNumber(0), "-", $2);}
			| NUMBER { $$ = new ExprNumber($1);}
			| '-' NUMBER %prec UMINUS {$$ = new Expr(new ExprNumber(0), "-", new ExprNumber($2));}
			| L_PAREN exp R_PAREN {$$ = $2;}
			| UMINUS L_PAREN exp R_PAREN {$$ = $3;}
			| ident L_PAREN many_exp R_PAREN {}
         ;

ident: IDENT { $$ = new ExprID($1);}
	  ;

comp: EQ {$$ = "==";}
		| NEQ {$$ = "<>";}
		| LT {$$ = "<";}
		| GT {$$ = ">";}
		| LTE {$$ = "<=";}
		| GTE {$$ = ">=";}
		;

exp: multexp						{$$ = $1;}
		| multexp PLUS exp		{$$ = new Expr($1, "+", $3);}
		| multexp MINUS exp		{$$ = new Expr($1, "-", $3);}
		;

multexp: term						{$$ = $1;}
			| term MULT multexp	{$$ = new Expr($1, "*", $3);}
			| term DIV multexp	{$$ = new Expr($1, "/", $3);}
			| term MOD multexp	{$$ = new Expr($1, "%", $3);}
			;

comment: 
			| comment many_ends COMMENT {}
			;

%%
ASTNode* root;
int Generator::counter_label = 0;
int Generator::counter_var = 0;

int main(int argc, char **argv) {
	
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}

