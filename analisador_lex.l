
%{
#include "y.tab.h"

int lineno;

void pular_comentario(void);

%}

%%

"("				{return '(';}
")"				{return ')';}
"."				{return '.';}
":"				{return ':';}
"+"				{return '+';}
"-"				{return '-';}
"*"				{return '*';}
"/"				{return '/';}
";"				{return ';';}
">"				{return '>';}
"<"				{return '<';}
"="				{return '=';}
","				{return ',';}
"<>"			{return SIMB_DIFERENTE;}
"<="			{return SIMB_MENOR_IGUAL;}
">="			{return SIMB_MAIOR_IGUAL;}
":="			{return SIMB_ATRIBUICAO;}

"program"		{return PROGRAM;}
"begin"			{return P_BEGIN;}
"end"			{return P_END;}
"const"			{return CONST;}
"var"			{return VAR;}
"real"			{return REAL;}
"integer"		{return INTEGER;}
"procedure"	{return PROCEDURE;}
"if"			{return IF;}
"then"			{return THEN;}
"else"			{return ELSE;}
"while"			{return WHILE;}
"for"			{return FOR;}
"do"			{return DO;}
"write"			{return WRITE;}
"read"			{return READ;}

"{"				{ pular_comentario(); }
[ \t\r\v]		;
"\n"			{ lineno++;}

[a-zA-Z][a-zA-Z0-9\_]*    {return ID;}
-?[0-9]+                    {return NUMERO_INT;}
-?[0-9]*\.[0-9]+           {return NUMERO_REAL;}
.                       {printf("Unexpected character: %c, line: %d\n", yytext[0], lineno);}

%%

int yywrap(void)
{
	return 1;
}

void pular_comentario(void)
{
	int c = input();
	while (c != EOF && c != '}') {
		if (c == '\n')
			++lineno;
		c = input();
	}
}

