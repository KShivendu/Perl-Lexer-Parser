/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    KW_SUB = 259,
    KW_STATIC = 260,
    KW_TRUE = 261,
    KW_FALSE = 262,
    KW_DO = 263,
    KW_IF = 264,
    KW_NOT = 265,
    KW_BOOLEAN = 266,
    KW_BREAK = 267,
    KW_ELSE = 268,
    KW_AND = 269,
    KW_INTEGER = 270,
    KW_STRING = 271,
    KW_CONTINUE = 272,
    KW_FOR = 273,
    KW_MOD = 274,
    KW_CHARACTER = 275,
    KW_VOID = 276,
    KW_RETURN = 277,
    KW_END = 278,
    KW_BEGIN = 279,
    KW_REAL = 280,
    KW_WHILE = 281,
    KW_OR = 282,
    KW_MAIN = 283,
    KW_READSTRING = 284,
    KW_READINTEGER = 285,
    KW_READREAL = 286,
    KW_WRITESTRING = 287,
    KW_WRITEINTEGER = 288,
    KW_WRITEREAL = 289,
    IDENTIFIER = 290,
    CONSTANT_STRING = 291,
    POSITIVEINT = 292,
    REAL = 293,
    OP_PLUS = 294,
    OP_MINUS = 295,
    OP_MULT = 296,
    OP_DIV = 297,
    OP_EQUAL = 298,
    OP_NOTEQUAL = 299,
    OP_LESS = 300,
    OP_LESSOREQUAL = 301,
    OP_GREATER = 302,
    OP_GREATEROREQUAL = 303,
    OP_ASSIGNMENT = 304,
    OP_SEMICOLON = 305,
    OP_LEFT_PARENTHESIS = 306,
    OP_RIGHT_PARENTHESIS = 307,
    OP_COMMA = 308,
    OP_LEFT_BRACKET = 309,
    OP_RIGHT_BRACKET = 310,
    OP_AND = 311,
    OP_OR = 312,
    OP_NOT = 313,
    LEFT_CURLY_BRACKET = 314,
    RIGHT_CURLY_BRACKET = 315,
    KW_FOR_EACH = 316,
    KW_UNTIL = 317,
    POSITIVE_INT = 318,
    OP_DIFFERENT = 319,
    REGEX_OPERATOR = 320,
    NEG_REGEX_OPERATOR = 321,
    DOT_OPERATOR = 322,
    SPL_LIST_ARR_VAR = 323,
    VARIABLE = 324,
    OP_ADDSUB = 325,
    OP_COLON = 326,
    OP_QUESTION = 327,
    OP_INCDEC = 328,
    OP_BITWISE_OR = 329,
    OP_BITWISE_AND = 330,
    OP_REM = 331,
    OP_EQUALITY = 332,
    OP_XOR = 333,
    OP_RELTIONAL = 334,
    OP_SHIFT = 335,
    OP_TILDE = 336,
    KW_PRINT = 337,
    DeclarationList = 338,
    OP_RELATIONAL = 339,
    OP_DIVIS = 340,
    KW_DIV = 341,
    KW_THEN = 342,
    T_ASSIGN_OPER = 343
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
