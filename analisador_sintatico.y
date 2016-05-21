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
programa: PROGRAM ID ';' corpo '.'		{ ; }
		| error ID ';' corpo '.'		{ esperado("program"); }
		| PROGRAM error ';' corpo '.'	{ esperado("id"); }
		| PROGRAM ID error corpo '.'	{ esperado(";"); }
		| PROGRAM ID ';' error corpo '.'
		| PROGRAM ID ';' corpo error	{ esperado("."); }
		;

corpo: dc P_BEGIN comandos P_END		{;}
		| error P_BEGIN comandos P_END
		| dc error comandos P_END		{ esperado("begin"); }
		| | dc P_BEGIN error P_END
		| dc P_BEGIN comandos error 	{ esperado("end"); }
		;

dc: dc_c dc_v dc_p						{;}
		;

dc_c: CONST ID '=' numero ';' dc_c
		| error ID '=' numero ';' dc_c 			{ esperado("const"); }
		| CONST error '=' numero ';' dc_c 		{ esperado("id"); }
		| CONST ID error numero ';' dc_c 		{ esperado("="); }
		| CONST ID '=' error ';' dc_c 
		| CONST ID '=' numero error dc_c 		{ esperado(";"); }
		|
		;

dc_v: VAR variaveis ':' tipo_var ';' dc_v
		| error variaveis ':' tipo_var ';' dc_v			{ esperado("var"); }
		VAR error ':' tipo_var ';' dc_v
		| VAR variaveis error tipo_var ';' dc_v			{ esperado(":"); }
		VAR variaveis ':' error ';' dc_v
		| VAR variaveis ':' tipo_var error dc_v			{ esperado(";"); }
		|
		;

tipo_var: REAL			{;}
		| INTEGER		{;}
		| error 		{ esperado("integer or real keyword");}
		;

variaveis: ID mais_var		{;}
		| error mais_var	{ esperado("id"); }
		| ID error
		;

mais_var: ',' variaveis		{;}
		| error variaveis	{ esperado(","); }
		|
		;

dc_p: PROCEDURE ID parametros ';' corpo_p dc_p			{;}
		| error ID parametros ';' corpo_p dc_p			{ esperado("procedure"); }
		| PROCEDURE error parametros ';' corpo_p dc_p	{ esperado("id"); }
		| PROCEDURE ID error ';' corpo_p dc_p
		| PROCEDURE ID parametros error corpo_p dc_p	{ esperado(";"); }
		| PROCEDURE ID parametros ';' error dc_p
		| PROCEDURE ID parametros ';' corpo_p error
		|
		;

parametros: '(' lista_par ')'		{;}
		| error lista_par ')'		{ esperado("("); }
		| '(' error ')'
		| '(' lista_par error 		{ esperado(")"); }
		|
		;

lista_par: variaveis ':' tipo_var mais_par		{;}
		| error ':' tipo_var mais_par
		| variaveis error tipo_var mais_par 	{ esperado(":"); }
		| variaveis ':' error mais_par
		| variaveis ':' tipo_var error
		;

mais_par: ';' lista_par		{;}
		| error lista_par	{ esperado(";"); }
		| ';' error
		|
		;

corpo_p: dc_loc P_BEGIN comandos P_END ';'		{;}
		| error P_BEGIN comandos P_END ';'
		| dc_loc error comandos P_END ';'		{ esperado("begin"); }
		| dc_loc P_BEGIN error P_END ';'
		| dc_loc P_BEGIN comandos error ';'		{ esperado("end"); }
		| dc_loc P_BEGIN comandos P_END error 	{ esperado(";"); }
		;

dc_loc: dc_v		{;}
		;

lista_arg: '(' argumentos ')'		{;}
		| error argumentos ')'		{ esperado("("); }
		| '(' error ')'
		| '(' argumentos error 		{ esperado(")"); }
		|
		;

argumentos: ID mais_ident		{;}
		| error mais_ident		{ esperado("id"); }
		| ID error
		;

mais_ident: ';' argumentos		{;}
		| error argumentos		{ esperado(";"); }
		|
		;

pfalsa: ELSE cmd 		{;}
		| error cmd 	{ esperado("else"); }
		| ELSE error
		|
		;

comandos: cmd ';' comandos		{;}
		| error ';' comandos
		| cmd error comandos	{ esperado(";"); }
		|
		;

cmd: READ '(' variaveis ')'					{;}	
		| READ error variaveis ')'			{ esperado("("); }
		| READ '(' error ')'				{;}
		| READ '(' variaveis error 			{ esperado(")"); }	
		| WRITE '(' variaveis ')' 			{;}
		| WRITE '(' error ')'	
		| WRITE error variaveis ')'			{ esperado("("); }
		| WRITE '(' variaveis error 		{ esperado(")"); } 
		| WHILE '(' condicao ')' DO cmd 	{;}
		| WHILE error condicao ')' DO cmd 	{ esperado("("); }
		| WHILE '(' condicao error DO cmd 	{ esperado(")"); }
		| WHILE '(' condicao ')' error cmd 	{ esperado("do"); }
		| IF condicao THEN cmd pfalsa		{;}
		| IF condicao error cmd pfalsa		{ esperado("then"); }
		| ID SIMB_ATRIBUICAO expressao		{;}
		| ID error expressao				{ esperado(":="); }
		| ID lista_arg						{;}
		| P_BEGIN comandos P_END			{;}
		| P_BEGIN comandos error			{esperado("end");}
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
		| error outros_termos
		| termo error
		;

op_un: '+'	{;}
		| '-'	{;}
		|
		;

outros_termos: op_ad termo outros_termos	{;}
		|
		| error termo outros_termos
		| op_ad error outros_termos
		| op_ad termo error
		;

op_ad: '+'	{;}
		|'-'	{;}
		;

termo: op_un fator mais_fatores		{;}
		| error fator mais_fatores
		| op_un error mais_fatores
		| op_un fator error
		;

mais_fatores: op_mul fator mais_fatores    {;}
		|
		| error fator mais_fatores
		| op_mul error mais_fatores
		| op_mul fator error
		;

op_mul: '*'		{;}
		|'/'	{;}
		;

fator: ID 	{;}
		| numero 	{;}
		| '(' expressao ')'		{;}
		| '(' error ')'
		;

numero: NUMERO_INT		{;}
		| NUMERO_REAL	{;}
		| error 		{ esperado("integer or real number");}
		;

%%

int main (void)
{
	lineno = 1;
	yyparse();
	printf("DONE!\n");
	return 0;
}

void yyerror (char *s)
{
	fprintf(stderr, "Line %d: %s\n", lineno, s);
}

void esperado(char *s)
{
	fprintf(stderr,"Error: '%s' expected.\n", s);
}
