void incrementOps();

%{
  #include <string.h>
	#include "y.tab.h"
  #include <stdio.h>
  #include <stdlib.h>
  //using namespace std;
	int currLine = 1, currPos = 1, numberOfInt = 0, numberOfOps = 0;

   //IDENT  [A-Za-z_][a-zA-Z0-9_]*
%}

DIGIT	[0-9]*\.?[0-9]*
IDENT	[A-Za-z_][a-zA-Z0-9_]*[a-zA-Z0-9]|[A-Za-z]
ERRORIDENT [0-9][0-9a-zA-Z]*_?
UNDERSCOREIDENT [A-Za-z_][a-zA-Z0-9_]*_
COMMENT ##.*

%%

"function"			{printf("FUNCTION\n"); currPos += yyleng; return FUNCTION;}
"beginparams"		{printf("BEGIN_PARAMS\n"); currPos += yyleng; return BEGIN_PARAMS;}
"endparams"			{printf("END_PARAMS\n"); currPos += yyleng; return END_PARAMS;}
"beginlocals"		{printf("BEGIN_LOCALS\n"); currPos += yyleng; return BEGIN_LOCALS;}
"endlocals"			{printf("END_LOCALS\n"); currPos += yyleng; return END_LOCALS;}
"beginbody"			{printf("BEGIN_BODY\n"); currPos += yyleng; return BEGIN_BODY;}
"endbody"			{printf("END_BODY\n"); currPos += yyleng; return END_BODY;}
"integer"			{printf("INTEGER\n"); currPos += yyleng; return INTEGER;}
"array"				{printf("ARRAY\n"); currPos += yyleng; return ARRAY;}
"of"					{printf("OF\n"); currPos += yyleng; return OF;}
"if"					{printf("IF\n"); currPos += yyleng;}
"then"				{printf("THEN\n"); currPos += yyleng;}
"endif"				{printf("ENDIF\n"); currPos += yyleng;}
"else"				{printf("ELSE\n"); currPos += yyleng;}
"while"				{printf("WHILE\n"); currPos += yyleng;}
"do"					{printf("DO\n"); currPos += yyleng;}
"beginloop"			{printf("BEGINLOOP\n"); currPos += yyleng;}
"endloop"			{printf("ENDLOOP\n"); currPos += yyleng;}
"continue"			{printf("CONTINUE\n"); currPos += yyleng;}
"read"				{printf("READ\n"); currPos += yyleng;}
"write"				{printf("WRITE\n"); currPos += yyleng;}
"and"					{printf("AND\n"); currPos += yyleng; return AND;}
"or"					{printf("OR\n"); currPos += yyleng;}
"not"					{printf("NOT\n"); currPos += yyleng; return NOT;}
"true"				{printf("TRUE\n"); currPos += yyleng; return TRUE;}
"false"				{printf("FALSE\n"); currPos += yyleng; return FALSE;}
"return"				{printf("RETURN\n"); currPos += yyleng; return RETURN;}

"-"		{printf("SUB\n");  currPos += yyleng; return MINUS;}
"+"		{printf("ADD\n");  currPos += yyleng; return PLUS;}
"*"		{printf("MULT\n");  currPos += yyleng; return MULT;}
"/"		{printf("DIV\n");  currPos += yyleng; return DIV;}
"%"		{printf("MOD\n");  currPos += yyleng; return MOD;}
"=="		{printf("EQ\n");  currPos += yyleng; return EQ;}
"<>"		{printf("NEQ\n");  currPos += yyleng; return NEQ;}
"<"		{printf("LT\n");  currPos += yyleng; return LT;}
">"		{printf("GT\n");  currPos += yyleng; return GT;}
"<="		{printf("LTE\n");  currPos += yyleng; return LTE;}
">="		{printf("GTE\n");  currPos += yyleng; return GTE;}
";"		{printf("SEMICOLON\n");  currPos += yyleng; return SEMICOLON;}
":"		{printf("COLON\n");  currPos += yyleng; return COLON;}
","		{printf("COMMA\n");  currPos += yyleng; return COMMA;}
"("		{printf("L_PAREN\n");  currPos += yyleng; return L_PAREN;}
")"		{printf("R_PAREN\n");  currPos += yyleng; return R_PAREN;}
"["		{printf("L_SQUARE_BRACKET\n");  currPos += yyleng; return L_SQUARE_BRACKET;}
"]"		{printf("R_SQUARE_BRACKET\n");  currPos += yyleng; return R_SQUARE_BRACKET;}
":="		{printf("ASSIGN\n");  currPos += yyleng; return ASSIGN;}
"="		{printf("EQUAL\n"); currPos += yyleng; return EQUAL;}

{IDENT}+			{printf("IDENT %s\n", yytext); yylval.sval = yytext; currPos += yyleng; return IDENT;}
{DIGIT}+       {printf("NUMBER %s\n", yytext); yylval.dval = atoi(yytext); currPos += yyleng; return NUMBER;}
{COMMENT}+		{currPos += yyleng;}

[ \t]+         {/* ignore spaces */ currPos += yyleng;}

"\n"           {currLine++; currPos = 1; return END;}

{UNDERSCOREIDENT}+  {printf("Error at line %d, column %d: ends with an underscore \"%s\"\n", currLine, currPos, yytext); exit(0);}

{ERRORIDENT}+  {printf("Error at line %d, column %d: unrecognized identifier \"%s\"\n", currLine, currPos, yytext); exit(0);}

.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%

void incrementOps(){

  numberOfOps +=1;
}
