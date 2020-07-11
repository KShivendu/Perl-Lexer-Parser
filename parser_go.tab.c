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
#line 1 "parser_go.y" /* yacc.c:337  */

  #include <stdio.h>

  int yylex();
  void yyerror(char*);

  extern FILE *yyin;

#line 79 "parser_go.tab.c" /* yacc.c:337  */
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
   by #include "parser_go.tab.h".  */
#ifndef YY_YY_PARSER_GO_TAB_H_INCLUDED
# define YY_YY_PARSER_GO_TAB_H_INCLUDED
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
    COLON_EQUAL = 258,
    ADD_ASSIGN = 259,
    SUB_ASSIGN = 260,
    MUL_ASSIGN = 261,
    DIV_ASSIGN = 262,
    MOD_ASSIGN = 263,
    LS_ASSIGN = 264,
    RS_ASSIGN = 265,
    AND_ASSIGN = 266,
    XOR_ASSIGN = 267,
    OR_ASSIGN = 268,
    LOG_OR = 269,
    LOG_AND = 270,
    EQ = 271,
    NEQ = 272,
    LTE = 273,
    GTE = 274,
    BIT_CLEAR = 275,
    LSHIFT = 276,
    RSHIFT = 277,
    INCR = 278,
    DECR = 279,
    VARIADIC = 280,
    BREAK = 281,
    DEFAULT = 282,
    FUNC = 283,
    INTERFACE = 284,
    SELECT = 285,
    CASE = 286,
    DEFER = 287,
    GO = 288,
    MAP = 289,
    STRUCT = 290,
    CHAN = 291,
    ELSE = 292,
    GOTO = 293,
    PACKAGE = 294,
    SWITCH = 295,
    CONST = 296,
    FALLTHROUGH = 297,
    IF = 298,
    RANGE = 299,
    TYPE = 300,
    CONTINUE = 301,
    FOR = 302,
    IMPORT = 303,
    RETURN = 304,
    VAR = 305,
    INT_LTR = 306,
    STRING_LTR = 307,
    BOOL_LTR = 308,
    IDENT = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_GO_TAB_H_INCLUDED  */



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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   690

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
       2,     2,     2,    36,     2,     2,     2,    29,    30,     2,
      34,    35,    27,    23,    71,    24,    70,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    69,
      18,     3,    17,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    26,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,    25,    74,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    19,    20,    21,    22,    31,    32,    33,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    33,    35,    36,    38,    39,    40,    42,
      43,    45,    46,    48,    49,    50,    52,    53,    55,    56,
      58,    59,    60,    63,    64,    66,    67,    69,    70,    71,
      73,    74,    76,    77,    79,    80,    82,    84,    86,    87,
      89,    90,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   107,   108,   109,   110,
     111,   113,   115,   116,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   141,   142,   144,   145,   147,
     148,   149,   150,   153,   154,   155,   156,   158,   159,   161,
     162,   164,   166,   167,   169,   171,   172,   174,   175,   177,
     177,   177,   177,   177,   178,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   182,   182,   182,   182,   182,   182,   184,   185,   186,
     187,   188,   190,   191,   192,   193,   194,   196,   197,   198,
     200,   202,   204,   204,   206,   207,   210,   211,   212,   214,
     216,   217,   219,   221,   225,   227,   228,   230,   231,   233,
     234,   235,   237,   238,   240,   241,   242,   244,   245,   247,
     247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'='", "COLON_EQUAL", "ADD_ASSIGN",
  "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "LS_ASSIGN",
  "RS_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "LOG_OR",
  "LOG_AND", "'>'", "'<'", "EQ", "NEQ", "LTE", "GTE", "'+'", "'-'", "'|'",
  "'^'", "'*'", "'/'", "'%'", "'&'", "BIT_CLEAR", "LSHIFT", "RSHIFT",
  "'('", "')'", "'!'", "INCR", "DECR", "VARIADIC", "BREAK", "DEFAULT",
  "FUNC", "INTERFACE", "SELECT", "CASE", "DEFER", "GO", "MAP", "STRUCT",
  "CHAN", "ELSE", "GOTO", "PACKAGE", "SWITCH", "CONST", "FALLTHROUGH",
  "IF", "RANGE", "TYPE", "CONTINUE", "FOR", "IMPORT", "RETURN", "VAR",
  "INT_LTR", "STRING_LTR", "BOOL_LTR", "IDENT", "';'", "'.'", "','", "':'",
  "'{'", "'}'", "'['", "']'", "$accept", "file", "package_clause",
  "import_list", "import", "top_level_decl_list", "top_level_decl",
  "declaration", "const_decl", "const_spec_list", "const_spec", "var_decl",
  "var_spec_list", "var_spec", "type_decl", "type_spec_list", "type_spec",
  "alias_decl", "type_def", "expr_list", "stmt_list", "stmt",
  "simple_stmt", "short_var_decl", "inc_dec_stmt", "assignment",
  "assign_op", "labeled_stmt", "go_stmt", "return_stmt", "break_stmt",
  "continue_stmt", "goto_stmt", "defer_stmt", "if_stmt", "else_block_opt",
  "for_stmt", "condition", "for_clause", "range_clause", "switch_stmt",
  "case_list", "case_clause", "switch_case", "block", "expr", "unary_expr",
  "binary_op", "rel_op", "add_op", "mul_op", "unary_op", "primary_expr",
  "selector", "index", "type_assertion", "arguments", "operand",
  "operand_name", "literal", "basic_lit", "expr_opt", "type", "type_name",
  "type_lit", "arr_type", "ptr_type", "func_decl", "signature", "result",
  "params", "param_list", "param_decl", "ident_list", "comma_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    61,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,    62,    60,   271,
     272,   273,   274,    43,    45,   124,    94,    42,    47,    37,
      38,   275,   276,   277,    40,    41,    33,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,    59,
      46,    44,    58,   123,   125,    91,    93
};
# endif

#define YYPACT_NINF -159

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-159)))

#define YYTABLE_NINF -178

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,   -37,    33,   -45,  -159,  -159,  -159,   -28,   107,   -27,
     154,  -159,   -25,    -4,  -159,  -159,     0,   -19,   -15,    28,
      35,  -159,  -159,  -159,  -159,  -159,  -159,  -159,    26,    68,
    -159,  -159,  -159,     1,  -159,    24,  -159,  -159,  -159,  -159,
      11,  -159,  -159,    38,    32,    36,    -2,    43,   486,    23,
      23,  -159,    48,   486,   111,  -159,  -159,  -159,  -159,    80,
      23,  -159,   486,   120,  -159,  -159,    23,   -17,  -159,    13,
    -159,  -159,   144,  -159,  -159,  -159,  -159,    55,  -159,  -159,
    -159,  -159,  -159,   486,  -159,  -159,  -159,  -159,    78,   657,
    -159,   486,    -5,  -159,  -159,  -159,  -159,  -159,   115,  -159,
     217,   486,  -159,    85,  -159,    78,   486,  -159,  -159,    54,
      23,  -159,   419,   123,  -159,   636,   486,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,   486,  -159,  -159,  -159,
    -159,   486,   -12,   486,  -159,  -159,  -159,  -159,  -159,    23,
      78,  -159,    78,  -159,  -159,  -159,   486,    92,   486,   486,
      93,   129,  -159,   582,   101,   534,   486,     2,  -159,  -159,
     132,   103,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,   257,     4,  -159,
     657,   657,    46,    23,  -159,   236,  -159,  -159,   657,   657,
    -159,   170,   130,   316,   116,   131,   340,  -159,   122,   135,
      36,    36,    36,  -159,   399,     9,    78,   519,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,   486,  -159,
    -159,  -159,   486,   105,   486,   149,   156,  -159,   486,  -159,
     486,   141,   140,   486,  -159,  -159,  -159,   567,  -159,    78,
      78,  -159,   171,  -159,  -159,   657,   134,     3,   375,    40,
    -159,   486,   136,   657,   486,  -159,  -159,  -159,   486,  -159,
    -159,   138,   141,  -159,  -159,   657,   582,   657,   106,    78,
    -159,  -159,  -159,  -159,   471
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     4,     9,     0,     0,
       2,     6,     0,     0,     5,    25,     0,     0,     0,     0,
       0,    12,    13,    15,    14,    11,     7,     8,     0,     0,
      18,   177,    16,    20,    32,     0,    30,    34,    35,    23,
       0,    10,    24,     0,     0,     0,   165,     0,     0,     0,
       0,   159,     0,     0,     0,   156,   157,   160,   161,     0,
       0,    37,     0,    28,    26,   169,     0,     0,   173,     0,
      40,   164,     0,   168,   166,   167,    17,     0,   131,   132,
     134,   135,   136,     0,   133,   152,   153,   150,    21,    38,
     105,     0,   107,   137,   148,   147,   151,   163,     0,   178,
       0,     0,    31,     0,    36,    27,     0,   176,   170,     0,
       0,   175,    56,   177,    19,     0,     0,   109,   110,   118,
     116,   114,   115,   117,   119,   120,   121,   122,   123,   124,
     125,   126,   129,   130,   127,   128,     0,   111,   112,   113,
     108,     0,     0,     0,   138,   139,   140,   141,   158,     0,
      22,    33,    29,   171,   172,   174,    25,    79,     0,     0,
       0,    56,    50,    56,    81,    56,    77,   150,   104,    42,
       0,     0,    44,    60,    58,    59,    43,    45,    46,    47,
      48,    49,    55,    52,    53,    54,    51,    38,     0,   149,
      39,   106,   180,     0,   142,     0,   162,    80,    84,    76,
      83,   150,     0,    38,     0,     0,    38,    82,     0,     0,
       0,     0,     0,    89,    38,     0,    78,    56,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,    41,
      62,    63,     0,   180,   179,     0,     0,   143,   154,    99,
       0,     0,     0,     0,    90,    91,    92,     0,    75,    64,
      61,   179,     0,   145,   144,   155,     0,     0,     0,     0,
      85,     0,     0,    93,     0,   146,    99,   102,     0,    97,
     100,     0,     0,    88,    87,    95,    56,    96,     0,   103,
      40,    86,    94,    98,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,  -159,  -159,  -159,   206,  -159,  -159,
     173,  -159,  -159,   189,  -159,  -159,   162,  -159,  -159,   -46,
     -56,     8,  -158,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,   -33,   -43,  -159,   -16,  -159,  -159,
    -159,   -38,  -159,  -159,   -44,   -53,   139,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,    53,   -23,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
     224,  -159,   183,    -8,    63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     9,    10,    20,   169,    22,    47,
      32,    23,    28,    39,    24,    59,    36,    37,    38,   170,
     112,   171,   172,   173,   174,   175,   228,   176,   177,   178,
     179,   180,   181,   182,   183,   260,   184,   210,   211,   212,
     185,   257,   270,   271,   186,    89,    90,   136,   137,   138,
     139,    91,    92,   144,   145,   146,   147,    93,    94,    95,
      96,   204,    98,    55,    56,    57,    58,    25,    45,    74,
      46,    67,    68,   188,   235
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     100,    71,    88,   202,    48,   205,  -177,   209,   232,    33,
      54,    40,    61,   247,    62,    30,   105,    63,   108,    34,
      40,     1,   193,    73,     6,    49,    97,    60,    49,   141,
     115,     4,    72,     5,     8,    50,    69,   104,    49,    33,
      49,    26,    14,   107,   267,    50,   111,    50,   268,    31,
      49,    49,   110,    35,   109,   150,   194,    50,    50,   187,
     152,    42,    27,   190,    69,   142,    51,    65,    29,    51,
     143,    66,    52,    53,   217,    52,    53,   269,    76,    51,
      52,    51,    52,   191,    52,   233,    53,   155,    53,   153,
     195,    51,    51,    66,    31,   192,    31,   163,    53,    53,
      31,    69,    44,   115,    41,   198,   199,    64,   203,    70,
     206,    31,   214,    70,   101,   102,    99,   234,   282,   208,
     216,   213,    31,   106,   114,   242,   196,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   267,    35,   116,
     148,   268,    78,    79,   151,    80,    81,   215,  -159,    82,
     197,   200,   241,    83,   187,    84,   244,   245,   246,   207,
     236,    49,   229,    11,  -177,    12,   251,    13,    50,    65,
     283,   190,   249,    66,   253,   255,   250,   258,    15,   239,
     263,   254,   259,   116,    85,    86,    16,   201,   261,   238,
     240,   250,  -154,   116,   243,   276,   265,   266,   275,    17,
     280,   277,   113,    18,   272,   274,    21,    43,    19,    53,
      77,   103,   279,   187,   284,   248,   273,   262,   278,   281,
     140,   187,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      75,     0,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   256,   154,   149,   230,   231,   252,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,     0,     0,     0,
     -57,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,     0,     0,   230,   231,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,     0,     0,     0,   230,   231,     0,
       0,     0,     0,     0,     0,   -57,     0,     0,     0,  -155,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   -57,
       0,     0,     0,    70,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     0,     0,     0,   230,   231,     0,     0,
       0,     0,    78,    79,     0,    80,    81,     0,    70,    82,
       0,     0,     0,   156,     0,    84,     0,     0,     0,   157,
       0,     0,     0,     0,     0,   158,   159,     0,   -57,     0,
       0,   160,   -93,   161,    17,   162,   163,     0,    18,   164,
     165,     0,   166,    19,    85,    86,     0,   167,     0,     0,
       0,     0,    70,   168,    78,    79,     0,    80,    81,     0,
       0,    82,     0,     0,     0,   156,     0,    84,     0,    78,
      79,   157,    80,    81,     0,     0,    82,   158,   159,     0,
      83,     0,    84,   160,     0,   161,    17,   162,   163,     0,
      18,   164,   165,     0,   166,    19,    85,    86,     0,   167,
     -56,     0,    78,    79,    70,    80,    81,     0,     0,    82,
       0,    85,    86,   156,    87,    84,     0,    78,    79,   157,
      80,    81,     0,     0,    82,   158,   159,     0,    83,     0,
      84,   160,     0,   161,    17,   162,   163,     0,    18,   164,
     165,     0,   166,    19,    85,    86,     0,   167,     0,     0,
      78,    79,    70,    80,    81,     0,     0,    82,     0,    85,
      86,    83,   201,    84,     0,    78,    79,    70,    80,    81,
       0,     0,    82,     0,     0,     0,    83,     0,    84,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,    85,    86,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    86,     0,
     201,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   189,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

static const yytype_int16 yycheck[] =
{
      53,    45,    48,   161,     3,   163,     4,   165,     4,    17,
      33,    19,    35,     4,     3,    34,    62,    40,    35,    34,
      28,    53,    34,    46,    69,    27,    49,     3,    27,    34,
      83,    68,    34,     0,    62,    34,    44,    60,    27,    47,
      27,    66,    69,    66,    41,    34,    69,    34,    45,    68,
      27,    27,    39,    68,    71,   101,    68,    34,    34,   112,
     106,    35,    66,   116,    72,    70,    68,    35,    68,    68,
      75,    39,    71,    75,    72,    71,    75,    74,    35,    68,
      71,    68,    71,   136,    71,    39,    75,   110,    75,    35,
     143,    68,    68,    39,    68,   141,    68,    57,    75,    75,
      68,   109,    34,   156,    69,   158,   159,    69,   161,    73,
     163,    68,   165,    73,     3,    35,    68,    71,   276,   165,
     166,   165,    68,     3,    69,     3,   149,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    41,    68,    71,
      35,    45,    23,    24,    69,    26,    27,   165,    35,    30,
      68,    68,   206,    34,   217,    36,   210,   211,   212,    68,
     193,    27,    69,    66,     4,    68,    71,    70,    34,    35,
      74,   234,   228,    39,    35,   238,   232,   240,    34,    73,
     243,    35,    51,    71,    65,    66,    42,    68,    58,    69,
      69,   247,    73,    71,    69,    69,    35,    73,   261,    55,
      72,   264,    68,    59,   258,   259,    10,    28,    64,    75,
      47,    59,   268,   276,   280,   217,   259,   243,   266,   272,
      91,   284,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      46,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,   238,   109,    76,    37,    38,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      73,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    37,    38,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    73,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    69,
      -1,    -1,    -1,    73,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    23,    24,    -1,    26,    27,    -1,    73,    30,
      -1,    -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    69,    -1,
      -1,    52,    73,    54,    55,    56,    57,    -1,    59,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      -1,    -1,    73,    74,    23,    24,    -1,    26,    27,    -1,
      -1,    30,    -1,    -1,    -1,    34,    -1,    36,    -1,    23,
      24,    40,    26,    27,    -1,    -1,    30,    46,    47,    -1,
      34,    -1,    36,    52,    -1,    54,    55,    56,    57,    -1,
      59,    60,    61,    -1,    63,    64,    65,    66,    -1,    68,
      69,    -1,    23,    24,    73,    26,    27,    -1,    -1,    30,
      -1,    65,    66,    34,    68,    36,    -1,    23,    24,    40,
      26,    27,    -1,    -1,    30,    46,    47,    -1,    34,    -1,
      36,    52,    -1,    54,    55,    56,    57,    -1,    59,    60,
      61,    -1,    63,    64,    65,    66,    -1,    68,    -1,    -1,
      23,    24,    73,    26,    27,    -1,    -1,    30,    -1,    65,
      66,    34,    68,    36,    -1,    23,    24,    73,    26,    27,
      -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      68,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    78,    79,    68,     0,    69,    80,    62,    81,
      82,    66,    68,    70,    69,    34,    42,    55,    59,    64,
      83,    84,    85,    88,    91,   144,    66,    66,    89,    68,
      34,    68,    87,   150,    34,    68,    93,    94,    95,    90,
     150,    69,    35,    90,    34,   145,   147,    86,     3,    27,
      34,    68,    71,    75,   139,   140,   141,   142,   143,    92,
       3,   139,     3,   139,    69,    35,    39,   148,   149,   150,
      73,   121,    34,   139,   146,   147,    35,    87,    23,    24,
      26,    27,    30,    34,    36,    65,    66,    68,    96,   122,
     123,   128,   129,   134,   135,   136,   137,   139,   139,    68,
     122,     3,    35,    93,   139,    96,     3,   139,    35,    71,
      39,   139,    97,    68,    69,   122,    71,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   124,   125,   126,   127,
     123,    34,    70,    75,   130,   131,   132,   133,    35,    76,
      96,    69,    96,    35,   149,   139,    34,    40,    46,    47,
      52,    54,    56,    57,    60,    61,    63,    68,    74,    84,
      96,    98,    99,   100,   101,   102,   104,   105,   106,   107,
     108,   109,   110,   111,   113,   117,   121,   122,   150,    35,
     122,   122,    96,    34,    68,   122,   139,    68,   122,   122,
      68,    68,    99,   122,   138,    99,   122,    68,    96,    99,
     114,   115,   116,   121,   122,   150,    96,    72,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,   103,    69,
      37,    38,     4,    39,    71,   151,   139,    76,    69,    73,
      69,   121,     3,    69,   121,   121,   121,     4,    98,    96,
      96,    71,   151,    35,    35,   122,   138,   118,   122,    51,
     112,    58,   114,   122,    58,    35,    73,    41,    45,    74,
     119,   120,   121,   111,   121,   122,    69,   122,   118,    96,
      72,   112,    99,    74,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
      99,   100,   101,   101,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   105,   106,   106,   107,
     107,   108,   108,   109,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   114,   115,   116,   116,   117,   117,   118,
     118,   119,   120,   120,   121,   122,   122,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   128,   128,   129,   129,   129,
     129,   129,   130,   131,   132,   133,   133,   134,   134,   134,
     135,   136,   137,   137,   138,   138,   139,   139,   139,   140,
     141,   141,   142,   143,   144,   145,   145,   146,   146,   147,
     147,   147,   148,   148,   149,   149,   149,   150,   150,   151,
     151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     0,     3,     2,     3,     3,     0,
       3,     1,     1,     1,     1,     1,     2,     4,     0,     3,
       1,     3,     4,     2,     3,     0,     3,     3,     2,     4,
       2,     4,     0,     3,     1,     1,     3,     2,     1,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     3,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     2,     1,
       2,     1,     2,     2,     2,     4,     6,     2,     2,     2,
       3,     3,     3,     1,     5,     4,     4,     5,     7,     0,
       2,     3,     1,     2,     3,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     4,     4,     5,     1,     1,     3,
       1,     1,     1,     1,     0,     1,     1,     1,     3,     1,
       1,     1,     4,     2,     4,     1,     2,     1,     1,     2,
       3,     4,     3,     1,     3,     2,     2,     1,     3,     1,
       0
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
      
#line 1574 "parser_go.tab.c" /* yacc.c:1652  */
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
#line 248 "parser_go.y" /* yacc.c:1918  */


int main(int argc, char* argv[]) {
  if (argc == 2) {
    yyin = fopen(argv[1], "r");
  } else if (argc > 2) {
    printf("Usage: %s [filename]\n", argv[0]);
    return 1;
  }
  yyparse();
  return 0;
}


/*user code*/
// int main (int argc, char *argv[])
// {
// 	init_hash_table();
// 	yyin = fopen(argv[1], "r");
// 	int token;
// 	while ( (token = yylex()) != TK_EOF )
// 	{	
// 	if (token==303)
// 		{
// 			printf("Unrecognized token %s in line %u\n", yytext, line_num);
// 			printf("Exiting !! \n");
// 			exit(1);
// 		}
// 	}
// 	fclose(yyin);

// 	// symbol table dump
//     yyout = fopen("symbol_table.out", "w");
//     symtab_dump(yyout);
//     fclose(yyout); 
// }

void yyerror(char *s) {
  fprintf(stderr, "error:%s\n", s);
}


