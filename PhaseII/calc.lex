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

"function"			{printf("FUNCTION\n"); currPos += yyleng;}
"beginparams"		{printf("BEGIN_PARAMS\n"); currPos += yyleng;}
"endparams"			{printf("END_PARAMS\n"); currPos += yyleng;}
"beginlocals"		{printf("BEGIN_LOCALS\n"); currPos += yyleng;}
"endlocals"			{printf("END_LOCALS\n"); currPos += yyleng;}
"beginbody"			{printf("BEGIN_BODY\n"); currPos += yyleng;}
"endbody"			{printf("END_BODY\n"); currPos += yyleng;}
"integer"			{printf("INTEGER\n"); currPos += yyleng;}
"array"				{printf("ARRAY\n"); currPos += yyleng;}
"of"					{printf("OF\n"); currPos += yyleng;}
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
"and"					{printf("AND\n"); currPos += yyleng;}
"or"					{printf("OR\n"); currPos += yyleng;}
"not"					{printf("NOT\n"); currPos += yyleng; return NOT;}
"true"				{printf("TRUE\n"); currPos += yyleng;}
"false"				{printf("FALSE\n"); currPos += yyleng;}
"return"				{printf("RETURN\n"); currPos += yyleng;}

"-"		{printf("SUB\n");  currPos += yyleng; return MINUS;}
"+"		{printf("ADD\n");  currPos += yyleng; return PLUS;}
"*"		{printf("MULT\n");  currPos += yyleng; return MULT;}
"/"		{printf("DIV\n");  currPos += yyleng; return DIV;}
"%"		{printf("MOD\n");  currPos += yyleng;}
"=="		{printf("EQ\n");  currPos += yyleng;}
"<>"		{printf("NE\n");  currPos += yyleng;}
"<"		{printf("LT\n");  currPos += yyleng;}
">"		{printf("GT\n");  currPos += yyleng;}
"<="		{printf("LTE\n");  currPos += yyleng;}
">="		{printf("GTE\n");  currPos += yyleng;}
";"		{printf("SEMICOLON\n");  currPos += yyleng;}
":"		{printf("COLON\n");  currPos += yyleng;}
","		{printf("COMMA\n");  currPos += yyleng;}
"("		{printf("L_PAREN\n");  currPos += yyleng; return L_PAREN;}
")"		{printf("R_PAREN\n");  currPos += yyleng; return R_PAREN;}
"["		{printf("L_SQUARE_BRACKET\n");  currPos += yyleng; return L_SQUARE_BRACKET;}
"]"		{printf("R_SQUARE_BRACKET\n");  currPos += yyleng; return R_SQUARE_BRACKET;}
":="		{printf("ASSIGN\n");  currPos += yyleng;}
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