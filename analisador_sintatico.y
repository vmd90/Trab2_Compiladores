
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

corpo:  'begin'  'end'		{;}
		;
/*
dc: dc_c dc_v dc_p						{;}

dc_c: 'const' ID '=' numero ';' dc_c	{;}
	| ;
*/

%%

int main (void) {
	

	return yyparse ( );
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 
