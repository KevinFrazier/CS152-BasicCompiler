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
%token MULT DIV PLUS MINUS EQUAL L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET NOT END EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA ASSIGN TRUE FALSE RETURN MOD AND CONTINUE READ WRITE INTEGER OF ARRAY OR COMMENT
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

line:		exp EQUAL END         { /*printf("\t%f\n", $1)*/;}
			| many_ends comment many_ends program many_ends comment many_ends
         ;

statement: var ASSIGN exp comment many_ends {printf("statement -> var ASSIGN exp\n");}
         | IF bool_expr THEN comment many_ends many_statements comment many_ends ELSE comment many_ends many_statements comment many_ends ENDIF comment many_ends {printf("statement -> IF bool_exp THEN statements ELSE statements ENDIF\n");}
         | IF bool_expr THEN comment many_ends many_statements comment many_ends ENDIF comment many_ends {printf("statement -> IF bool_exp THEN statements ENDIF\n");}
         | WHILE bool_expr comment many_ends BEGINLOOP comment many_ends many_statements comment many_ends ENDLOOP comment many_ends {printf("statement -> WHILE bool_exp BEGINLOOP statements ENDLOOP\n");}
         | DO comment many_ends BEGINLOOP comment many_ends many_statements comment many_ends ENDLOOP comment many_ends WHILE bool_expr comment many_ends {printf("statement -> DO BEGINLOOP statements ENDLOOP WHILE bool_exp\n");}
         | comment many_ends READ many_vars comment many_ends {printf("statement -> READ vars\n");}
         | comment many_ends WRITE many_vars comment many_ends {printf("statement -> WRITE vars\n");}
         | comment many_ends CONTINUE comment many_ends {printf("statement -> CONTINUE\n");}
         | comment many_ends RETURN exp comment many_ends {printf("statement -> RETURN expression\n");}
         ;

many_statements : comment many_ends {printf("statements -> epsilon\n");}
         | statement SEMICOLON comment many_ends many_statements comment many_ends {printf("statements -> statement SEMICOLON statements\n");}

many_vars: var {printf("vars -> var\n");}
         | var COMMA many_vars {printf("vars -> var COMMA vars\n");}
         ;
program:	function {printf("prog_start -> function\n");}
			| function program {printf("prog_start -> function program\n");}
			;

term: var {printf("term -> var\n");}
			| UMINUS var {printf("term -> UMINUS var \n");}
			| NUMBER {printf("term -> NUMBER\n");}
			| UMINUS NUMBER {printf("term -> UMINUS NUMBER\n");}
			| L_PAREN exp R_PAREN {printf("term -> L_PAREN expression R_PAREN\n");}
			| UMINUS L_PAREN exp R_PAREN {printf("term -> L_PAREN expression R_PAREN\n");}
			| ident L_PAREN many_exp R_PAREN {printf("term -> IDENT L_PAREN expressions R_PAREN\n");}
         ;

many_exp: exp {printf("expressions -> expression\n");}
			| exp COMMA many_exp {printf("expressions -> expression COMMA expressions\n");}
			;

many_ident: ident {printf("identifiers -> ident\n");}
			 | ident COMMA many_ident {printf("identifiers -> ident COMMA identifiers\n");}
			 ;

many_ends:
			| END many_ends
			;

many_declaration: comment many_ends {printf("declarations -> epsilon\n");}
					 | declaration SEMICOLON comment many_ends many_declaration comment many_ends{printf("declarations -> declaration SEMICOLON declarations\n");}
					 ;

function: FUNCTION ident SEMICOLON many_ends BEGIN_PARAMS many_ends many_declaration END_PARAMS many_ends BEGIN_LOCALS many_ends many_declaration many_ends END_LOCALS many_ends BEGIN_BODY many_ends many_statements many_ends END_BODY many_ends {printf("function -> FUNCTION IDENT SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY\n");}

declaration: many_ident COLON INTEGER {printf("declaration -> identifiers COLON INTEGER\n");}
			  | many_ident COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> identifiers COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n");}
			  ;

bool_expr: relation_and_expr {printf("bool-expr -> relation-and-expr\n");}
         | relation_and_expr OR relation_and_expr {printf("bool-expr -> relation-expr and relation-expr\n");}
         ;

relation_and_expr: relation_expr {printf("relation-and-expr -> relation-expr\n");}
         | relation_expr AND relation_and_expr {printf("relation-and-expr -> relation-expr and relation-expr\n");}
         ;

relation_expr: exp comp exp  {printf("relation-expr -> exp comp exp\n");}
         | L_PAREN bool_expr R_PAREN {printf("relation-expr -> L_PAREN bool-expr R_PAREN\n");}
         | TRUE {printf("TRUE\n");}
         | FALSE {printf("FALSE\n");}
			| NOT exp comp exp {printf("relation-expr -> NOT exp comp exp\n");}
			| NOT L_PAREN bool_expr R_PAREN {printf("relation-expr -> NOT L_PAREN bool_expr R_PAREN\n");}
			| NOT TRUE {printf("NOT TRUE\n");}
			| NOT FALSE {printf("NOT FALSE\n");}
         ;

var: ident { printf("var -> ident\n");}
         | ident L_SQUARE_BRACKET exp R_SQUARE_BRACKET {printf("var -> ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n");}
	      ;

ident: IDENT {printf("ident -> IDENT %s\n", $1);}
	  ;

comp: EQ {printf("comp -> EQ\n");}
		| NEQ {printf("comp -> NEQ\n");}
		| LT {printf("comp -> LT\n");}
		| GT {printf("comp -> GT\n");}
		| LTE {printf("comp -> LTE\n");}
		| GTE {printf("comp -> GTE\n");}
		;

exp: multexp						{printf("expression -> multiplicative_expression\n");}
		| multexp PLUS exp		{printf("expression -> multiplicative_expression PLUS expression\n");}
		| multexp MINUS exp		{printf("expression -> multiplicative_expression MINUS expression\n");}
		;

multexp: term						{printf("multiplicative_expression -> term\n");}
			| term MULT multexp	{printf("mutliplicative_expression -> term MULT term\n");}
			| term DIV multexp	{printf("multiplicative_expression -> term DIV term\n");}
			| term MOD multexp	{printf("multiplicative_expression -> term MOD term\n");}
			;

comment: 
			| comment many_ends COMMENT {printf("comment -> COMMENT\n");}
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

