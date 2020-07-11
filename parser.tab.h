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
/* "%code requires" blocks.  */
#line 1 "parser.y" /* yacc.c:1921  */


// #include "ast.hpp"
// extern ast_Top *g_root; // A way of getting the AST out

//! This is to fix problems when generating C++
// We are declaring the functions provided by Flex, so
// that Bison generated code can call them.
int yylex(void);
void yyerror(const char *);


#line 61 "parser.tab.h" /* yacc.c:1921  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_TYPE_SPEC = 258,
    T_TYPE_QUAL = 259,
    T_STRG_SPEC = 260,
    T_IDENTIFIER = 261,
    T_SC = 262,
    T_CMA = 263,
    T_LRB = 264,
    T_LCB = 265,
    T_RCB = 266,
    T_LSB = 267,
    T_RSB = 268,
    T_QU = 269,
    T_COL = 270,
    T_LOG_OR = 271,
    T_LOG_AND = 272,
    T_OR = 273,
    T_XOR = 274,
    T_AND = 275,
    T_EQUALITY_OP = 276,
    T_REL_OP = 277,
    T_SHIFT_OP = 278,
    T_MULT = 279,
    T_DIV = 280,
    T_REM = 281,
    T_TILDE = 282,
    T_NOT = 283,
    T_DOT = 284,
    T_ARROW = 285,
    T_INCDEC = 286,
    T_ADDSUB_OP = 287,
    T_ASSIGN_OPER = 288,
    T_EQ = 289,
    T_SIZEOF = 290,
    T_INT_CONST = 291,
    T_IF = 292,
    T_WHILE = 293,
    T_DO = 294,
    T_FOR = 295,
    T_RETURN = 296,
    T_DEF = 297,
    T_PRINT = 298,
    ASSIGN_OPER = 299,
    AdditiveExpression = 300,
    AndExpression = 301,
    ArgumentExpressionList = 302,
    AssignmentExpression = 303,
    CastExpression = 304,
    ConditionalExpression = 305,
    Constant = 306,
    Declaration = 307,
    DeclarationList = 308,
    DeclarationSpec = 309,
    DeclarationSpec_T = 310,
    Declarator = 311,
    EqualityExpression = 312,
    ExclusiveOrExpression = 313,
    Expression = 314,
    ExtDeclaration = 315,
    ExtDef = 316,
    FuncDef = 317,
    InclusiveOrExpression = 318,
    InitDeclarator = 319,
    InitDeclaratorList = 320,
    LogicalAndExpression = 321,
    LogicalOrExpression = 322,
    MultDivRemOP = 323,
    MultiplicativeExpression = 324,
    ParamDeclarator = 325,
    Parameter = 326,
    ParameterList = 327,
    PostfixExpression = 328,
    PostfixExpression2 = 329,
    PrimaryExpression = 330,
    RelationalExpression = 331,
    ShiftExpression = 332,
    UnaryExpression = 333,
    UnaryOperator = 334,
    T_RRB = 335,
    T_ELSE = 336
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
