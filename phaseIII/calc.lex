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

"function"			{currPos += yyleng; return FUNCTION;}
"beginparams"		{currPos += yyleng; return BEGIN_PARAMS;}
"endparams"			{currPos += yyleng; return END_PARAMS;}
"beginlocals"		{currPos += yyleng; return BEGIN_LOCALS;}
"endlocals"			{currPos += yyleng; return END_LOCALS;}
"beginbody"			{currPos += yyleng; return BEGIN_BODY;}
"endbody"			{currPos += yyleng; return END_BODY;}
"integer"			{currPos += yyleng; return INTEGER;}
"array"				{currPos += yyleng; return ARRAY;}
"of"					{currPos += yyleng; return OF;}
"if"					{currPos += yyleng; return IF;}
"then"				{currPos += yyleng; return THEN;}
"endif"				{currPos += yyleng; return ENDIF;}
"else"				{currPos += yyleng; return ELSE;}
"while"				{currPos += yyleng; return WHILE;}
"do"					{currPos += yyleng; return DO;}
"beginloop"			{currPos += yyleng; return BEGINLOOP;}
"endloop"			{currPos += yyleng; return ENDLOOP;}
"continue"			{currPos += yyleng; return CONTINUE;}
"read"				{currPos += yyleng; return READ;}
"write"				{currPos += yyleng; return WRITE;}
"and"					{currPos += yyleng; return AND;}
"or"					{currPos += yyleng; return OR;}
"not"					{currPos += yyleng; return NOT;}
"true"				{currPos += yyleng; return TRUE;}
"false"				{currPos += yyleng; return FALSE;}
"return"				{currPos += yyleng; return RETURN;}

"-"		{currPos += yyleng; return MINUS;}
"+"		{currPos += yyleng; return PLUS;}
"*"		{currPos += yyleng; return MULT;}
"/"		{currPos += yyleng; return DIV;}
"%"		{currPos += yyleng; return MOD;}
"=="		{currPos += yyleng; return EQ;}
"<>"		{currPos += yyleng; return NEQ;}
"<"		{currPos += yyleng; return LT;}
">"		{currPos += yyleng; return GT;}
"<="		{currPos += yyleng; return LTE;}
">="		{currPos += yyleng; return GTE;}
";"		{currPos += yyleng; return SEMICOLON;}
":"		{currPos += yyleng; return COLON;}
","		{currPos += yyleng; return COMMA;}
"("		{currPos += yyleng; return L_PAREN;}
")"		{currPos += yyleng; return R_PAREN;}
"["		{currPos += yyleng; return L_SQUARE_BRACKET;}
"]"		{currPos += yyleng; return R_SQUARE_BRACKET;}
":="		{currPos += yyleng; return ASSIGN;}
"="		{currPos += yyleng; return EQUAL;}

{IDENT}+			{/*printf("IDENT %s\n", yytext);*/ yylval.sval = yytext; currPos += yyleng; return IDENT;}
{DIGIT}+       {/*printf("NUMBER %s\n", yytext);*/ yylval.dval = atoi(yytext); currPos += yyleng; return NUMBER;}
{COMMENT}+		{currPos += yyleng; return COMMENT;}

[ \t]+         {/* ignore spaces */ currPos += yyleng;}

"\n"           {currLine++; currPos = 1; return END;}

{UNDERSCOREIDENT}+  {printf("Error at line %d, column %d: ends with an underscore \"%s\"\n", currLine, currPos, yytext); exit(0);}

{ERRORIDENT}+  {printf("Error at line %d, column %d: unrecognized identifier \"%s\"\n", currLine, currPos, yytext); exit(0);}

.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%

void incrementOps(){

  numberOfOps +=1;
}
