
void incrementOps();

%{
	int currLine = 1, currPos = 1, numberOfInt = 0, numberOfOps = 0;

%}

DIGIT	[0-9]*\.?[0-9]*
IDENT	[A-z_][A-z0-9_]*
%%

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
