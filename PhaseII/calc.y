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
%token MULT DIV PLUS MINUS EQUAL L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET NOT END EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA ASSIGN TRUE FALSE RETURN MOD
%token <dval> NUMBER
%type <dval> exp multexp

%token <sval> IDENT
%type <sval> var term comp
%left PLUS MINUS
%left MULT DIV
%nonassoc UMINUS


%% 
input:	| input line            
			;

line:		exp EQUAL END         { printf("\t%f\n", $1);}
    		| var END
         | term END
			| comp END
			| exp END
			| multexp END
         ;

term: UMINUS var  {printf("term -> -var\n");}
         | UMINUS exp {printf("term -> -exp\n");}
			| NUMBER
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

exp: multexp						{$$ = $1;}
		| multexp PLUS exp		{$$ = $1 + $2;}
		| multexp MINUS exp		{$$ = $1 - $2;}
		;

multexp: term						{$$ = $1;}
			| term MULT multexp	{$$ = $1 * $2;}
			| term DIV multexp	{$$ = $1 / $2;}
			| term MOD multexp	{$$ = $1 % $2;}
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

