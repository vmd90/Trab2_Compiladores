/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMERO_INT = 258,
    NUMERO_REAL = 259,
    ID = 260,
    SIMB_DIFERENTE = 261,
    SIMB_MENOR_IGUAL = 262,
    SIMB_MAIOR_IGUAL = 263,
    COMENTARIO = 264,
    SIMB_ERRO = 265,
    SIMB_ATRIBUICAO = 266,
    SIMB_IGUAL = 267,
    PROGRAM = 268,
    P_BEGIN = 269,
    P_END = 270,
    CONST = 271,
    VAR = 272,
    REAL = 273,
    INTEGER = 274,
    PROCEDURE = 275,
    IF = 276,
    THEN = 277,
    ELSE = 278,
    WHILE = 279,
    FOR = 280,
    DO = 281,
    WRITE = 282,
    READ = 283
  };
#endif
/* Tokens.  */
#define NUMERO_INT 258
#define NUMERO_REAL 259
#define ID 260
#define SIMB_DIFERENTE 261
#define SIMB_MENOR_IGUAL 262
#define SIMB_MAIOR_IGUAL 263
#define COMENTARIO 264
#define SIMB_ERRO 265
#define SIMB_ATRIBUICAO 266
#define SIMB_IGUAL 267
#define PROGRAM 268
#define P_BEGIN 269
#define P_END 270
#define CONST 271
#define VAR 272
#define REAL 273
#define INTEGER 274
#define PROCEDURE 275
#define IF 276
#define THEN 277
#define ELSE 278
#define WHILE 279
#define FOR 280
#define DO 281
#define WRITE 282
#define READ 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
