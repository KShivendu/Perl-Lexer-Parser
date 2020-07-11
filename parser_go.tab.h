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
