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
    IDENTIFIER = 289,
    CONSTANT_STRING = 290,
    POSITIVEINT = 291,
    REAL = 292,
    OP_PLUS = 293,
    OP_MINUS = 294,
    OP_MULT = 295,
    OP_DIV = 296,
    OP_EQUAL = 297,
    OP_NOTEQUAL = 298,
    OP_LESS = 299,
    OP_LESSOREQUAL = 300,
    OP_GREATER = 301,
    OP_GREATEROREQUAL = 302,
    OP_ASSIGNMENT = 303,
    OP_SEMICOLON = 304,
    OP_LEFT_PARENTHESIS = 305,
    OP_RIGHT_PARENTHESIS = 306,
    OP_COMMA = 307,
    OP_LEFT_BRACKET = 308,
    OP_RIGHT_BRACKET = 309,
    OP_AND = 310,
    OP_OR = 311,
    OP_NOT = 312,
    LEFT_CURLY_BRACKET = 313,
    RIGHT_CURLY_BRACKET = 314,
    KW_FOR_EACH = 315,
    KW_UNTIL = 316,
    POSITIVE_INT = 317,
    OP_DIFFERENT = 318,
    REGEX_OPERATOR = 319,
    NEG_REGEX_OPERATOR = 320,
    DOT_OPERATOR = 321,
    SPL_LIST_ARR_VAR = 322,
    OP_DIVIS = 323,
    KW_DIV = 324,
    KW_THEN = 325
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
