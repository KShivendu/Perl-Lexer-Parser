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
%token KW_STATIC KW_TRUE KW_FALSE KW_DO KW_IF KW_NOT KW_BOOLEAN KW_BREAK KW_ELSE KW_AND KW_INTEGER KW_STRING KW_CONTINUE KW_FOR KW_MOD KW_CHARACTER KW_VOID KW_RETURN KW_END KW_BEGIN KW_REAL KW_WHILE KW_OR KW_MAIN KW_READSTRING KW_READINTEGER KW_READREAL KW_WRITESTRING KW_WRITEINTEGER KW_WRITEREAL

%token VARIABLE IDENTIFIER CONSTANT_STRING POSITIVEINT REAL

%token OP_ADDSUB OP_INCDEC OP_BITWISE_OR OP_XOR OP_BITWISE_AND

%token OP_MULT OP_DIVIS OP_REM OP_EQUAL OP_EQUALITY OP_RELTIONAL OP_SHIFT

%token OP_ASSIGNMENT OP_SEMICOLON OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_TILDE OP_COMMA OP_LEFT_BRACKET OP_RIGHT_BRACKET

%token OP_NOT

%token LEFT_CURLY_BRACKET RIGHT_CURLY_BRACKET KW_SUB KW_FOR_EACH KW_UNTIL POSITIVE_INT OP_DIFFERENT REGEX_OPERATOR NEG_REGEX_OPERATOR DOT_OPERATOR SPL_LIST_ARR_VAR T_ASSIGN_OPER

// New from sahu
%token OP_COLON OP_QUESTION KW_PRINT OP_RELATIONAL
//%token DeclarationList 
 

%left OP_BITWISE_OR KW_OR OP_BITWISE_AND KW_AND OP_EQUAL OP_NOTEQUAL OP_GREATER OP_GREATEROREQUAL OP_LESSOREQUAL OP_LESS OP_PLUS OP_MINUS OP_MULT OP_DIVIS KW_MOD KW_DIV OP_EQUALITY OP_RELTIONAL OP_SHIFT

%right OP_NOT KW_NOT KW_WHILE KW_THEN KW_ELSE

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
    // std::string *string;
}

// ROOT : KW_SUB IDENTIFIER OP_LEFT_PARENTHESIS OP_RIGHT_PARENTHESIS OP_LEFT_BRACKET FunctionBody OP_RIGHT_BRACKET  {printf("$$ : %s \n", yylval.string );}

%type <string> ROOT IDENTIFIER KW_SUB  AssignmentExpression FunctionCalling ; //FunctionCallStatement 
%start ROOT // program


// C-Compilere type declaration
// These all are staments
// TYPE Declarations
// %type <stmnt> ExtDef ExtDeclaration
// %type <stmnt> FuncDef ParameterList Parameter ParamDeclarator
// %type <stmnt> DeclarationList Declaration DeclarationSpec DeclarationSpec_T InitDeclarator InitDeclaratorList Declarator
// %type <stmnt> StatementList Statement CompoundStatement CompoundStatement_2 SelectionStatement ExpressionStatement JumpStatement IterationStatement
// %type <stmnt> Expression AssignmentExpression ConditionalExpression LogicalOrExpression LogicalAndExpression InclusiveOrExpression ExclusiveOrExpression AndExpression EqualityExpression RelationalExpression ShiftExpression AdditiveExpression MultiplicativeExpression CastExpression UnaryExpression PostfixExpression PostfixExpression2 ArgumentExpressionList PrimaryExpression
// %type <number> Constant T_INT_CONST
// %type <string> T_IDENTIFIER MultDivRemOP UnaryOperator ASSIGN_OPER T_ASSIGN_OPER T_EQ T_AND T_ADDSUB_OP T_TILDE T_NOT T_MULT T_DIV T_REM //T_Operator

%%

ROOT: 
    ExtDef {printf("ROOT : ExtDef\n"); } // printf("ROOT : %s \n", yylval.string );}
    ;

ExtDef:
    ExtDeclaration {printf("ExtDef : ExtDeclaration\n"); }
  | ExtDef ExtDeclaration {printf("ExtDef : ExtDef  ExtDeclaration\n"); }; 
    ;

ExtDeclaration:
StatementList  {printf("ExtDef : ExtDef  ExtDeclaration\n"); } // This one handles statements other than func declaration
|FuncDeclaration CompoundStatement  {printf("Function - ExtDeclaration : FuncDeclaration CompoundStatement\n");}  // This one is for function declaration
;

FuncDeclaration:
KW_SUB IDENTIFIER { printf("FuncDeclaration : KW_SUB IDENTIFIER\n"); }
;

ParameterList:
	| Parameter { printf("ParameterList : Parameter\n"); }
	| ParameterList OP_COMMA Parameter { printf("ParameterList : ParameterList OP_COMMA Parameter\n"); }
		;

Parameter:
    VARIABLE { printf("Parameter : Variable\n"); }
    | CONSTANT_STRING {printf("Parameter : Constant String\n");}
    | POSITIVE_INT  {printf("Parameter : POSITIVE_INT\n");}
    | REAL {printf("Parameter : REAL\n");}
    ;

StatementList:  
   Statement StatementList { printf("StatementList : Statement StatementList \n"); }
  | Statement { printf("StatementList : Statement \n"); }
    ;

Statement:  
    CompoundStatement   { printf("Statement : CompoundStatement \n"); }    /* Working :) Statement(s) inside curly brackets */
   |SelectionStatement  { printf("Statement : SelectionStatement \n"); } 
  | FunctionCalling OP_SEMICOLON { printf("Statement : FunctionCalling; \n"); }	/* Working :) FunctionalCall  */
  | ExpressionStatement { printf("Statement : ExpressionStatement \n"); }    /* Working :) Statements which end with semicolon*/
  | IterationStatement   { printf("Statement : IterationStatement \n"); }  /* Working :) Handles until, do-whiile, while and for loop*/
  ;


FunctionCalling:
    IDENTIFIER OP_LEFT_PARENTHESIS ParameterList OP_RIGHT_PARENTHESIS { printf("FunctionCalling %s : IDENTIFIER (ParameterList) \n", $$); }
    ;

CompoundStatement:
    LEFT_CURLY_BRACKET CompoundStatement_2 { printf("CompoundStatement : { CompoundStatment_2 \n"); }
    ;

CompoundStatement_2:
    RIGHT_CURLY_BRACKET { printf("CompoundStatement_2 : } \n"); }
    |StatementList RIGHT_CURLY_BRACKET { printf("CompoundStatement_2 : StatementList } \n"); }
    ;

SelectionStatement:
if_main else_if_expr else_expr {printf("SelectionStatement: if_main else_if_expr else_expr");}
|KW_IF OP_LEFT_PARENTHESIS Expression OP_RIGHT_PARENTHESIS Statement {printf("SelectionStatement : KW_IF OP_LEFT_PARENTHESIS Expression OP_RIGHT_PARENTHESIS Statement\n");}
|KW_IF OP_LEFT_PARENTHESIS Expression OP_RIGHT_PARENTHESIS Statement KW_ELSE Statement
;

if_main:
KW_IF OP_LEFT_PARENTHESIS Expression OP_RIGHT_PARENTHESIS LEFT_CURLY_BRACKET StatementList RIGHT_CURLY_BRACKET
;

else_expr:
| KW_ELSE LEFT_CURLY_BRACKET StatementList RIGHT_CURLY_BRACKET
;

else_if_expr:
| else_if_expr KW_ELSE if_main
;

ExpressionStatement:
OP_SEMICOLON  {printf("ExpStatement: ;\n");}
|Expression OP_SEMICOLON {printf("ExpStatement: Expression ;\n");}
|KW_RETURN ExpressionStatement {printf("ExpStatement: return ExprStatement ;\n");}
;

IterationStatement:
KW_WHILE OP_LEFT_PARENTHESIS ConditionalExpression OP_RIGHT_PARENTHESIS Statement {printf("IterationStatement : while-loop\n");}
|KW_DO LEFT_CURLY_BRACKET StatementList RIGHT_CURLY_BRACKET KW_WHILE OP_LEFT_PARENTHESIS ConditionalExpression OP_RIGHT_PARENTHESIS {printf("IterationStatent : do-while"); }
|KW_FOR OP_LEFT_PARENTHESIS Expression OP_SEMICOLON Expression OP_SEMICOLON Expression OP_RIGHT_PARENTHESIS Statement {printf("IterationStatement : for loop");}
|KW_UNTIL OP_LEFT_PARENTHESIS ConditionalExpression OP_RIGHT_PARENTHESIS Statement {printf("IterationStatement : conditional-loop\n");}
;


Expression:
//|VARIABLE KW_OR VARIABLE // Not in use
AssignmentExpression {printf("Expression : AssignmentExpression\n"); }
;

AssignmentExpression:
//VARIABLE OP_EQUAL PrimaryExpression {printf("AssignmentExp : VARIABLE OP_EQUAL PrimaryExp \n" ); } // Not sure if Expression should be here or something else
ConditionalExpression  {printf("AssignmentExpression: ConditionalExpression\n"); }
|UnaryExpression ASSIGN_OPER AssignmentExpression {printf("AssignmentExpression: UnaryExp ASSIGN_OPER AssignmentExpression\n"); }
;


ASSIGN_OPER:
T_ASSIGN_OPER {printf("ASSIGN_OPER : T_ASSIGN_OPER\n");}
|OP_EQUAL {printf("ASSIGN_OPER : OP_EQUAL\n");}
;

ConditionalExpression:
PrimaryExpression OP_RELTIONAL PrimaryExpression {printf("ConditionalExpression: PrimaryExpression OP_RELTIONAL PrimaryExpression\n");}
|LogicalOrExpression {printf("ConditionalExpression: LogicalOrExpression\n");}
|LogicalOrExpression OP_QUESTION Expression OP_COLON ConditionalExpression {printf("ConditionalExpression: LogionOrExp OP_QUESTION Expression OP_COLON ConditionalExp\n");}
;

LogicalOrExpression:
LogicalAndExpression
|LogicalOrExpression KW_OR LogicalAndExpression
;

LogicalAndExpression:
InclusiveOrExpression
|LogicalAndExpression KW_AND InclusiveOrExpression
;

InclusiveOrExpression:
ExclusiveOrExpression
|InclusiveOrExpression OP_BITWISE_OR ExclusiveOrExpression
;

ExclusiveOrExpression:
AndExpression
|ExclusiveOrExpression OP_XOR AndExpression
;

AndExpression:
EqualityExpression
|AndExpression OP_BITWISE_AND EqualityExpression
;

EqualityExpression:
RelationalExpression
|EqualityExpression OP_EQUALITY RelationalExpression {printf("EqualityExp : EqualityExp OP_EQUALITY RelationalExp\n");}
;

RelationalExpression:
ShiftExpression {printf("RelationalExpression: ShiftExpression\n");}
|RelationalExpression OP_RELATIONAL ShiftExpression {printf("RelationalExpression : RelationalExpression OP_RELATIONAL ShiftExpression\n");}
;

ShiftExpression:
AdditiveExpression {printf("ShiftExp: AdditiveExp\n");}
|ShiftExpression OP_SHIFT AdditiveExpression {printf("ShiftExp: ShiftExp OP_SHIFT AdditiveExp\n");}
;

AdditiveExpression:
MultiplicativeExpression {printf("AdditiveExp: MultiplicativeExp \n");}
|AdditiveExpression OP_ADDSUB MultiplicativeExpression {printf("AdditiveExp: AdditiveExp OP_ADDSUB MultiplicativeExp \n");}
;

MultiplicativeExpression:
UnaryExpression {printf("MultiplicativeExp: UnaryExp \n");}
|MultiplicativeExpression MultDivRemOP UnaryExpression {printf("MultiplicativeExp: MultiplicativeExp MultDivRemOP UnaryExp \n");}
;

MultDivRemOP:
OP_MULT 
|OP_DIVIS 
|OP_REM 
;

UnaryExpression:
PostfixExpression
|OP_INCDEC UnaryExpression
|UnaryOperator UnaryExpression
;

UnaryOperator:
OP_BITWISE_AND
|OP_ADDSUB
|OP_MULT
|OP_TILDE
|OP_NOT
;

PostfixExpression:
PrimaryExpression 
|PostfixExpression OP_LEFT_BRACKET Expression OP_RIGHT_BRACKET 
|PostfixExpression OP_LEFT_PARENTHESIS PostfixExpression2 
|PostfixExpression DOT_OPERATOR IDENTIFIER 
|PostfixExpression OP_INCDEC 
;

PostfixExpression2:
OP_RIGHT_PARENTHESIS
|ArgumentExpressionList OP_RIGHT_PARENTHESIS
;

ArgumentExpressionList:
AssignmentExpression
|ArgumentExpressionList OP_COMMA AssignmentExpression 
;

PrimaryExpression:
FunctionCalling OP_SEMICOLON{printf("PrimaryExp: FunctionCalling\n");}
|VARIABLE {printf("PrimaryExp: VARIABLE\n"); }
|Constant  {printf("PrimaryExp: Constant\n"); }
|SPL_LIST_ARR_VAR {printf("PrimaryExp: SPL_LIST_ARR_VAR\n"); }
// |OP_LEFT_PARENTHESIS Expression OP_RIGHT_PARENTHESIS 
;

Constant:
POSITIVE_INT
|CONSTANT_STRING
;
%%

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
