%{
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
%}


// %union {
//   int i;
//   std::string *string;
// }

%token TK_EOF 0
%token ERROR_MESSAGE

/* keywords */
%token KW_STATIC
%token KW_TRUE
%token KW_FALSE
%token KW_DO
%token KW_IF
%token KW_NOT
%token KW_BOOLEAN
%token KW_BREAK
%token KW_ELSE
%token KW_AND
%token KW_INTEGER
%token KW_STRING
%token KW_CONTINUE
%token KW_FOR
%token KW_MOD
%token KW_CHARACTER
%token KW_VOID
%token KW_RETURN
%token KW_END
%token KW_BEGIN
%token KW_REAL
%token KW_WHILE
%token KW_OR
%token KW_MAIN
%token KW_READSTRING
%token KW_READINTEGER
%token KW_READREAL
%token KW_WRITESTRING
%token KW_WRITEINTEGER
%token KW_WRITEREAL

%token VARIABLE
%token IDENTIFIER
%token CONSTANT_STRING
%token POSITIVEINT
%token REAL

%token OP_ADDSUB
%token OP_INCDEC
%token OP_BITWISE_OR
%token OP_XOR
%token OP_BITWISE_AND

%token OP_MULT
%token OP_DIVIS
%token OP_REM
%token OP_EQUAL
%token OP_EQUALITY
%token OP_RELTIONAL
%token OP_SHIFT

%token OP_ASSIGNMENT
%token OP_SEMICOLON
%token OP_LEFT_PARENTHESIS
%token OP_RIGHT_PARENTHESIS
%token OP_TILDE
%token OP_COMMA
%token OP_LEFT_BRACKET
%token OP_RIGHT_BRACKET

%token OP_NOT

// New for perl
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET
%token KW_SUB
%token KW_FOR_EACH
%token KW_UNTIL
%token POSITIVE_INT
%token OP_DIFFERENT
%token REGEX_OPERATOR
%token NEG_REGEX_OPERATOR
%token DOT_OPERATOR
%token SPL_LIST_ARR_VAR
%token T_ASSIGN_OPER

// New from sahu
%token OP_COLON
%token OP_QUESTION
%token KW_PRINT
%token DeclarationList
%token OP_RELATIONAL

%left OP_BITWISE_OR KW_OR
%left OP_BITWISE_AND KW_AND
%left OP_EQUAL OP_NOTEQUAL OP_GREATER OP_GREATEROREQUAL OP_LESSOREQUAL OP_LESS
%left OP_PLUS OP_MINUS
%left OP_MULT OP_DIVIS KW_MOD KW_DIV
%left OP_EQUALITY OP_RELTIONAL OP_SHIFT

%right OP_NOT
%right KW_NOT
%right KW_WHILE
%right KW_THEN KW_ELSE


// Type declaration
// %type <i> exp
// %type <i> POSITIVE_INT
// %type <string> program

// Maths evaluation
// |exp { printf("program -> exp = %d \n", $1);};
// exp : {printf("EMPTY EXPRESSION");}
// |exp OP_PLUS exp {$$= $3 + $1;}
// |exp OP_MINUS exp {$$= $3 - $1;}
// |exp OP_MULT exp {$$= $3 * $1;}
// |exp OP_DIVIS exp {if($3==0)
// yyerror("Divide by Zero");
// else
// $$=$1/$3;}
// |POSITIVE_INT {$$ = $1; printf("(yylval) : (%d) \n", yylval);}
// ;


// program : {printf("EMPTY !!\n"); } 
// |KW_SUB IDENTIFIER '(' OP_RIGHT_PARENTHESIS { printf("subroutine found, $$ : %d!!\n", $$);} ;
%union{
    // const Base *stmnt;
    double number;
    int integer;
    char* string;
    // const Base *stmnt;
    // std::string *string;
}

// ROOT : KW_SUB IDENTIFIER OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_LEFT_BRACKET FunctionBody OP_RIGHT_BRACKET  {printf("$$ : %s \n", yylval.string );}

%type <string> ROOT IDENTIFIER KW_SUB; // FunctionBody;
%start ROOT // program


// C-Compilere type declaration
// These all are staments
// %type <stmnt> ExtDef ExtDeclaration
// %type <stmnt> FuncDef ParameterList Parameter // ParamDeclarator
// %type <stmnt> DeclarationList Declaration  // InitDeclarator InitDeclaratorList Declarator DeclarationSpec DeclarationSpec_T
// %type <stmnt> StatementList Statement CompoundStatement CompoundStatement_2 SelectionStatement ExpressionStatement JumpStatement IterationStatement
// %type <stmnt> Expression AssignmentExpression ConditionalExpression LogicalOrExpression LogicalAndExpression InclusiveOrExpression ExclusiveOrExpression AndExpression EqualityExpression RelationalExpression ShiftExpression AdditiveExpression MultiplicativeExpression CastExpression UnaryExpression PostfixExpression PostfixExpression2 ArgumentExpressionList PrimaryExpression

%type <number> Constant // T_INT_CONST
%type <string>  MultDivRemOP UnaryOperator ASSIGN_OPER T_ASSIGN_OPER     // T_REM T_Operator T_TILDE T_NOT T_MULT T_IDENTIFIER T_EQ T_DIV T_AND T_ADDSUB_OP


%%



%%

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
