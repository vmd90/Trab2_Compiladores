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
#line 1 "analisador_sintatico.y" /* yacc.c:339  */

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
#define YYLAST   692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  334

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
       0,    42,    42,    43,    44,    45,    46,    47,    50,    51,
      52,    53,    53,    54,    57,    60,    61,    62,    63,    64,
      65,    66,    69,    70,    70,    72,    72,    74,    75,    78,
      79,    80,    83,    84,    85,    88,    89,    90,    93,    94,
      95,    96,    97,    98,    99,   100,   103,   104,   105,   106,
     107,   110,   111,   112,   113,   114,   117,   118,   119,   120,
     123,   124,   125,   126,   127,   128,   131,   134,   135,   136,
     137,   138,   141,   142,   143,   146,   147,   148,   151,   152,
     153,   154,   157,   158,   159,   160,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   184,   187,   188,   189,   190,
     191,   192,   195,   196,   197,   200,   201,   202,   205,   206,
     207,   208,   209,   212,   213,   216,   217,   218,   219,   222,
     223,   224,   225,   226,   229,   230,   233,   234,   235,   236,
     239,   240,   241
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
  "$accept", "programa", "corpo", "dc", "dc_c", "dc_v", "$@1", "$@2",
  "tipo_var", "variaveis", "mais_var", "dc_p", "parametros", "lista_par",
  "mais_par", "corpo_p", "dc_loc", "lista_arg", "argumentos", "mais_ident",
  "pfalsa", "comandos", "cmd", "condicao", "relacao", "expressao", "op_un",
  "outros_termos", "op_ad", "termo", "mais_fatores", "op_mul", "fator",
  "numero", YY_NULLPTR
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

#define YYPACT_NINF -155

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-155)))

#define YYTABLE_NINF -143

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      98,    29,    23,    27,     0,   204,   312,  -155,   579,   579,
     579,   596,    21,   161,   261,   346,   499,   269,   310,   587,
     218,   294,   610,   317,    91,  -155,   610,   618,   164,   164,
     543,  -155,  -155,   319,  -155,  -155,   650,   327,   571,   610,
     102,   215,   216,   236,   363,   315,   650,   650,   674,   368,
       7,    24,    13,    63,   367,    17,   389,   341,  -155,  -155,
    -155,  -155,  -155,   373,   610,   109,   102,   419,  -155,    85,
     330,  -155,  -155,   101,   465,   275,   504,   102,   102,   164,
     458,   164,   545,  -155,   610,   610,   394,   409,   412,   342,
    -155,  -155,  -155,  -155,   164,   164,  -155,    37,  -155,   362,
     362,   362,   108,   108,   230,   531,  -155,   316,    22,   421,
    -155,  -155,    62,    49,  -155,  -155,   148,  -155,   171,  -155,
    -155,  -155,   217,   205,  -155,   655,   655,  -155,  -155,  -155,
    -155,  -155,  -155,   102,   205,   246,   369,  -155,   422,   143,
     460,   160,   180,   468,   167,   189,  -155,  -155,   531,   531,
     531,   531,   531,  -155,  -155,  -155,  -155,  -155,   438,   445,
     381,   573,   597,   475,   477,   295,   432,   509,  -155,   289,
     613,  -155,    39,  -155,  -155,   613,  -155,  -155,  -155,   392,
     530,    55,   523,   330,   548,   392,  -155,  -155,  -155,   424,
     356,   356,  -155,  -155,   408,  -155,   508,   538,    11,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,   206,   206,   499,   499,   229,    84,   585,   159,
     203,   463,   463,   463,   463,   559,   431,  -155,   138,  -155,
     383,  -155,  -155,  -155,  -155,   447,  -155,   205,   205,   266,
     655,   643,  -155,  -155,   655,   655,   655,   655,  -155,  -155,
    -155,  -155,   362,   362,   400,  -155,  -155,  -155,  -155,   474,
    -155,   543,   448,   543,   543,   543,   660,   561,    42,  -155,
    -155,   486,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
     589,   591,   179,   179,   200,   297,   610,  -155,   610,   635,
    -155,  -155,  -155,   357,  -155,   389,  -155,   620,   164,   573,
     642,  -155,  -155,  -155,   103,  -155,   607,   626,    72,   307,
     603,   623,  -155,   225,  -155,   629,   637,   639,   644,   439,
     362,   651,  -155,  -155,  -155,  -155,  -155,  -155,   652,   656,
     499,   499,  -155,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     4,     5,     0,     7,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     6,
     142,   140,   141,     0,     0,     0,     0,     0,   102,     0,
       0,   115,   116,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,     0,     0,   142,     0,
      10,    12,    13,     8,     0,     0,    33,     0,    32,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
     101,   100,     0,     0,   104,   103,     0,   136,     0,   123,
     124,   113,     0,     0,   137,     0,     0,   107,   109,   108,
     106,   110,   111,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    82,     0,     0,
       0,     0,     0,    36,    35,    31,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    73,     0,    72,    68,     0,    69,    70,    67,     0,
       0,     0,     0,     0,     0,     0,   134,   135,   126,     0,
       0,     0,   105,   127,     0,   125,     0,     0,     0,    92,
      91,    93,    90,    87,    88,    89,    86,    17,    18,    19,
      20,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,    75,
       0,   120,   139,   138,   121,     0,   118,     0,     0,     0,
       0,     0,    99,    98,     0,     0,     0,     0,    23,    25,
      27,    22,     0,     0,     0,    47,    48,    49,    46,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,   131,
     132,     0,   129,    79,    80,    78,    95,    96,    97,    94,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
      40,    41,    42,     0,    43,    44,    38,     0,     0,     0,
       0,    52,    53,    54,     0,    51,     0,     0,     0,     0,
       0,     0,    57,     0,    56,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    60,     0,     0,
       0,     0,    24,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   488,  -155,   -73,   -16,  -155,  -155,   -95,   -27,
     619,   423,    60,  -154,   306,   405,  -155,  -155,   -50,   583,
     501,   -23,  -116,   233,  -155,   -45,  -155,   -65,  -155,  -103,
    -104,  -155,   -68,   482
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    14,    15,    16,   260,   280,   281,   158,   217,
      96,    58,   163,   218,   301,   261,   262,    68,   227,   171,
     242,    44,    45,    73,   133,    74,    75,   121,   122,    76,
     188,   189,   123,   124
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    54,    55,    49,    51,   159,   160,   135,   220,   190,
     191,   137,   246,   180,    94,   109,    69,   113,   100,   184,
     110,   111,    91,   172,     5,    92,    21,     7,     6,     8,
     193,   195,   168,   180,     4,    22,    64,   247,    52,    93,
     228,   106,    53,   228,   108,   -37,    95,   108,   -37,   101,
     177,   170,   140,   142,   143,   145,   116,   -77,    61,    62,
     117,   146,   147,   175,    97,  -142,   180,   153,   154,   -34,
     153,  -142,   -34,   182,   -74,   207,   208,   209,   210,   211,
    -142,  -142,  -142,  -142,   178,   253,   114,   317,   192,   118,
     232,   170,    47,   119,   120,   -37,    95,   176,   -37,     1,
     115,    64,   125,    70,   216,  -117,  -117,  -117,    53,   161,
     107,     2,  -117,  -117,   108,   231,   254,   237,   234,   236,
     229,   239,    48,   126,   273,   275,   237,   180,   276,   277,
     278,   279,   180,   269,   270,   272,  -117,   -50,   -55,   175,
      71,    72,   162,  -117,   197,   312,   314,    71,    72,   179,
     312,  -117,  -117,  -117,  -142,  -142,  -142,   282,   283,   285,
      94,    94,    23,   164,   166,    52,    24,   170,    94,    53,
    -142,  -142,   181,   -77,  -117,  -117,  -117,  -142,   198,  -142,
     299,   201,  -117,  -142,  -142,  -142,    71,    72,  -142,  -142,
     205,   252,    95,    95,   256,   200,   248,   249,   250,   251,
      95,   299,   204,   237,   257,  -117,   185,    28,   300,    71,
      72,  -130,  -130,  -130,   -59,   202,    77,    79,   183,    34,
    -117,  -117,  -117,    29,   206,   328,    94,  -130,  -130,   300,
      94,   165,    54,     9,  -130,   -31,  -130,    81,   258,    54,
    -130,  -130,  -130,  -130,  -130,   186,   187,   194,    35,    78,
      80,  -117,  -130,  -130,  -130,    71,    72,   252,    95,   -50,
     -58,   252,    95,   306,   162,   307,   309,   271,  -130,  -130,
      82,   311,  -130,  -130,  -130,  -130,   134,  -130,    61,    62,
     117,  -130,  -130,  -130,  -130,  -130,   186,   187,  -130,  -130,
     226,    25,  -117,  -117,   108,  -130,   216,  -130,   304,    31,
      53,  -130,  -130,  -130,  -130,  -130,   186,   187,   318,   118,
     138,   139,  -142,    10,   332,   333,    84,   169,  -142,    61,
      62,   117,   319,  -117,   223,    36,   300,    71,    72,  -142,
    -142,   116,   -59,    61,    62,   117,  -119,  -119,  -119,  -119,
      32,    11,   103,   151,    85,   170,   104,    26,    46,    59,
     118,   -77,  -119,  -119,   119,   120,    64,   240,    94,  -119,
      27,  -119,   102,   155,   118,  -119,  -119,  -119,   119,   120,
     179,   152,  -117,  -117,  -117,  -114,  -114,  -114,    83,   241,
     156,   157,   214,    90,   179,   -81,  -117,  -117,  -117,   -37,
      95,  -114,  -114,    60,   102,    61,    62,   117,  -114,    99,
    -114,   284,   105,  -117,  -114,  -114,  -114,    71,    72,    60,
     215,    61,    62,   117,  -128,  -128,  -128,  -117,   156,   157,
     112,    71,    72,   148,   108,   238,   118,    61,    62,   117,
    -128,  -128,   268,   224,    61,    62,   117,  -128,   149,  -128,
     326,   150,   118,  -128,  -128,  -128,  -128,  -128,   179,   288,
    -117,  -117,  -117,  -122,  -122,  -122,   174,   196,   118,   141,
     170,   225,   289,    53,   259,   118,   -77,   212,   327,  -122,
    -122,   127,   128,   129,   213,    52,  -122,   -28,  -122,    53,
      29,  -117,  -122,  -122,  -122,    71,    72,    60,   286,    61,
      62,   117,  -133,  -133,  -133,   199,   130,    17,    18,    20,
      28,   131,   132,   203,   221,   136,   222,    33,  -133,  -133,
    -119,  -119,  -119,   -28,    21,  -133,    29,  -133,    63,   -28,
     118,  -133,  -133,  -133,  -133,  -133,  -119,  -119,    86,    87,
      89,   230,   167,  -119,   244,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,   119,   120,    56,   -21,   144,    13,   -21,   235,
      53,   -21,  -119,  -119,  -119,  -119,  -119,   -45,   233,  -119,
     266,  -119,   295,    57,   245,  -119,  -119,  -119,   119,   120,
    -119,  -119,    65,   -28,   216,   -45,    29,  -119,    53,  -119,
      12,    57,    66,  -119,  -119,  -119,   119,   120,    12,   302,
     303,   305,    21,   -21,   -71,    13,   -21,    19,   219,   -21,
     -71,    22,    53,    13,   -21,    67,   297,   -21,   298,   -11,
     -21,    37,    13,   -21,   228,    38,   -21,   -11,   108,    50,
     255,   310,   315,    38,    39,   -85,   -11,   263,   264,   265,
     267,    40,    39,   -85,    41,   320,   308,    42,    43,    40,
      38,   316,    41,   313,   274,    42,    43,    53,    38,    39,
     -85,    60,   329,    61,    62,   321,    40,    39,   322,    41,
      38,   293,    42,    43,    40,    53,   323,    41,   324,    39,
      42,    43,    98,   325,   286,    88,    40,    61,    62,    41,
      57,   330,    42,    43,   287,   331,   290,   291,   292,   294,
     296,   173,   243
};

static const yytype_uint16 yycheck[] =
{
      16,    28,    29,    26,    27,   100,   101,    75,   162,   125,
     126,    76,     1,   116,     1,    65,    39,    67,     1,   122,
      65,    66,    15,     1,     1,     1,     5,     0,     5,    29,
     134,   135,   105,   136,     5,    14,    29,    26,     1,    15,
       1,    64,     5,     1,     5,    32,    33,     5,    35,    32,
       1,    29,    79,    80,    81,    82,     1,    35,     3,     4,
       5,    84,    85,     1,     1,    23,   169,    94,    95,    32,
      97,    29,    35,   118,    35,   148,   149,   150,   151,   152,
      38,    39,    40,    41,    35,     1,     1,    15,   133,    34,
      35,    29,     1,    38,    39,    32,    33,    35,    35,     1,
      15,    29,     1,     1,     1,     3,     4,     5,     5,     1,
       1,    13,     3,     4,     5,   180,    32,   185,   183,   184,
     170,   189,    31,    22,   240,   241,   194,   230,   244,   245,
     246,   247,   235,   237,   238,   239,    34,    29,    35,     1,
      38,    39,    34,    34,     1,   299,   300,    38,    39,     1,
     304,     3,     4,     5,     6,     7,     8,   252,   253,   254,
       1,     1,     1,   103,   104,     1,     5,    29,     1,     5,
      22,    23,     1,    35,     3,     4,     5,    29,    35,    31,
       1,     1,    34,    35,    36,    37,    38,    39,    40,    41,
       1,    32,    33,    33,    35,    35,   212,   213,   214,   215,
      33,     1,    35,   271,     1,    34,     1,     1,    29,    38,
      39,     6,     7,     8,    35,    35,     1,     1,     1,     1,
       3,     4,     5,    17,    35,   320,     1,    22,    23,    29,
       1,     1,   259,    29,    29,    35,    31,     1,    35,   266,
      35,    36,    37,    38,    39,    40,    41,     1,    30,    34,
      34,    34,     6,     7,     8,    38,    39,    32,    33,    29,
      35,    32,    33,   286,    34,   288,   289,     1,    22,    23,
      34,   298,     6,     7,     8,    29,     1,    31,     3,     4,
       5,    35,    36,    37,    38,    39,    40,    41,    22,    23,
       1,    30,     3,     4,     5,    29,     1,    31,     1,    30,
       5,    35,    36,    37,    38,    39,    40,    41,     1,    34,
      77,    78,    23,     1,   330,   331,     1,     1,    29,     3,
       4,     5,    15,    34,    29,    31,    29,    38,    39,    40,
      41,     1,    35,     3,     4,     5,     6,     7,     8,    23,
      30,    29,     1,     1,    29,    29,     5,     1,    31,    30,
      34,    35,    22,    23,    38,    39,    29,     1,     1,    29,
      14,    31,     5,     1,    34,    35,    36,    37,    38,    39,
       1,    29,     3,     4,     5,     6,     7,     8,    15,    23,
      18,    19,     1,    15,     1,    29,     3,     4,     5,    32,
      33,    22,    23,     1,     5,     3,     4,     5,    29,    32,
      31,     1,    29,    34,    35,    36,    37,    38,    39,     1,
      29,     3,     4,     5,     6,     7,     8,    34,    18,    19,
       1,    38,    39,    29,     5,     1,    34,     3,     4,     5,
      22,    23,     1,     1,     3,     4,     5,    29,    29,    31,
       1,    29,    34,    35,    36,    37,    38,    39,     1,     1,
       3,     4,     5,     6,     7,     8,    35,    35,    34,     1,
      29,    29,    14,     5,     1,    34,    35,    29,    29,    22,
      23,     6,     7,     8,    29,     1,    29,    14,    31,     5,
      17,    34,    35,    36,    37,    38,    39,     1,    14,     3,
       4,     5,     6,     7,     8,    35,    31,     9,    10,    11,
       1,    36,    37,    35,    29,     1,    29,    19,    22,    23,
       6,     7,     8,    14,     5,    29,    17,    31,    36,    20,
      34,    35,    36,    37,    38,    39,    22,    23,    46,    47,
      48,     1,     1,    29,    26,    31,     6,     7,     8,    35,
      36,    37,    38,    39,     1,    14,     1,    16,    17,     1,
       5,    20,    22,    23,     6,     7,     8,    14,    35,    29,
       1,    31,     1,    20,    26,    35,    36,    37,    38,    39,
      22,    23,     1,    14,     1,    14,    17,    29,     5,    31,
       1,    20,    11,    35,    36,    37,    38,    39,     1,   283,
     284,   285,     5,    14,    23,    16,    17,     1,     1,    20,
      29,    14,     5,    16,    17,    34,    17,    20,    17,    30,
      14,     1,    16,    17,     1,     5,    20,    30,     5,     1,
      35,     1,    15,     5,    14,    15,    30,   222,   223,   224,
     225,    21,    14,    15,    24,    32,     1,    27,    28,    21,
       5,    15,    24,     1,     1,    27,    28,     5,     5,    14,
      15,     1,     1,     3,     4,    32,    21,    14,    29,    24,
       5,     1,    27,    28,    21,     5,    29,    24,    29,    14,
      27,    28,    53,    29,    14,     1,    21,     3,     4,    24,
      20,    29,    27,    28,   261,    29,   263,   264,   265,   266,
     267,   108,   191
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    13,    43,     5,     1,     5,     0,    29,    29,
       1,    29,     1,    16,    44,    45,    46,    44,    44,     1,
      44,     5,    14,     1,     5,    30,     1,    14,     1,    17,
      47,    30,    30,    44,     1,    30,    31,     1,     5,    14,
      21,    24,    27,    28,    63,    64,    31,     1,    31,    63,
       1,    63,     1,     5,    51,    51,     1,    20,    53,    30,
       1,     3,     4,    75,    29,     1,    11,    34,    59,    63,
       1,    38,    39,    65,    67,    68,    71,     1,    34,     1,
      34,     1,    34,    15,     1,    29,    75,    75,     1,    75,
      15,    15,     1,    15,     1,    33,    52,     1,    52,    32,
       1,    32,     5,     1,     5,    29,    63,     1,     5,    60,
      67,    67,     1,    60,     1,    15,     1,     5,    34,    38,
      39,    69,    70,    74,    75,     1,    22,     6,     7,     8,
      31,    36,    37,    66,     1,    74,     1,    69,    65,    65,
      51,     1,    51,    51,     1,    51,    63,    63,    29,    29,
      29,     1,    29,    51,    51,     1,    18,    19,    50,    50,
      50,     1,    34,    54,    54,     1,    54,     1,    46,     1,
      29,    61,     1,    61,    35,     1,    35,     1,    35,     1,
      71,     1,    67,     1,    71,     1,    40,    41,    72,    73,
      64,    64,    67,    72,     1,    72,    35,     1,    35,    35,
      35,     1,    35,    35,    35,     1,    35,    46,    46,    46,
      46,    46,    29,    29,     1,    29,     1,    51,    55,     1,
      55,    29,    29,    29,     1,    29,     1,    60,     1,    60,
       1,    69,    35,    35,    69,     1,    69,    74,     1,    74,
       1,    23,    62,    62,    26,    26,     1,    26,    47,    47,
      47,    47,    32,     1,    32,    35,    35,     1,    35,     1,
      47,    57,    58,    57,    57,    57,     1,    57,     1,    72,
      72,     1,    72,    64,     1,    64,    64,    64,    64,    64,
      48,    49,    50,    50,     1,    50,    14,    53,     1,    14,
      53,    53,    53,     1,    53,     1,    53,    17,    17,     1,
      29,    56,    56,    56,     1,    56,    63,    63,     1,    63,
       1,    51,    55,     1,    55,    15,    15,    15,     1,    15,
      32,    32,    29,    29,    29,    29,     1,    29,    50,     1,
      29,    29,    47,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    43,    43,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    45,    46,    46,    46,    46,    46,
      46,    46,    47,    48,    47,    49,    47,    47,    47,    50,
      50,    50,    51,    51,    51,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    58,    59,    59,    59,
      59,    59,    60,    60,    60,    61,    61,    61,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    69,    69,    70,    70,    71,    71,    71,    71,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     5,     5,     6,     5,     4,     4,
       4,     0,     4,     4,     3,     6,     6,     6,     6,     6,
       6,     0,     6,     0,    13,     0,    13,     6,     0,     1,
       1,     1,     2,     2,     2,     2,     2,     0,     6,     6,
       6,     6,     6,     6,     6,     0,     3,     3,     3,     3,
       0,     4,     4,     4,     4,     4,     2,     2,     2,     0,
       5,     5,     5,     5,     5,     5,     1,     3,     3,     3,
       3,     0,     2,     2,     2,     2,     2,     0,     2,     2,
       2,     0,     3,     3,     3,     0,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     6,     6,     6,     5,     5,
       3,     3,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     0,     3,     0,
       3,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       0,     3,     3,     3,     1,     1,     1,     1,     3,     3,
       1,     1,     1
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
#line 42 "analisador_sintatico.y" /* yacc.c:1646  */
    { ; }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("program"); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 45 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 47 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("."); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 50 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 52 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("begin"); }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("end"); }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 61 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("const"); }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 62 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 63 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("="); }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 65 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 70 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("var"); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 72 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(":"); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 74 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("integer or real keyword");}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 83 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 84 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 88 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 89 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(","); }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 93 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 94 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("procedure"); }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 95 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 97 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 106 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 110 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 112 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(":"); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 117 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 118 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 123 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 125 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("begin"); }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 127 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("end"); }
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 128 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 131 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 134 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 135 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 137 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 141 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 142 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("id"); }
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 146 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 147 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1821 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 151 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 152 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("else"); }
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 157 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 159 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(";"); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 163 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 164 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 165 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 166 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 167 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 169 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 170 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 171 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 172 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("("); }
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 173 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(")"); }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 174 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("do"); }
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 175 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 176 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("then"); }
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 177 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 178 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado(":="); }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 179 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 180 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 181 "analisador_sintatico.y" /* yacc.c:1646  */
    {esperado("end");}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 184 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 187 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 188 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 189 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 190 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 191 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 192 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 195 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 200 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 201 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 205 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 212 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 213 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 216 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 222 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 229 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 230 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 233 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 234 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 235 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 239 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 240 "analisador_sintatico.y" /* yacc.c:1646  */
    {;}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 241 "analisador_sintatico.y" /* yacc.c:1646  */
    { esperado("integer or real number");}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2095 "y.tab.c" /* yacc.c:1646  */
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
#line 244 "analisador_sintatico.y" /* yacc.c:1906  */


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
