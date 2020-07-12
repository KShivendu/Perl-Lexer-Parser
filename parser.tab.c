/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y" /* yacc.c:337  */

#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "cgen.h"
// #define YYSTYPE int
extern int yylex(void);
extern int line_num;
extern FILE *yyin;
extern int yylineno;
// extern yylval; // declare yylval which is to be used in lexer.l

#line 84 "parser.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TK_EOF = 0,
    ERROR_MESSAGE = 258,
    KW_STATIC = 259,
    KW_TRUE = 260,
    KW_FALSE = 261,
    KW_DO = 262,
    KW_IF = 263,
    KW_NOT = 264,
    KW_BOOLEAN = 265,
    KW_BREAK = 266,
    KW_ELSE = 267,
    KW_AND = 268,
    KW_INTEGER = 269,
    KW_STRING = 270,
    KW_CONTINUE = 271,
    KW_FOR = 272,
    KW_MOD = 273,
    KW_CHARACTER = 274,
    KW_VOID = 275,
    KW_RETURN = 276,
    KW_END = 277,
    KW_BEGIN = 278,
    KW_REAL = 279,
    KW_WHILE = 280,
    KW_OR = 281,
    KW_MAIN = 282,
    KW_READSTRING = 283,
    KW_READINTEGER = 284,
    KW_READREAL = 285,
    KW_WRITESTRING = 286,
    KW_WRITEINTEGER = 287,
    KW_WRITEREAL = 288,
    VARIABLE = 289,
    IDENTIFIER = 290,
    CONSTANT_STRING = 291,
    POSITIVEINT = 292,
    REAL = 293,
    OP_ADDSUB = 294,
    OP_INCDEC = 295,
    OP_BITWISE_OR = 296,
    OP_XOR = 297,
    OP_BITWISE_AND = 298,
    OP_MULT = 299,
    OP_DIVIS = 300,
    OP_REM = 301,
    OP_EQUAL = 302,
    OP_EQUALITY = 303,
    OP_RELTIONAL = 304,
    OP_SHIFT = 305,
    OP_ASSIGNMENT = 306,
    OP_SEMICOLON = 307,
    OP_LEFT_PARENTHESIS = 308,
    OP_RIGHT_PARENTHESIS = 309,
    OP_TILDE = 310,
    OP_COMMA = 311,
    OP_LEFT_BRACKET = 312,
    OP_RIGHT_BRACKET = 313,
    OP_NOT = 314,
    LEFT_CURLY_BRACKET = 315,
    RIGHT_CURLY_BRACKET = 316,
    KW_SUB = 317,
    KW_FOR_EACH = 318,
    KW_UNTIL = 319,
    POSITIVE_INT = 320,
    OP_DIFFERENT = 321,
    REGEX_OPERATOR = 322,
    NEG_REGEX_OPERATOR = 323,
    DOT_OPERATOR = 324,
    SPL_LIST_ARR_VAR = 325,
    T_ASSIGN_OPER = 326,
    OP_COLON = 327,
    OP_QUESTION = 328,
    KW_PRINT = 329,
    OP_RELATIONAL = 330,
    OP_NOTEQUAL = 331,
    OP_GREATER = 332,
    OP_GREATEROREQUAL = 333,
    OP_LESSOREQUAL = 334,
    OP_LESS = 335,
    OP_PLUS = 336,
    OP_MINUS = 337,
    KW_DIV = 338,
    KW_THEN = 339
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 142 "parser.y" /* yacc.c:352  */

    // const Base *stmnt;
    double number;
    int integer;
    char* string;
    // std::string *string;

#line 221 "parser.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

#define YYUNDEFTOK  2
#define YYMAXUTOK   339

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   172,   172,   176,   177,   181,   182,   186,   189,   190,
     191,   195,   196,   197,   198,   202,   203,   207,   208,   209,
     210,   211,   217,   221,   225,   226,   230,   231,   232,   236,
     239,   240,   243,   244,   248,   249,   250,   254,   255,   256,
     257,   263,   267,   268,   269,   273,   274,   278,   279,   280,
     284,   285,   289,   290,   294,   295,   299,   300,   304,   305,
     309,   310,   314,   315,   319,   320,   324,   325,   329,   330,
     334,   335,   336,   340,   341,   342,   346,   347,   348,   349,
     350,   354,   355,   356,   357,   358,   362,   363,   367,   368,
     372,   373,   374,   375,   380,   381
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "TK_EOF", "error", "$undefined", "ERROR_MESSAGE", "KW_STATIC",
  "KW_TRUE", "KW_FALSE", "KW_DO", "KW_IF", "KW_NOT", "KW_BOOLEAN",
  "KW_BREAK", "KW_ELSE", "KW_AND", "KW_INTEGER", "KW_STRING",
  "KW_CONTINUE", "KW_FOR", "KW_MOD", "KW_CHARACTER", "KW_VOID",
  "KW_RETURN", "KW_END", "KW_BEGIN", "KW_REAL", "KW_WHILE", "KW_OR",
  "KW_MAIN", "KW_READSTRING", "KW_READINTEGER", "KW_READREAL",
  "KW_WRITESTRING", "KW_WRITEINTEGER", "KW_WRITEREAL", "VARIABLE",
  "IDENTIFIER", "CONSTANT_STRING", "POSITIVEINT", "REAL", "OP_ADDSUB",
  "OP_INCDEC", "OP_BITWISE_OR", "OP_XOR", "OP_BITWISE_AND", "OP_MULT",
  "OP_DIVIS", "OP_REM", "OP_EQUAL", "OP_EQUALITY", "OP_RELTIONAL",
  "OP_SHIFT", "OP_ASSIGNMENT", "OP_SEMICOLON", "OP_LEFT_PARENTHESIS",
  "OP_RIGHT_PARENTHESIS", "OP_TILDE", "OP_COMMA", "OP_LEFT_BRACKET",
  "OP_RIGHT_BRACKET", "OP_NOT", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "KW_SUB", "KW_FOR_EACH", "KW_UNTIL",
  "POSITIVE_INT", "OP_DIFFERENT", "REGEX_OPERATOR", "NEG_REGEX_OPERATOR",
  "DOT_OPERATOR", "SPL_LIST_ARR_VAR", "T_ASSIGN_OPER", "OP_COLON",
  "OP_QUESTION", "KW_PRINT", "OP_RELATIONAL", "OP_NOTEQUAL", "OP_GREATER",
  "OP_GREATEROREQUAL", "OP_LESSOREQUAL", "OP_LESS", "OP_PLUS", "OP_MINUS",
  "KW_DIV", "KW_THEN", "$accept", "ROOT", "ExtDef", "ExtDeclaration",
  "FuncDeclaration", "ParameterList", "Parameter", "StatementList",
  "Statement", "FunctionCalling", "CompoundStatement",
  "CompoundStatement_2", "SelectionStatement", "if_main", "else_expr",
  "else_if_expr", "ExpressionStatement", "IterationStatement",
  "Expression", "AssignmentExpression", "ASSIGN_OPER",
  "ConditionalExpression", "LogicalOrExpression", "LogicalAndExpression",
  "InclusiveOrExpression", "ExclusiveOrExpression", "AndExpression",
  "EqualityExpression", "RelationalExpression", "ShiftExpression",
  "AdditiveExpression", "MultiplicativeExpression", "MultDivRemOP",
  "UnaryExpression", "UnaryOperator", "PostfixExpression",
  "PostfixExpression2", "ArgumentExpressionList", "PrimaryExpression",
  "Constant", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -91

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     138,   -43,   -13,   -11,    88,   -10,    -9,    -6,   -85,   -85,
      49,   -85,   -85,   -85,   -85,   -85,   184,    17,    -3,   -85,
     -85,    29,   138,   -85,    -7,   -85,   225,     4,   -85,   -85,
     -85,   -85,   -85,     5,   -85,   -85,   -18,    21,    19,    22,
      33,    14,   -12,    28,    26,   -21,   -26,    49,   -25,    31,
     -85,   225,   350,   350,    30,   -85,    49,   -16,   -24,   -85,
     -85,   -85,   -85,    25,   -85,   -85,    49,   -85,   -85,   -85,
     -85,   298,    69,   -85,    49,   350,    49,    49,    49,    49,
      49,    49,    49,    49,   -85,   -85,   -85,    49,   -85,   -85,
     350,   -85,   -85,   322,   350,    56,   -16,    34,    57,    58,
     -85,    61,   -85,   -85,   -85,   -85,   -85,   -85,   -23,   -85,
     -85,    63,    -1,   -85,    21,    40,    19,    22,    33,    14,
     -12,    28,    26,   -21,   -85,   -85,   -85,   -85,   -85,   -19,
      60,   -85,   -85,    95,   266,   350,   225,   -85,   -24,   225,
      68,   225,   -85,    49,   -85,   350,   -85,    72,   184,   117,
      78,   -85,   -85,   -85,   350,    76,   -85,   -85,    49,    77,
     225,   350,    90,   -85,    98,   -85,   -85,   103,    82,   -85,
     225,   225,   -85,   100,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    91,     0,    95,    77,
       0,    76,    78,    34,    79,    80,     0,     0,     0,    94,
      93,     0,     2,     3,     0,     5,    16,     0,    17,    18,
      32,    20,    21,     0,    41,    43,    48,    50,    52,    54,
      56,    58,    60,    62,    64,    66,    68,     0,    73,    81,
      92,     0,     0,     0,     0,    36,     0,     0,     8,    91,
      74,    81,    24,     0,    23,     7,     0,     1,     4,     6,
      15,    19,    30,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    71,    72,     0,    46,    45,
       0,    75,    85,     0,     0,     0,     0,     0,     0,     0,
      90,     0,    68,    42,    11,    12,    14,    13,     0,     9,
      25,     0,     0,    26,    51,     0,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    44,    86,    88,    83,     0,
       0,    84,    47,     0,     0,     0,     0,    22,     0,     0,
       0,     0,    33,     0,    87,     0,    82,     0,     0,    27,
       0,    37,    10,    40,     0,     0,    49,    89,     0,     0,
       0,     0,     0,    31,     0,    25,    28,     0,     0,    38,
       0,     0,    39,     0,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   140,   -85,   -85,    27,   -15,    15,     0,
     142,   -85,   -85,    52,   -85,   -85,   163,   -85,   -48,   -84,
     -85,   -53,   -85,    94,    93,    99,   101,   104,   106,   107,
     102,    97,   -85,    -8,   -85,   -85,   -85,   -85,    20,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    22,    23,    24,   108,   109,    25,    26,    54,
      28,    64,    29,    30,   113,    72,    31,    32,    33,    34,
      90,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    87,    46,    47,    48,   128,   129,    49,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    63,    60,   101,    98,    99,   125,   140,    74,   127,
     104,    70,   105,   111,   106,    92,    27,    51,    59,     7,
       8,    88,    27,    84,    85,    86,    27,   115,    93,    67,
      61,   137,    94,   138,    76,   144,    97,   145,    57,    91,
      52,   107,    53,    56,    95,    89,   130,    58,   102,    19,
      66,    27,    65,    16,    20,    75,    71,    73,   102,   141,
      77,   157,    80,    81,    78,    83,   102,    61,   102,   102,
     102,   102,   102,   102,   102,   102,    79,   103,    82,   124,
      96,   112,   100,    59,     7,     8,   110,   150,     9,    10,
     156,   131,    11,    12,    61,   133,    61,    61,    61,    61,
      61,    61,    61,    61,    14,   164,   162,    61,    15,     4,
     135,   134,   143,   167,    19,   136,   132,   139,   146,    20,
     147,   154,     6,     7,     8,   158,   155,     9,    10,   160,
     161,    11,    12,   159,    27,   102,    27,   163,   165,    27,
      13,    27,   171,    14,   168,     1,     2,    15,    27,   149,
     102,   151,   169,    19,   153,     3,   173,   170,    20,     4,
      27,   174,    68,     5,   142,   152,    69,    55,   114,   116,
      27,    27,     6,     7,     8,   166,   117,     9,    10,   118,
     123,    11,    12,   119,   122,   172,   120,     0,   121,     0,
      13,     1,     2,    14,     0,     0,     0,    15,    16,     0,
      17,     3,    18,    19,     0,     4,     0,     0,    20,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       8,     0,     0,     9,    10,     0,     0,    11,    12,     0,
       0,     0,     1,     2,     0,     0,    13,     0,     0,    14,
       0,     0,     3,    15,    16,    62,     4,     0,    18,    19,
       5,     0,     0,     0,    20,     0,     0,     0,     0,     6,
       7,     8,     0,     0,     9,    10,     0,     0,    11,    12,
       0,     0,     0,     1,     2,     0,     0,    13,     0,     0,
      14,     0,     0,     3,    15,    16,     0,     4,     0,    18,
      19,     5,     0,     0,     0,    20,     0,     0,     0,     0,
       6,     7,     8,     0,     0,     9,    10,     0,     0,    11,
      12,   -90,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    14,     0,     0,   -90,    15,   148,     0,     0,     0,
      18,    19,     0,     0,     0,     0,    20,     0,     0,   -90,
     -90,     0,     0,   -90,   -90,   -90,   -90,   -90,   -90,     0,
       0,   -90,     0,     0,     0,   -90,     6,     7,     8,     0,
       0,     9,    10,     0,     0,    11,    12,   -90,     0,   -90,
       0,   -90,     0,   -90,     0,     0,   126,    14,     0,     0,
       0,    15,     0,     0,     6,     7,     8,    19,     0,     9,
      10,     0,    20,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,    15,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
      20
};

static const yytype_int16 yycheck[] =
{
       0,    16,    10,    56,    52,    53,    90,     8,    26,    93,
      34,    26,    36,    66,    38,    40,    16,    60,    34,    35,
      36,    47,    22,    44,    45,    46,    26,    75,    53,     0,
      10,    54,    57,    56,    13,    54,    51,    56,    47,    47,
      53,    65,    53,    53,    69,    71,    94,    53,    56,    65,
      53,    51,    35,    60,    70,    73,    52,    52,    66,    60,
      41,   145,    48,    75,    42,    39,    74,    47,    76,    77,
      78,    79,    80,    81,    82,    83,    43,    57,    50,    87,
      49,    12,    52,    34,    35,    36,    61,   135,    39,    40,
     143,    35,    43,    44,    74,    61,    76,    77,    78,    79,
      80,    81,    82,    83,    55,   158,   154,    87,    59,    21,
      52,    54,    72,   161,    65,    54,    96,    54,    58,    70,
      25,    53,    34,    35,    36,    53,   141,    39,    40,    12,
      52,    43,    44,   148,   134,   143,   136,    61,    61,   139,
      52,   141,    60,    55,    54,     7,     8,    59,   148,   134,
     158,   136,    54,    65,   139,    17,   171,    54,    70,    21,
     160,    61,    22,    25,   112,   138,    24,     4,    74,    76,
     170,   171,    34,    35,    36,   160,    77,    39,    40,    78,
      83,    43,    44,    79,    82,   170,    80,    -1,    81,    -1,
      52,     7,     8,    55,    -1,    -1,    -1,    59,    60,    -1,
      62,    17,    64,    65,    -1,    21,    -1,    -1,    70,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      -1,    -1,     7,     8,    -1,    -1,    52,    -1,    -1,    55,
      -1,    -1,    17,    59,    60,    61,    21,    -1,    64,    65,
      25,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      -1,    -1,    -1,     7,     8,    -1,    -1,    52,    -1,    -1,
      55,    -1,    -1,    17,    59,    60,    -1,    21,    -1,    64,
      65,    25,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,
      34,    35,    36,    -1,    -1,    39,    40,    -1,    -1,    43,
      44,    13,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    -1,    -1,    26,    59,    60,    -1,    -1,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    -1,    41,
      42,    -1,    -1,    45,    46,    47,    48,    49,    50,    -1,
      -1,    53,    -1,    -1,    -1,    57,    34,    35,    36,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    69,    -1,    71,
      -1,    73,    -1,    75,    -1,    -1,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    34,    35,    36,    65,    -1,    39,
      40,    -1,    70,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    17,    21,    25,    34,    35,    36,    39,
      40,    43,    44,    52,    55,    59,    60,    62,    64,    65,
      70,    86,    87,    88,    89,    92,    93,    94,    95,    97,
      98,   101,   102,   103,   104,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   118,   119,   120,   123,
     124,    60,    53,    53,    94,   101,    53,    47,    53,    34,
     118,   123,    61,    92,    96,    35,    53,     0,    88,    95,
      92,    52,   100,    52,    26,    73,    13,    41,    42,    43,
      48,    75,    50,    39,    44,    45,    46,   117,    47,    71,
     105,   118,    40,    53,    57,    69,    49,    92,   103,   103,
      52,   106,   118,   123,    34,    36,    38,    65,    90,    91,
      61,   106,    12,    99,   108,   103,   109,   110,   111,   112,
     113,   114,   115,   116,   118,   104,    54,   104,   121,   122,
     103,    35,   123,    61,    54,    52,    54,    54,    56,    54,
       8,    60,    98,    72,    54,    56,    58,    25,    60,    93,
     103,    93,    91,    93,    53,    92,   106,   104,    53,    92,
      12,    52,   103,    61,   106,    61,    93,   103,    54,    54,
      54,    60,    93,    92,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    87,    87,    88,    88,    89,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    94,    95,    96,    96,    97,    97,    97,    98,
      99,    99,   100,   100,   101,   101,   101,   102,   102,   102,
     102,   103,   104,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   118,   118,   118,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     0,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     2,
       1,     1,     4,     2,     1,     2,     3,     5,     7,     7,
       0,     4,     0,     3,     1,     2,     2,     5,     8,     9,
       5,     1,     3,     1,     3,     1,     1,     3,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     2,     1,     2,     1,     3,
       2,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 172 "parser.y" /* yacc.c:1652  */
    {printf("ROOT : ExtDef\n"); }
#line 1514 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 176 "parser.y" /* yacc.c:1652  */
    {printf("ExtDef : ExtDeclaration\n"); }
#line 1520 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 177 "parser.y" /* yacc.c:1652  */
    {printf("ExtDef : ExtDef  ExtDeclaration\n"); }
#line 1526 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 181 "parser.y" /* yacc.c:1652  */
    {printf("ExtDef : ExtDef  ExtDeclaration\n"); }
#line 1532 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 182 "parser.y" /* yacc.c:1652  */
    {printf("Function - ExtDeclaration : FuncDeclaration CompoundStatement\n");}
#line 1538 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 186 "parser.y" /* yacc.c:1652  */
    { printf("FuncDeclaration : KW_SUB IDENTIFIER\n"); }
#line 1544 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 190 "parser.y" /* yacc.c:1652  */
    { printf("ParameterList : Parameter\n"); }
#line 1550 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 191 "parser.y" /* yacc.c:1652  */
    { printf("ParameterList : ParameterList OP_COMMA Parameter\n"); }
#line 1556 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 195 "parser.y" /* yacc.c:1652  */
    { printf("Parameter : Variable\n"); }
#line 1562 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 196 "parser.y" /* yacc.c:1652  */
    {printf("Parameter : Constant String\n");}
#line 1568 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 197 "parser.y" /* yacc.c:1652  */
    {printf("Parameter : POSITIVE_INT\n");}
#line 1574 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 198 "parser.y" /* yacc.c:1652  */
    {printf("Parameter : REAL\n");}
#line 1580 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 202 "parser.y" /* yacc.c:1652  */
    { printf("StatementList : Statement StatementList \n"); }
#line 1586 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 203 "parser.y" /* yacc.c:1652  */
    { printf("StatementList : Statement \n"); }
#line 1592 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 207 "parser.y" /* yacc.c:1652  */
    { printf("Statement : CompoundStatement \n"); }
#line 1598 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 208 "parser.y" /* yacc.c:1652  */
    { printf("Statement : SelectionStatement \n"); }
#line 1604 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 209 "parser.y" /* yacc.c:1652  */
    { printf("Statement : FunctionCalling; \n"); }
#line 1610 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 210 "parser.y" /* yacc.c:1652  */
    { printf("Statement : ExpressionStatement \n"); }
#line 1616 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 211 "parser.y" /* yacc.c:1652  */
    { printf("Statement : IterationStatement \n"); }
#line 1622 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 217 "parser.y" /* yacc.c:1652  */
    { printf("FunctionCalling %s : IDENTIFIER (ParameterList) \n", (yyval.string)); }
#line 1628 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 221 "parser.y" /* yacc.c:1652  */
    { printf("CompoundStatement : { CompoundStatment_2 \n"); }
#line 1634 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 225 "parser.y" /* yacc.c:1652  */
    { printf("CompoundStatement_2 : } \n"); }
#line 1640 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 226 "parser.y" /* yacc.c:1652  */
    { printf("CompoundStatement_2 : StatementList } \n"); }
#line 1646 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 230 "parser.y" /* yacc.c:1652  */
    {printf("SelectionStatement: if_main else_if_expr else_expr");}
#line 1652 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 231 "parser.y" /* yacc.c:1652  */
    {printf("SelectionStatement : KW_IF OP_LEFT_PARENTHESIS Expression OP_RIGHT_PARENTHESIS Statement\n");}
#line 1658 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 248 "parser.y" /* yacc.c:1652  */
    {printf("ExpStatement: ;\n");}
#line 1664 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 249 "parser.y" /* yacc.c:1652  */
    {printf("ExpStatement: Expression ;\n");}
#line 1670 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 250 "parser.y" /* yacc.c:1652  */
    {printf("ExpStatement: return ExprStatement ;\n");}
#line 1676 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 254 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatement : while-loop\n");}
#line 1682 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 255 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatent : do-while"); }
#line 1688 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 256 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatement : for loop");}
#line 1694 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 257 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatement : conditional-loop\n");}
#line 1700 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 263 "parser.y" /* yacc.c:1652  */
    {printf("Expression : AssignmentExpression\n"); }
#line 1706 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 267 "parser.y" /* yacc.c:1652  */
    {printf("AssignmentExp : VARIABLE OP_EQUAL PrimaryExp \n" ); }
#line 1712 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 268 "parser.y" /* yacc.c:1652  */
    {printf("AssignmentExpression: ConditionalExpression\n"); }
#line 1718 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 269 "parser.y" /* yacc.c:1652  */
    {printf("AssignmentExpression: UnaryExp ASSIGN_OPER AssignmentExpression\n"); }
#line 1724 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 273 "parser.y" /* yacc.c:1652  */
    {printf("ASSIGN_OPER : T_ASSIGN_OPER\n");}
#line 1730 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 274 "parser.y" /* yacc.c:1652  */
    {printf("ASSIGN_OPER : OP_EQUAL\n");}
#line 1736 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 278 "parser.y" /* yacc.c:1652  */
    {printf("ConditionalExpression: PrimaryExpression OP_RELTIONAL PrimaryExpression\n");}
#line 1742 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 279 "parser.y" /* yacc.c:1652  */
    {printf("ConditionalExpression: LogicalOrExpression\n");}
#line 1748 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 280 "parser.y" /* yacc.c:1652  */
    {printf("ConditionalExpression: LogionOrExp OP_QUESTION Expression OP_COLON ConditionalExp\n");}
#line 1754 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 310 "parser.y" /* yacc.c:1652  */
    {printf("EqualityExp : EqualityExp OP_EQUALITY RelationalExp\n");}
#line 1760 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 314 "parser.y" /* yacc.c:1652  */
    {printf("RelationalExpression: ShiftExpression\n");}
#line 1766 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 315 "parser.y" /* yacc.c:1652  */
    {printf("RelationalExpression : RelationalExpression OP_RELATIONAL ShiftExpression\n");}
#line 1772 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 319 "parser.y" /* yacc.c:1652  */
    {printf("ShiftExp: AdditiveExp\n");}
#line 1778 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 320 "parser.y" /* yacc.c:1652  */
    {printf("ShiftExp: ShiftExp OP_SHIFT AdditiveExp\n");}
#line 1784 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 324 "parser.y" /* yacc.c:1652  */
    {printf("AdditiveExp: MultiplicativeExp \n");}
#line 1790 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 325 "parser.y" /* yacc.c:1652  */
    {printf("AdditiveExp: AdditiveExp OP_ADDSUB MultiplicativeExp \n");}
#line 1796 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 329 "parser.y" /* yacc.c:1652  */
    {printf("MultiplicativeExp: UnaryExp \n");}
#line 1802 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 330 "parser.y" /* yacc.c:1652  */
    {printf("MultiplicativeExp: MultiplicativeExp MultDivRemOP UnaryExp \n");}
#line 1808 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 90:
#line 372 "parser.y" /* yacc.c:1652  */
    {printf("PrimaryExp: FunctionCalling\n");}
#line 1814 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 91:
#line 373 "parser.y" /* yacc.c:1652  */
    {printf("PrimaryExp: VARIABLE\n"); }
#line 1820 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 92:
#line 374 "parser.y" /* yacc.c:1652  */
    {printf("PrimaryExp: Constant\n"); }
#line 1826 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 93:
#line 375 "parser.y" /* yacc.c:1652  */
    {printf("PrimaryExp: SPL_LIST_ARR_VAR\n"); }
#line 1832 "parser.tab.c" /* yacc.c:1652  */
    break;


#line 1836 "parser.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 383 "parser.y" /* yacc.c:1918  */


char* filename;
int main (int argc, char* argv[])
{
  #ifdef YYDEBUG
  // yydebug = 1;
  #endif
  if (argc == 2) {
    filename = argv[1];
    yyin = fopen(argv[1], "r");
  } else if (argc > 2) {
    printf("Usage: %s filename\n", argv[0]);
    return 1;
  } else {
    filename = "line";
  }
  int tok = yyparse();
  
  if( tok == 0) // 0 means TK_EOF
     printf("Accepted!\n");
  else
     printf("Rejected!\n");
  return 0;
} 

// void yyerror(char const *s, ...) {
//   fprintf(stderr, "%s:%d Parse error:%s\n", filename, yylineno, s);
//   exit(1);
// }
