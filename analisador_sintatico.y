%{
void yyerror (char *s);
void esperado(char *s);

#include <stdio.h>
#include <stdlib.h>

extern int lineno;

%}

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

%start programa

%% /* gramatica */

programa: PROGRAM ID ';' corpo '.'		{ printf("SUCCESS!\n"); exit(0); }
		| error{ esperado("program"); } ID ';' corpo '.'
		| PROGRAM error{ esperado("id"); } ';' corpo '.'
		| PROGRAM ID error{ esperado(";"); } corpo '.'
		| PROGRAM ID ';' corpo error{ esperado("."); }
		;

corpo: dc P_BEGIN comandos P_END		{;}
		| dc error{ esperado("begin"); } comandos P_END
		| dc P_BEGIN comandos error{ esperado("end"); }
		;

dc: dc_c dc_v dc_p						{;}
		;

dc_c: CONST ID '=' numero ';' dc_c	{;}
		| error{ esperado("const"); } ID '=' numero ';' dc_c
		| CONST error{ esperado("id"); } '=' numero ';' dc_c
		| CONST ID error{ esperado("="); } numero ';' dc_c
		| CONST ID '=' numero error{ esperado(";"); } dc_c
		|
		;

dc_v: VAR variaveis ':' tipo_var ';' dc_v		{;}
		| error{ esperado("var"); } variaveis ':' tipo_var ';' dc_v
		| VAR variaveis error{ esperado(":"); } tipo_var ';' dc_v
		| VAR variaveis ':' tipo_var error{ esperado(";"); } dc_v
		|
		;

tipo_var: REAL		{;}
		| INTEGER		{;}
		| error{ esperado("integer, real");}
		;

variaveis: ID mais_var		{;}
		| error{ esperado("id"); } mais_var
		;

mais_var: ',' variaveis		{;}
		| error{ esperado(","); } variaveis
		|
		;

dc_p: PROCEDURE ID parametros ';' corpo_p dc_p	{;}
		| error{ esperado("procedure"); } ID parametros ';' corpo_p dc_p
		| PROCEDURE error{ esperado("id"); } parametros ';' corpo_p dc_p
		| PROCEDURE ID parametros error{ esperado(";"); } corpo_p dc_p
		|
		;

parametros: '(' lista_par ')'		{;}
		| error{ esperado("("); } lista_par ')'
		| '(' lista_par error{ esperado(")"); }
		|
		;

lista_par: variaveis ':' tipo_var mais_par	{;}
		| variaveis error{ esperado(":"); } tipo_var mais_par
		;

mais_par: ';' lista_par		{;}
		| error{ esperado(";"); } lista_par
		|
		;

corpo_p: dc_loc P_BEGIN comandos P_END ';'	{;}
		| dc_loc error{ esperado("begin"); } comandos P_END ';'
		| dc_loc P_BEGIN comandos error{ esperado("end"); } ';'
		| dc_loc P_BEGIN comandos P_END error{ esperado(";"); }
		;

dc_loc: dc_v		{;}
		;

lista_arg: '(' argumentos ')'	{;}
		| error{ esperado("("); } argumentos ')'
		| '(' argumentos error{ esperado(")"); }
		|
		;

argumentos: ID mais_ident	{;}
		| error{ esperado("id"); } mais_ident
		;

mais_ident: ';' argumentos	{;}
		| error{ esperado(";"); } argumentos
		|
		;

pfalsa: ELSE cmd 		{;}
		| error{ esperado("else"); } cmd
		|
		;

comandos: cmd ';' comandos		{;}
		| cmd error{ esperado(";"); } comandos
		|
		;

cmd: READ '(' variaveis ')'					{;}
		| READ error{ esperado("("); } variaveis ')'	
		| READ '(' variaveis error{ esperado(")"); }	
		| WRITE '(' variaveis ')' 			{;}
		| WRITE error{ esperado("("); } variaveis ')' 
		| WRITE '(' variaveis error{ esperado(")"); } 
		| WHILE '(' condicao ')' DO cmd 	{;}
		| error{ esperado("while"); } '(' condicao ')' DO cmd
		| WHILE error{ esperado("("); } condicao ')' DO cmd
		| WHILE '(' condicao error{ esperado(")"); } DO cmd
		| WHILE '(' condicao ')' error{ esperado("do"); } cmd
		| IF condicao THEN cmd pfalsa		{;}
		| error{ esperado("if"); } condicao THEN cmd pfalsa
		| IF condicao error{ esperado("then"); } cmd pfalsa
		| ID SIMB_ATRIBUICAO expressao		{;}
		| error{ esperado("id"); } SIMB_ATRIBUICAO expressao
		| ID error{ esperado(":="); } expressao
		| ID lista_arg						{;}
		| error{ esperado("id"); } lista_arg
		| P_BEGIN comandos P_END			{;}
		| error{ esperado("begin"); } comandos P_END
		| P_BEGIN comandos error{ esperado("end"); }
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

int main (void)
{
	lineno = 1;
	yyparse();
	return 0;
}

void yyerror (char *s)
{
	fprintf(stderr, "Line %d: %s\n", lineno, s);
}

void esperado(char *s)
{
	fprintf(stderr,"Error: %s expected.\n", s);
}
