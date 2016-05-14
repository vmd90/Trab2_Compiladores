%{
#include <stdio.h>
#include <stdlib.h>
void yyerror (char *s);

%}

%start programa
%token NUMERO_INT           
%token NUMERO_REAL  
%token ID          
%token SIMB_DIFERENTE        
%token SIMB_MENOR_IGUAL      
%token SIMB_MAIOR_IGUAL      
%token COMENTARIO
%token SIMB_ERRO             
%token SIMB_ATRIBUICAO       
%token SIMB_IGUAL
%token PROGRAM	
%token P_BEGIN	
%token P_END		
%token CONST	
%token VAR		
%token REAL 	
%token INTEGER	
%token PROCEDURE
%token IF		
%token THEN
%token ELSE	
%token WHILE	
%token FOR		
%token DO 		
%token WRITE	
%token READ 	

%% /* gramatica */

programa: PROGRAM ID ';' corpo '.'	{;}
		;

corpo: dc P_BEGIN comandos P_END		{;}
		;

dc: dc_c dc_v dc_p						{;}
		;

dc_c: CONST ID '=' numero ';' dc_c	{;}
		|
		;

dc_v: VAR variaveis ':' tipo_var ';' dc_v		{;}
		|
		;

tipo_var: REAL		{;}
		| INTEGER		{;}
		;

variaveis: ID mais_var		{;}
		;

mais_var: ',' variaveis		{;}
		|
		;

dc_p: PROCEDURE ID parametros ';' corpo_p dc_p	{;}
		|
		;

parametros: '(' lista_par ')'		{;}
		|
		;

lista_par: variaveis ':' tipo_var mais_par	{;}
		;

mais_par: ';' lista_par		{;}
		|
		;

corpo_p: dc_loc P_BEGIN comandos P_END ';'	{;}
		;

dc_loc: dc_v		{;}
		;

lista_arg: '(' argumentos ')'	{;}
		|
		;

argumentos: ID mais_ident	{;}
		;

mais_ident: ';' argumentos	{;}
		|
		;

pfalsa: ELSE cmd 		{;}
		|
		;

comandos: cmd ';' comandos		{;}
		|
		;

cmd: READ '(' variaveis ')'					{;}
		| WRITE '(' variaveis ')' 			{;}
		| WHILE '(' condicao ')' DO cmd 	{;}
		| IF condicao THEN cmd pfalsa		{;}
		| ID SIMB_ATRIBUICAO expressao						{;}
		| ID lista_arg							{;}
		| P_BEGIN comandos P_END				{;}
		;

condicao: expressao relacao expressao		{;}
		;

relacao: '='	{;}
		| SIMB_DIFERENTE	{;}
		| SIMB_MAIOR_IGUAL	{;}
		| SIMB_MENOR_IGUAL	{;}
		| '>' 	{;}
		| '<'	{;}
		;

expressao: termo outros_termos	{;}
		;

op_un: '+'	{;}
		| '-'	{;}
		|
		;

outros_termos: op_ad termo outros_termos	{;}
		|
		;

op_ad: '+'	{;}
		|'-'	{;}
		;

termo: op_un fator mais_fatores		{;}
		;

mais_fatores: op_mul fator mais_fatores    {;}
		|
		;

op_mul: '*'		{;}
		|'/'	{;}
		;

fator: ID 	{;}
		| numero 	{;}
		| '(' expressao ')'		{;}
		;

numero: NUMERO_INT		{;}
		| NUMERO_REAL	{;}
		;

%%

int main (void) {
	

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
