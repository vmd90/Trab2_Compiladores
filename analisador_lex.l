
%{
#include "analisador_lex.h"
%}
%option nounput yylineno 

/* DEFINICOES */
numero_int              -?[0-9]+
numero_real             -?[0-9]*\.[0-9]+
palavra_reservada       "program"|"begin"|"end"|"const"|"var"|"real"|"integer"|"procedure"|"if"|"else"|"while"|"for"|"do"|"write"|"read"
id                      [a-zA-Z][a-zA-Z0-9\_]*

%%

\{.*\}			;
[\ \t\r\n]		;

"("                     return SIMB_ABRE_PARENTESES;
")"                     return SIMB_FECHA_PARENTESES;
";"                     return SIMB_PONTO_VIRGULA;
"*"                     return SIMB_MULTIPLICACAO;
"/"                     return SIMB_DIVISAO;
"."                     return SIMB_PONTO;
":"                     return SIMB_DOIS_PONTOS;
","                     return SIMB_VIRGULA;
"+"                     return SIMB_ADICAO;
"-"                     return SIMB_SUBTRACAO;
">"                     return SIMB_MAIOR;
"<"                     return SIMB_MENOR;
"<>"                    return SIMB_DIFERENTE;
"<="                    return SIMB_MENOR_IGUAL;
">="                    return SIMB_MAIOR_IGUAL;
":="                    return SIMB_ATRIBUICAO;
"="                     return SIMB_IGUAL;
{numero_int}            return NUMERO_INT;
{palavra_reservada}     return PALAVRA_RESERVADA;
{id}                    return ID;
{numero_real}           return NUMERO_REAL;
{numero_int}\.{id}	    return SIMB_ERRO;
{numero_int}{id}	    return SIMB_ERRO;
.                       return SIMB_ERRO;

%%

int yywrap(void)
{
	return 1;
}
