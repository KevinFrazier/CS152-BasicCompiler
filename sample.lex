
void incrementOps();

%{
	int currLine = 1, currPos = 1, numberOfInt = 0, numberOfOps = 0;

%}

DIGIT	[0-9]*\.?[0-9]*
IDENT	[A-z_][A-z0-9_]*
%%

"function"			{printf("FUNCTION\n"); currPos += yyleng;}
"beginparams"		{printf("BEGIN_PARAMS\n"); currPos += yyleng;}
"endparams"			{printf("END_PARAMS\n"); currPos += yyleng;}
"beginlocals"		{printf("BEGIN_LOCALS\n"); currPos += yyleng;}
"endlocals"			{printf("END_LOCALS\n"); currPos += yyleng;}
"beginbdoy"			{printf("BEGIN_BODY\n"); currPos += yyleng;}
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
"not"					{printf("NOT\n"); currPos += yyleng;}
"true"				{printf("TRUE\n"); currPos += yyleng;}
"false"				{printf("FALSE\n"); currPos += yyleng;}
"return"				{printf("RETURN\n"); currPos += yyleng;}

"-"		{printf("SUB");  currPos += yyleng;}
"+"		{printf("ADD");  currPos += yyleng;}
"*"		{printf("MULT");  currPos += yyleng;}
"/"		{printf("DIV");  currPos += yyleng;}
"%"		{printf("MOD");  currPos += yyleng;}
"=="		{printf("EQ");  currPos += yyleng;}
"<>"		{printf("NEW");  currPos += yyleng;}
"<"		{printf("LT");  currPos += yyleng;}
">"		{printf("GT");  currPos += yyleng;}
"<="		{printf("LTE");  currPos += yyleng;}
">="		{printf("GTE");  currPos += yyleng;}
";"		{printf("SEMICOLON");  currPos += yyleng;}
":"		{printf("COLON");  currPos += yyleng;}
","		{printf("COMMA");  currPos += yyleng;}
"("		{printf("L_PAREN");  currPos += yyleng;}
")"		{printf("R_PAREN");  currPos += yyleng;}
"["		{printf("L_SQUARE_BRACKET");  currPos += yyleng;}
"]"		{printf("R_SQUARE_BRACKET");  currPos += yyleng;}
":="		{printf("ASSIGN");  currPos += yyleng;}


{DIGIT}+       {printf("NUMBER %s\n", yytext); currPos += yyleng;}

[ \t]+         {/* ignore spaces */ currPos += yyleng;}

"\n"           {currLine++; currPos = 1;}

.              {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%

int main(int argc, char ** argv)
{
   yylex();
}

void incrementOps(){

  numberOfOps +=1;
}
