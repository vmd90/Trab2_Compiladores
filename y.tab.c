/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "analisador_sintatico2.y" /* yacc.c:339  */

void yyerror (char *s);
void esperado(char *s);

#include <stdio.h>
#include <stdlib.h>

extern int lineno;


#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 184 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  150
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    35,    40,    38,    33,    39,    30,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    32,    29,
      37,    31,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    44,    44,    45,    45,    46,    46,    47,
      50,    51,    51,    52,    55,    58,    59,    59,    60,    60,
      61,    61,    62,    62,    63,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    74,    75,    76,    79,    80,
      80,    83,    84,    84,    85,    88,    89,    89,    90,    90,
      91,    91,    92,    95,    96,    96,    97,    98,   101,   102,
     102,   105,   106,   106,   107,   110,   111,   111,   112,   112,
     113,   116,   119,   120,   120,   121,   122,   125,   126,   126,
     129,   130,   130,   131,   134,   135,   135,   136,   139,   140,
     140,   141,   144,   145,   145,   146,   147,   148,   148,   149,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     156,   156,   157,   157,   158,   159,   159,   160,   160,   161,
     162,   162,   163,   164,   164,   165,   168,   171,   172,   173,
     174,   175,   176,   179,   182,   183,   184,   187,   188,   191,
     192,   195,   198,   199,   202,   203,   206,   207,   208,   211,
     212
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMERO_INT", "NUMERO_REAL", "ID",
  "SIMB_DIFERENTE", "SIMB_MENOR_IGUAL", "SIMB_MAIOR_IGUAL", "COMENTARIO",
  "SIMB_ERRO", "SIMB_ATRIBUICAO", "SIMB_IGUAL", "PROGRAM", "P_BEGIN",
  "P_END", "CONST", "VAR", "REAL", "INTEGER", "PROCEDURE", "IF", "THEN",
  "ELSE", "WHILE", "FOR", "DO", "WRITE", "READ", "';'", "'.'", "'='",
  "':'", "','", "'('", "')'", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'",
  "$accept", "programa", "$@1", "$@2", "$@3", "corpo", "$@4", "dc", "dc_c",
  "$@5", "$@6", "$@7", "$@8", "dc_v", "$@9", "$@10", "$@11", "$@12",
  "tipo_var", "variaveis", "$@13", "mais_var", "$@14", "dc_p", "$@15",
  "$@16", "$@17", "parametros", "$@18", "lista_par", "$@19", "mais_par",
  "$@20", "corpo_p", "$@21", "$@22", "dc_loc", "lista_arg", "$@23",
  "argumentos", "$@24", "mais_ident", "$@25", "pfalsa", "$@26", "comandos",
  "$@27", "cmd", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "$@37", "$@38", "$@39", "condicao", "relacao",
  "expressao", "op_un", "outros_termos", "op_ad", "termo", "mais_fatores",
  "op_mul", "fator", "numero", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    59,
      46,    61,    58,    44,    40,    41,    62,    60,    43,    45,
      42,    47
};
# endif

#define YYPACT_NINF -199

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-199)))

#define YYTABLE_NINF -121

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      14,  -199,   182,   103,    27,  -199,    33,  -199,    -7,    -5,
    -199,   188,   188,   188,   188,  -199,   183,    94,    85,   189,
      51,   113,   135,   181,  -199,    20,  -199,  -199,  -199,   147,
    -199,   219,   193,  -199,  -199,  -199,   166,   203,  -199,    80,
     147,    93,    78,   147,   116,    32,    35,    43,   134,    79,
     220,   115,    10,    77,  -199,   221,  -199,    80,    80,    80,
    -199,  -199,    91,   197,   201,   116,   225,    59,   147,   222,
     116,   227,  -199,   141,  -199,  -199,    15,   133,   110,   157,
    -199,   116,  -199,   220,  -199,   220,  -199,  -199,  -199,   147,
    -199,   205,   208,    10,  -199,   220,  -199,  -199,   192,   236,
    -199,    34,   213,   214,   215,  -199,   188,  -199,   116,   223,
     116,  -199,  -199,   232,   227,   116,  -199,  -199,    11,    17,
    -199,  -199,  -199,   152,  -199,  -199,  -199,  -199,  -199,  -199,
     116,  -199,   116,   174,  -199,  -199,  -199,  -199,   116,   116,
      18,   220,    22,   220,    29,   147,  -199,   192,   192,  -199,
     220,  -199,   192,  -199,  -199,  -199,   117,    34,    34,  -199,
     220,   122,   188,   188,   188,   188,  -199,   216,   152,  -199,
    -199,   218,  -199,    11,  -199,   227,  -199,  -199,  -199,   152,
     105,  -199,   224,  -199,  -199,  -199,   110,   157,   226,  -199,
      13,   228,  -199,  -199,   229,  -199,  -199,  -199,   231,   233,
    -199,   237,  -199,   189,   238,   239,   220,    89,    30,  -199,
      24,  -199,  -199,  -199,  -199,   230,   105,  -199,  -199,   227,
    -199,   105,  -199,   152,  -199,  -199,   174,  -199,   243,   244,
    -199,   152,  -199,  -199,   189,   189,   189,   189,  -199,    24,
      24,   240,  -199,   192,  -199,  -199,    24,  -199,   193,   149,
     152,  -199,  -199,  -199,   152,  -199,  -199,   152,   152,   152,
    -199,  -199,  -199,  -199,  -199,   193,   193,  -199,   192,    19,
     193,  -199,  -199,   147,  -199,  -199,  -199,  -199,  -199,  -199,
    -199,    19,  -199,   220,  -199,  -199,   147,   144,  -199,   220,
    -199,   234,  -199,   129,  -199,   242,   245,  -199,  -199,  -199,
    -199
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     5,     0,     1,     0,     0,
       7,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     9,     2,    11,     0,
      26,     0,     0,     4,     6,     8,     0,     0,    20,     0,
       0,   123,     0,     0,   136,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    46,     0,    14,     0,     0,     0,
     149,   150,     0,     0,     0,   136,     0,     0,     0,   117,
     136,     0,   119,     0,   134,   135,     0,     0,     0,   138,
     103,   136,    97,     0,    93,     0,    13,    10,    89,     0,
      39,     0,     0,     0,    42,     0,    38,    30,     0,     0,
      48,     0,     0,     0,     0,    22,     0,    12,   136,     0,
     136,    73,   121,     0,     0,   136,   114,    78,     0,     0,
     125,   122,   112,     0,   128,   130,   129,   127,   131,   132,
     136,   146,   136,   143,   147,   139,   140,   133,   136,   136,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    40,
       0,    41,     0,    37,    35,    36,     0,     0,     0,    54,
       0,     0,     0,     0,     0,     0,    15,     0,     0,   116,
     124,     0,   118,     0,    81,     0,    77,    75,    72,     0,
       0,   126,     0,   144,   145,   141,     0,   138,     0,   105,
       0,     0,    99,    96,     0,    95,    92,    90,     0,     0,
      43,     0,    32,     0,     0,     0,     0,     0,     0,    50,
       0,    17,    19,    21,    23,     0,     0,    74,    79,     0,
      80,     0,    85,     0,   109,   148,   143,   137,     0,     0,
     107,     0,    98,    94,     0,     0,     0,     0,    25,     0,
       0,     0,    59,     0,    56,    53,     0,    71,     0,     0,
       0,   111,    82,   113,     0,    84,   142,     0,     0,     0,
     100,    27,    29,    31,    33,     0,     0,    55,     0,     0,
       0,    45,    66,     0,   102,    86,   104,   106,   108,    47,
      49,     0,    62,     0,    58,    51,     0,     0,    60,     0,
      61,     0,    68,     0,    63,     0,     0,    70,    65,    67,
      69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -199,  -199,  -199,  -199,  -199,   217,  -199,  -199,   -89,  -199,
    -199,  -199,  -199,   -18,  -199,  -199,  -199,  -199,  -143,   -24,
    -199,   155,  -199,   -88,  -199,  -199,  -199,    81,  -199,  -198,
    -199,   -31,  -199,   -48,  -199,  -199,  -199,   185,  -199,  -108,
    -199,    82,  -199,   -49,  -199,   -40,  -199,  -121,  -199,  -199,
    -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,  -199,
     -52,  -199,   -60,  -199,    67,  -199,   119,    39,  -199,    72,
     142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     9,    14,    17,    40,    18,    19,    23,
      37,    59,   165,   247,    50,    92,   152,   237,   156,   207,
      93,    96,   150,    56,    99,   158,   246,   161,   206,   208,
     268,   284,   289,   248,   286,   296,   249,    72,   114,   119,
     173,   176,   219,   224,   254,    48,   145,    49,   143,   141,
      64,   139,   229,   259,    65,   179,    66,   115,    67,    68,
      76,   130,    77,    78,   137,   138,    79,   185,   186,   133,
     134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    32,   180,    73,   198,   199,   171,    53,   241,   201,
     116,    94,   174,   109,   230,     1,   122,   166,   177,   189,
     282,    38,    12,   192,    13,    30,    91,     2,   113,   140,
     195,   244,     8,    80,    10,   159,    82,   123,   -34,   231,
     175,    31,   -44,    95,    84,   -44,   -83,   216,   283,   146,
     169,    39,   178,   190,   -64,   172,   167,   193,   221,   142,
     111,   144,    11,   -57,   196,   245,    81,   220,   160,    83,
     181,   151,   182,   211,   212,   213,   214,    85,    97,    69,
      88,    33,   -76,    60,    61,   290,    28,   188,   -76,    70,
     242,   294,   105,    71,  -120,    26,  -110,  -110,  -110,    29,
     269,   -76,   255,     7,  -115,   197,   222,   -76,    89,    98,
     260,   252,    71,    60,    61,   131,  -120,   191,   202,   194,
     106,   243,  -120,   209,    27,   281,   200,  -101,   223,   274,
     297,  -110,  -110,   275,   -87,    86,   276,   277,   278,   124,
     125,   126,   120,    34,   132,   292,   203,   -28,    41,    87,
     272,   210,    42,    41,    74,    75,   121,    42,   298,   293,
     271,    43,   -91,   273,   127,    35,    43,   251,    44,   128,
     129,    45,   253,    44,    46,    47,    45,   279,   280,    46,
      47,    62,   285,     5,    24,   238,    36,     6,    25,    15,
      30,   265,   266,   153,    54,   135,   136,    57,   270,   102,
     103,   104,   -24,   -34,    16,   -24,    31,   -52,   -24,   -34,
     154,   155,   107,    55,   183,   184,   261,   262,   263,   264,
      51,    90,   100,   -73,    52,    52,   101,   -73,   117,    20,
      21,    22,   118,   287,    58,   108,   110,   147,   204,   205,
     148,   157,   162,   163,   164,   168,   291,   170,   149,   295,
     288,   215,   112,   217,   227,   218,   250,   187,   226,   225,
     234,   228,   235,   232,   233,   256,   236,   239,   240,   257,
     258,   299,     0,     0,   300,   267
};

static const yytype_int16 yycheck[] =
{
      40,    19,   123,    43,   147,   148,   114,    31,   206,   152,
      70,     1,     1,    65,     1,     1,     1,   106,     1,     1,
       1,     1,    29,     1,    29,     1,    50,    13,    68,    81,
       1,     1,     5,     1,     1,     1,     1,    22,    14,    26,
      29,    17,    32,    33,     1,    35,    35,   168,    29,    89,
     110,    31,    35,    35,    35,   115,   108,    35,   179,    83,
       1,    85,    29,    29,    35,    35,    34,   175,    34,    34,
     130,    95,   132,   162,   163,   164,   165,    34,     1,     1,
       1,    30,    23,     3,     4,   283,     1,   139,    29,    11,
       1,   289,     1,    34,     1,     1,     3,     4,     5,    14,
     243,    23,   223,     0,    11,   145,     1,    29,    29,    32,
     231,   219,    34,     3,     4,     5,    23,   141,     1,   143,
      29,    32,    29,     1,    30,   268,   150,    34,    23,   250,
       1,    38,    39,   254,    29,     1,   257,   258,   259,     6,
       7,     8,     1,    30,    34,     1,    29,    32,     1,    15,
       1,    29,     5,     1,    38,    39,    15,     5,    29,    15,
     248,    14,    15,    14,    31,    30,    14,   216,    21,    36,
      37,    24,   221,    21,    27,    28,    24,   265,   266,    27,
      28,    39,   270,     1,     1,   203,     5,     5,     5,     1,
       1,   239,   240,     1,     1,    38,    39,    31,   246,    57,
      58,    59,    14,    14,    16,    17,    17,    14,    20,    20,
      18,    19,    15,    20,    40,    41,   234,   235,   236,   237,
       1,     1,     1,     1,     5,     5,     5,     5,     1,    12,
      13,    14,     5,   273,    31,    34,    11,    32,   157,   158,
      32,     5,    29,    29,    29,    22,   286,    15,    93,    15,
     281,    35,    67,    35,   187,   173,    26,   138,   186,    35,
      29,    35,    29,    35,    35,   226,    29,    29,    29,    26,
      26,    29,    -1,    -1,    29,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    13,    43,    44,     1,     5,     0,     5,    45,
       1,    29,    29,    29,    46,     1,    16,    47,    49,    50,
      47,    47,    47,    51,     1,     5,     1,    30,     1,    14,
       1,    17,    55,    30,    30,    30,     5,    52,     1,    31,
      48,     1,     5,    14,    21,    24,    27,    28,    87,    89,
      56,     1,     5,    61,     1,    20,    65,    31,    31,    53,
       3,     4,   112,    87,    92,    96,    98,   100,   101,     1,
      11,    34,    79,    87,    38,    39,   102,   104,   105,   108,
       1,    34,     1,    34,     1,    34,     1,    15,     1,    29,
       1,    61,    57,    62,     1,    33,    63,     1,    32,    66,
       1,     5,   112,   112,   112,     1,    29,    15,    34,   102,
      11,     1,    79,    87,    80,    99,   104,     1,     5,    81,
       1,    15,     1,    22,     6,     7,     8,    31,    36,    37,
     103,     5,    34,   111,   112,    38,    39,   106,   107,    93,
     102,    91,    61,    90,    61,    88,    87,    32,    32,    63,
      64,    61,    58,     1,    18,    19,    60,     5,    67,     1,
      34,    69,    29,    29,    29,    54,    50,   102,    22,   104,
      15,    81,   104,    82,     1,    29,    83,     1,    35,    97,
      89,   104,   104,    40,    41,   109,   110,   108,   102,     1,
      35,    61,     1,    35,    61,     1,    35,    87,    60,    60,
      61,    60,     1,    29,    69,    69,    70,    61,    71,     1,
      29,    50,    50,    50,    50,    35,    89,    35,    83,    84,
      81,    89,     1,    23,    85,    35,   111,   106,    35,    94,
       1,    26,    35,    35,    29,    29,    29,    59,    55,    29,
      29,    71,     1,    32,     1,    35,    68,    55,    75,    78,
      26,    85,    81,    85,    86,    89,   109,    26,    26,    95,
      89,    55,    55,    55,    55,    75,    75,    35,    72,    60,
      75,    65,     1,    14,    89,    89,    89,    89,    89,    65,
      65,    60,     1,    29,    73,    65,    76,    87,    73,    74,
      71,    87,     1,    15,    71,    15,    77,     1,    29,    29,
      29
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    43,    45,    43,    46,    43,    43,
      47,    48,    47,    47,    49,    50,    51,    50,    52,    50,
      53,    50,    54,    50,    50,    55,    56,    55,    57,    55,
      58,    55,    59,    55,    55,    60,    60,    60,    61,    62,
      61,    63,    64,    63,    63,    65,    66,    65,    67,    65,
      68,    65,    65,    69,    70,    69,    69,    69,    71,    72,
      71,    73,    74,    73,    73,    75,    76,    75,    77,    75,
      75,    78,    79,    80,    79,    79,    79,    81,    82,    81,
      83,    84,    83,    83,    85,    86,    85,    85,    87,    88,
      87,    87,    89,    90,    89,    89,    89,    91,    89,    89,
      89,    92,    89,    93,    89,    94,    89,    95,    89,    89,
      96,    89,    97,    89,    89,    98,    89,    99,    89,    89,
     100,    89,    89,   101,    89,    89,   102,   103,   103,   103,
     103,   103,   103,   104,   105,   105,   105,   106,   106,   107,
     107,   108,   109,   109,   110,   110,   111,   111,   111,   112,
     112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     6,     0,     6,     0,     6,     5,
       4,     0,     5,     4,     3,     6,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     6,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     1,     1,     1,     2,     0,
       3,     2,     0,     3,     0,     6,     0,     7,     0,     7,
       0,     7,     0,     3,     0,     4,     3,     0,     4,     0,
       5,     2,     0,     3,     0,     5,     0,     6,     0,     6,
       5,     1,     3,     0,     4,     3,     0,     2,     0,     3,
       2,     0,     3,     0,     2,     0,     3,     0,     3,     0,
       4,     0,     4,     0,     5,     4,     4,     0,     5,     4,
       6,     0,     7,     0,     7,     0,     7,     0,     7,     5,
       0,     6,     0,     6,     3,     0,     4,     0,     4,     2,
       0,     3,     3,     0,     4,     3,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     0,     3,     0,     1,
       1,     3,     3,     0,     1,     1,     1,     1,     3,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 43 "analisador_sintatico2.y" /* yacc.c:1646  */
    { printf("SUCCESS!\n"); exit(0); }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("program"); }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 45 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 46 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 47 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("."); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 50 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 51 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("begin"); }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 52 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("end"); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("const"); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 60 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 61 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("="); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 66 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 67 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("var"); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 68 "analisador_sintatico2.y" /* yacc.c:1646  */
    {; }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 69 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(":"); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 70 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 74 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 75 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 76 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("integer, real");}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 79 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 80 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 83 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 84 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(","); }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 88 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 89 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("procedure"); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 90 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 91 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 95 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 96 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 97 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 101 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 102 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(":"); }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 105 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 106 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 110 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 111 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("begin"); }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 112 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("end"); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 113 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 116 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 119 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 120 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 121 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 125 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 126 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 129 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 130 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 134 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 135 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("else"); }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 139 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 140 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 144 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 145 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 146 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 147 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 148 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 149 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 150 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 151 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("while"); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 152 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 153 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 154 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("do"); }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 155 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 156 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("if"); }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 157 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("then"); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 158 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 159 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 160 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado(":="); }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 161 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 162 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 163 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 164 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("begin"); }
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 165 "analisador_sintatico2.y" /* yacc.c:1646  */
    { esperado("end"); }
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 168 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 171 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 172 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 173 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 174 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 175 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 176 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 179 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 182 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 183 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 187 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 191 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 192 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 195 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 198 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 202 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 203 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 206 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 207 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 208 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 211 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 212 "analisador_sintatico2.y" /* yacc.c:1646  */
    {;}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2053 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 215 "analisador_sintatico2.y" /* yacc.c:1906  */


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
