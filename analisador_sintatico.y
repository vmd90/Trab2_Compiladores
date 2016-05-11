
%{
#include <stdio.h>
#include <stdlib.h>
void yyerror (char *s);

%}

%start programa
%token NUMERO_INT           
%token NUMERO_REAL          
%token PALAVRA_RESERVADA    
%token ID                   
%token SIMB_ABRE_PARENTESES 
%token SIMB_FECHA_PARENTESES
%token SIMB_PONTO_VIRGULA   
%token SIMB_PONTO           
%token SIMB_MULTIPLICACAO   
%token SIMB_DIVISAO          
%token SIMB_DOIS_PONTOS      
%token SIMB_VIRGULA          
%token SIMB_ADICAO           
%token SIMB_SUBTRACAO        
%token SIMB_MAIOR            
%token SIMB_MENOR            
%token SIMB_DIFERENTE        
%token SIMB_MENOR_IGUAL      
%token SIMB_MAIOR_IGUAL      
%token COMENTARIO
%token SIMB_ERRO             
%token SIMB_ATRIBUICAO       
%token SIMB_IGUAL

%% /* gramatica */

programa: 'program' ID ';' corpo '.'	{;}
		;

corpo: dc 'begin' comandos 'end'		{;}
		;

dc: dc_c dc_v dc_p						{;}
		;

dc_c: 'const' ID '=' numero ';' dc_c	{;}
		|
		;

dc_v: 'var' variaveis ':' tipo_var ';' dc_v		{;}
		|
		;

tipo_var: 'real'		{;}
		| 'integer'		{;}
		;

variaveis: ID mais_var		{;}
		;

mais_var: ',' variaveis		{;}
		|
		;

dc_p: 'procedure' ID parametros ';' corpo_p dc_p	{;}
		|
		;

parametros: '(' lista_par ')'		{;}
		|
		;

lista_par: variaveis ':' tipo_var mais_var	{;}
		;

mais_par: ';' lista_par		{;}
		|
		;

corpo_p: dc_loc 'begin' comandos 'end' ';'	{;}
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

pfalsa: 'else' cmd 		{;}
		|
		;

comandos: cmd ';' comandos		{;}
		|
		;

cmd: 'read' '(' variaveis ')'					{;}
		| 'write' '(' variaveis ')' 			{;}
		| 'while' '(' condicao ')' 'do' cmd 	{;}
		| 'if' condicao 'then' cmd pfalsa		{;}
		| ID ':=' expressao						{;}
		| ID lista_arg							{;}
		| 'begin' comandos 'end'				{;}
		;

condicao: expressao relacao expressao		{;}
		;

relacao: '='	{;}
		| '<>'	{;}
		| '>='	{;}
		| '<='	{;}
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
