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
    DeclarationList = 330,
    OP_RELATIONAL = 331,
    OP_NOTEQUAL = 332,
    OP_GREATER = 333,
    OP_GREATEROREQUAL = 334,
    OP_LESSOREQUAL = 335,
    OP_LESS = 336,
    OP_PLUS = 337,
    OP_MINUS = 338,
    KW_DIV = 339,
    KW_THEN = 340
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

#line 222 "parser.tab.c" /* yacc.c:352  */
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
#define YYLAST   322

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   172,   172,   176,   177,   181,   182,   186,   189,   190,
     191,   195,   199,   203,   204,   208,   209,   210,   211,   212,
     213,   217,   220,   225,   229,   230,   236,   242,   245,   246,
     249,   250,   254,   255,   256,   260,   261,   262,   263,   270,
     274,   275,   276,   280,   281,   285,   286,   287,   291,   292,
     296,   297,   301,   302,   306,   307,   311,   312,   316,   317,
     321,   322,   326,   327,   331,   332,   336,   337,   341,   342,
     343,   347,   348,   349,   353,   354,   355,   356,   357,   361,
     362,   363,   364,   365,   369,   370,   374,   375,   379,   380,
     381,   385
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
  "OP_QUESTION", "KW_PRINT", "DeclarationList", "OP_RELATIONAL",
  "OP_NOTEQUAL", "OP_GREATER", "OP_GREATEROREQUAL", "OP_LESSOREQUAL",
  "OP_LESS", "OP_PLUS", "OP_MINUS", "KW_DIV", "KW_THEN", "$accept", "ROOT",
  "ExtDef", "ExtDeclaration", "Declaration", "ParameterList", "Parameter",
  "FuncDef", "StatementList", "Statement", "FunctionCallStatement",
  "FunctionCalling", "CompoundStatement", "CompoundStatement_2",
  "SelectionStatement", "if_main", "else_expr", "else_if_expr",
  "ExpressionStatement", "IterationStatement", "Expression",
  "AssignmentExpression", "ASSIGN_OPER", "ConditionalExpression",
  "LogicalOrExpression", "LogicalAndExpression", "InclusiveOrExpression",
  "ExclusiveOrExpression", "AndExpression", "EqualityExpression",
  "RelationalExpression", "ShiftExpression", "AdditiveExpression",
  "MultiplicativeExpression", "MultDivRemOP", "UnaryExpression",
  "UnaryOperator", "PostfixExpression", "PostfixExpression2",
  "ArgumentExpressionList", "PrimaryExpression", "Constant", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -127

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,   -48,   -46,   -31,   216,   -16,   -32,    -5,  -127,   240,
    -127,  -127,  -127,   257,  -127,  -127,   148,   -10,    -3,  -127,
      32,    99,  -127,   -15,  -127,   189,  -127,    -1,  -127,  -127,
    -127,  -127,  -127,     1,  -127,  -127,   -21,    36,    13,    17,
      12,    19,   -13,    10,    26,   -25,   -38,   240,   -22,    27,
    -127,   189,   257,   257,  -127,   240,   257,    -7,  -127,  -127,
    -127,    23,  -127,    20,  -127,  -127,   240,  -127,  -127,   189,
    -127,  -127,  -127,    66,  -127,   240,   257,   240,   240,   240,
     240,   240,   240,   240,   240,  -127,  -127,  -127,   240,  -127,
    -127,   257,  -127,  -127,   223,   257,    45,   -23,    21,    30,
      33,    34,  -127,  -127,  -127,    35,   -28,  -127,  -127,  -127,
      46,    25,    -4,  -127,    36,    29,    13,    17,    12,    19,
     -13,    10,    26,   -25,  -127,  -127,  -127,  -127,  -127,   -20,
      44,  -127,  -127,    62,    48,   257,   189,  -127,  -127,    71,
     189,  -127,   189,  -127,   240,  -127,   257,  -127,    56,   189,
      58,  -127,  -127,  -127,    50,  -127,  -127,   240,    52,   257,
    -127,    60,  -127,    61,  -127,   189,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    88,     0,    75,     0,
      74,    76,    32,     0,    77,    78,     0,     0,     0,    91,
       0,     2,     3,     0,     5,    14,    20,     0,    15,    16,
      30,    18,    19,     0,    39,    41,    46,    48,    50,    52,
      54,    56,    58,    60,    62,    64,    66,     0,    71,    79,
      89,     0,     0,     0,    34,     0,     0,     8,    88,    72,
      79,     0,    24,     0,    23,     7,     0,     1,     4,     0,
       6,    13,    17,    28,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,     0,    44,
      43,     0,    73,    83,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    40,    11,     0,     0,     9,    90,    25,
       0,     0,     0,    26,    49,     0,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    42,    84,    86,    81,     0,
       0,    82,    45,     0,     0,     0,     0,    21,    22,     0,
       0,    12,     0,    31,     0,    85,     0,    80,     0,     0,
       0,    35,    10,    38,     0,    47,    87,     0,     0,     0,
      29,     0,    27,     0,    36,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -127,  -127,  -127,    96,  -127,  -127,   -18,  -127,    -8,  -126,
    -127,  -127,  -127,  -127,  -127,     6,  -127,  -127,   115,  -127,
     -12,   -88,  -127,   -53,  -127,    47,    49,    51,    53,    57,
      55,    43,    63,    65,  -127,    -9,  -127,  -127,  -127,  -127,
      15,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    20,    21,    22,    23,   106,   107,    70,    24,    25,
      26,    27,    28,    64,    29,    30,   113,    73,    31,    32,
      33,    34,    91,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    88,    46,    47,    48,   128,   129,
      49,    50
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      59,    61,   101,   125,     2,    75,   127,    52,    63,    89,
     151,    58,    51,   110,   153,    56,   154,    71,    93,    85,
      86,    87,    53,   158,    60,    65,   138,   104,   139,   105,
      13,    94,    67,    90,   145,    95,   146,    55,    92,   166,
      99,   100,    19,    98,   103,    69,   102,    96,    57,    77,
      66,    72,    76,    74,    78,    80,   142,   102,   156,    79,
      83,   111,    60,    82,   115,    84,   102,    81,   102,   102,
     102,   102,   102,   102,   102,   102,    97,   108,   112,   124,
     131,   109,   133,   130,   134,   135,   141,   148,   136,   137,
      60,   155,    60,    60,    60,    60,    60,    60,    60,    60,
     140,   144,   147,    60,   161,   104,     1,     2,   149,   157,
     159,   160,   132,   162,   164,   165,     3,    68,   143,    54,
       4,   152,   114,   150,     5,   121,   116,     0,     0,   117,
       0,     0,   118,     6,     7,   102,   120,   119,     8,     9,
       0,     0,    10,    11,     0,     0,   122,   163,   102,   123,
       0,    12,    13,     0,    14,     1,     2,     0,    15,    16,
       0,    17,     0,    18,    19,     3,     0,     0,     0,     4,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     7,     0,     0,     0,     8,     9,     0,
       0,    10,    11,     0,     0,     0,     1,     2,     0,     0,
      12,    13,     0,    14,     0,     0,     3,    15,    16,    62,
       4,     0,    18,    19,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     0,     0,     0,     8,     9,
       0,     0,    10,    11,     0,     0,     0,     4,     0,     0,
       0,    12,    13,     0,    14,     0,     0,     0,    15,    16,
       6,     0,     0,    18,    19,     8,     9,     6,     0,    10,
      11,     0,     8,     9,     0,     0,    10,    11,    12,    13,
       0,    14,     0,     0,    58,    15,    13,   126,    14,     8,
       9,    19,    15,    10,    11,     0,     0,     0,    19,     0,
       0,     6,     0,    13,     0,    14,     8,     9,     0,    15,
      10,    11,     0,     0,     0,    19,     0,     0,     0,     0,
      13,     0,    14,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    19
};

static const yytype_int16 yycheck[] =
{
       9,    13,    55,    91,     8,    26,    94,    53,    16,    47,
     136,    34,    60,    66,   140,    47,   142,    25,    40,    44,
      45,    46,    53,   149,     9,    35,    54,    34,    56,    36,
      53,    53,     0,    71,    54,    57,    56,    53,    47,   165,
      52,    53,    65,    51,    56,    60,    55,    69,    53,    13,
      53,    52,    73,    52,    41,    43,    60,    66,   146,    42,
      50,    69,    47,    76,    76,    39,    75,    48,    77,    78,
      79,    80,    81,    82,    83,    84,    49,    54,    12,    88,
      35,    61,    61,    95,    54,    52,    61,    25,    54,    54,
      75,   144,    77,    78,    79,    80,    81,    82,    83,    84,
      54,    72,    58,    88,   157,    34,     7,     8,    60,    53,
      52,    61,    97,    61,    54,    54,    17,    21,   112,     4,
      21,   139,    75,   135,    25,    82,    77,    -1,    -1,    78,
      -1,    -1,    79,    34,    35,   144,    81,    80,    39,    40,
      -1,    -1,    43,    44,    -1,    -1,    83,   159,   157,    84,
      -1,    52,    53,    -1,    55,     7,     8,    -1,    59,    60,
      -1,    62,    -1,    64,    65,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    -1,    -1,    -1,    39,    40,    -1,
      -1,    43,    44,    -1,    -1,    -1,     7,     8,    -1,    -1,
      52,    53,    -1,    55,    -1,    -1,    17,    59,    60,    61,
      21,    -1,    64,    65,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    39,    40,
      -1,    -1,    43,    44,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,
      34,    -1,    -1,    64,    65,    39,    40,    34,    -1,    43,
      44,    -1,    39,    40,    -1,    -1,    43,    44,    52,    53,
      -1,    55,    -1,    -1,    34,    59,    53,    54,    55,    39,
      40,    65,    59,    43,    44,    -1,    -1,    -1,    65,    -1,
      -1,    34,    -1,    53,    -1,    55,    39,    40,    -1,    59,
      43,    44,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,
      53,    -1,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     8,    17,    21,    25,    34,    35,    39,    40,
      43,    44,    52,    53,    55,    59,    60,    62,    64,    65,
      87,    88,    89,    90,    94,    95,    96,    97,    98,   100,
     101,   104,   105,   106,   107,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   121,   122,   123,   126,
     127,    60,    53,    53,   104,    53,    47,    53,    34,   121,
     126,   106,    61,    94,    99,    35,    53,     0,    89,    60,
      93,    94,    52,   103,    52,    26,    73,    13,    41,    42,
      43,    48,    76,    50,    39,    44,    45,    46,   120,    47,
      71,   108,   121,    40,    53,    57,    69,    49,    94,   106,
     106,   109,   121,   106,    34,    36,    91,    92,    54,    61,
     109,    94,    12,   102,   111,   106,   112,   113,   114,   115,
     116,   117,   118,   119,   121,   107,    54,   107,   124,   125,
     106,    35,   126,    61,    54,    52,    54,    54,    54,    56,
      54,    61,    60,   101,    72,    54,    56,    58,    25,    60,
     106,    95,    92,    95,    95,   109,   107,    53,    95,    52,
      61,   109,    61,   106,    54,    54,    95
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    88,    89,    89,    90,    91,    91,
      91,    92,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    96,    97,    98,    99,    99,   100,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   106,
     107,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   121,   121,   121,   122,   122,   122,   122,   122,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     2,     2,     0,     1,
       3,     1,     3,     2,     1,     1,     1,     2,     1,     1,
       1,     4,     4,     2,     1,     2,     3,     7,     0,     4,
       0,     3,     1,     2,     2,     5,     8,     9,     5,     1,
       3,     1,     3,     1,     1,     3,     1,     5,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     2,     1,     2,     1,     3,     1,     1,
       3,     1
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
        case 3:
#line 176 "parser.y" /* yacc.c:1652  */
    {printf("ExtDef : ExtDeclaration\n"); }
#line 1495 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 177 "parser.y" /* yacc.c:1652  */
    {printf("ExtDef : ExtDef  ExtDeclaration\n"); }
#line 1501 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 181 "parser.y" /* yacc.c:1652  */
    {printf("ExtDef : ExtDef  ExtDeclaration\n"); }
#line 1507 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 182 "parser.y" /* yacc.c:1652  */
    {printf("ExtDeclaration : Declaration FuncDef\n");}
#line 1513 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 186 "parser.y" /* yacc.c:1652  */
    { printf("Declaration : KW_SUB IDENTIFIER\n"); }
#line 1519 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 190 "parser.y" /* yacc.c:1652  */
    { printf("ParameterList : Parameter\n"); }
#line 1525 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 191 "parser.y" /* yacc.c:1652  */
    { printf("ParameterList : ParameterList OP_COMMA Parameter\n"); }
#line 1531 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 195 "parser.y" /* yacc.c:1652  */
    { printf("Parameter : Variable\n"); }
#line 1537 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 199 "parser.y" /* yacc.c:1652  */
    { printf("FuncDef : { StatementList } \n"); }
#line 1543 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 203 "parser.y" /* yacc.c:1652  */
    { printf("StatementList : Statement StatementList \n"); }
#line 1549 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 204 "parser.y" /* yacc.c:1652  */
    { printf("StatementList : Statement \n"); }
#line 1555 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 208 "parser.y" /* yacc.c:1652  */
    { printf("Statement : CompoundStatement \n"); }
#line 1561 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 209 "parser.y" /* yacc.c:1652  */
    { printf("Statement : SelectionStatement \n"); }
#line 1567 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 210 "parser.y" /* yacc.c:1652  */
    { printf("Statement : FunctionCalling; \n"); }
#line 1573 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 211 "parser.y" /* yacc.c:1652  */
    { printf("Statement : ExpressionStatement \n"); }
#line 1579 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 212 "parser.y" /* yacc.c:1652  */
    { printf("Statement : IterationStatement \n"); }
#line 1585 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 213 "parser.y" /* yacc.c:1652  */
    { printf("Statement : FunctionCallStatement \n"); }
#line 1591 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 217 "parser.y" /* yacc.c:1652  */
    {printf("Calling function %s \n", (yyval.string) );}
#line 1597 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 220 "parser.y" /* yacc.c:1652  */
    { printf("FunctionCalling: IDENTIFIER (ParameterList) \n"); }
#line 1603 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 225 "parser.y" /* yacc.c:1652  */
    { printf("CompoundStatement : { CompoundStatment_2 \n"); }
#line 1609 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 229 "parser.y" /* yacc.c:1652  */
    { printf("CompoundStatement_2 : } \n"); }
#line 1615 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 230 "parser.y" /* yacc.c:1652  */
    { printf("CompoundStatement_2 : StatementList } \n"); }
#line 1621 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 260 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatement : while-loop\n");}
#line 1627 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 261 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatent : do-while"); }
#line 1633 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 262 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatement : for loop");}
#line 1639 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 263 "parser.y" /* yacc.c:1652  */
    {printf("IterationStatement : conditional-loop\n");}
#line 1645 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 270 "parser.y" /* yacc.c:1652  */
    {printf("Expression : AssignmentExpression\n"); }
#line 1651 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 274 "parser.y" /* yacc.c:1652  */
    {printf("AssignmentExpression : VARIABLE OP_EQUAL Expression \n" ); }
#line 1657 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 275 "parser.y" /* yacc.c:1652  */
    {printf("AssignmentExpression: ConditionalExpression\n"); }
#line 1663 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 276 "parser.y" /* yacc.c:1652  */
    {printf("AssignmentExpression: UnaryExp ASSIGN_OPER AssignmentExpression\n"); }
#line 1669 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 280 "parser.y" /* yacc.c:1652  */
    {printf("ASSIGN_OPER : T_ASSIGN_OPER\n");}
#line 1675 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 281 "parser.y" /* yacc.c:1652  */
    {printf("ASSIGN_OPER : OP_EQUAL\n");}
#line 1681 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 285 "parser.y" /* yacc.c:1652  */
    {printf("ConditionalExpression: PrimaryExpression OP_RELTIONAL PrimaryExpression\n");}
#line 1687 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 286 "parser.y" /* yacc.c:1652  */
    {printf("ConditionalExpression: LogicalOrExpression\n");}
#line 1693 "parser.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 287 "parser.y" /* yacc.c:1652  */
    {printf("ConditionalExpression: LogionOrExp OP_QUESTION Expression OP_COLON ConditionalExp\n");}
#line 1699 "parser.tab.c" /* yacc.c:1652  */
    break;


#line 1703 "parser.tab.c" /* yacc.c:1652  */
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
#line 387 "parser.y" /* yacc.c:1918  */


char* filename;
int main (int argc, char* argv[])
{
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
