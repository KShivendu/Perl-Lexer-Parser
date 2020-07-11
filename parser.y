%code requires{

// #include "ast.hpp"
extern ast_Top *g_root; // A way of getting the AST out

//! This is to fix problems when generating C++
// We are declaring the functions provided by Flex, so
// that Bison generated code can call them.
int yylex(void);
void yyerror(const char *);

}

// Represents the value associated with any kind of
// AST node.
%union{
    const Base *stmnt;
    double number;
    std::string *string;
}

%token T_TYPE_SPEC T_TYPE_QUAL T_STRG_SPEC T_IDENTIFIER
%token T_SC T_CMA T_LRB T_LCB T_RCB T_LSB T_RSB T_QU T_COL T_LOG_OR T_LOG_AND T_OR T_XOR T_AND T_EQUALITY_OP T_REL_OP T_SHIFT_OP T_MULT T_DIV T_REM T_TILDE T_NOT T_DOT T_ARROW T_INCDEC T_ADDSUB_OP T_ASSIGN_OPER T_EQ T_SIZEOF
%token T_INT_CONST
%token T_IF T_WHILE T_DO T_FOR T_RETURN T_DEF T_PRINT
%nonassoc T_RRB
%nonassoc T_ELSE


%type <stmnt> ExtDef ExtDeclaration

%type <stmnt> FuncDef ParameterList Parameter ParamDeclarator

%type <stmnt> DeclarationList Declaration DeclarationSpec DeclarationSpec_T InitDeclarator InitDeclaratorList Declarator

%type <stmnt> StatementList Statement CompoundStatement CompoundStatement_2 SelectionStatement ExpressionStatement JumpStatement IterationStatement

%type <stmnt> Expression AssignmentExpression ConditionalExpression LogicalOrExpression LogicalAndExpression InclusiveOrExpression ExclusiveOrExpression AndExpression EqualityExpression RelationalExpression ShiftExpression AdditiveExpression MultiplicativeExpression CastExpression UnaryExpression PostfixExpression PostfixExpression2 ArgumentExpressionList PrimaryExpression

%type <number> Constant T_INT_CONST


%type <string> T_IDENTIFIER MultDivRemOP UnaryOperator ASSIGN_OPER T_ASSIGN_OPER T_EQ T_AND T_ADDSUB_OP T_TILDE T_NOT T_MULT T_DIV T_REM //T_Operator

%start ROOT

%%


// Statement

StatementList:
                Statement { $$ = new StatementList($1); }
        |       StatementList Statement { $$->push($2); }
                ;

Statement:
                CompoundStatement { $$ = $1; }
        |       SelectionStatement { $$ = $1; }
        |       ExpressionStatement { $$ = $1; }
        |       JumpStatement { $$ = $1; }
        |       IterationStatement { $$ = $1; }
                ;

CompoundStatement:
                T_LCB CompoundStatement_2 { $$ = $2; }
                ;

CompoundStatement_2:
                T_RCB { $$ = new CompoundStatement; }
        |       DeclarationList T_RCB { $$ = new CompoundStatement($1); }
        |       DeclarationList StatementList T_RCB { $$ = new CompoundStatement($1, $2); }
        |       StatementList T_RCB { $$ = new CompoundStatement($1); }
                ;

SelectionStatement:
                T_IF T_LRB Expression T_RRB Statement { $$ = new SelectionStatement($5); }
|       T_IF T_LRB Expression T_RRB Statement T_ELSE Statement { $$ = new SelectionStatement($5, $7); }
                ;

ExpressionStatement:
                T_SC { $$ = new ExpressionStatement(); }
        |       Expression T_SC { $$ = $1; }
                ;

JumpStatement:
                T_RETURN ExpressionStatement { $$ = $2; }
                ;

IterationStatement:
                T_WHILE T_LRB Expression T_RRB Statement { $$ = $5; }
        |       T_DO Statement T_WHILE T_LRB Expression T_RRB T_SC { $$ = $2; }
        |       T_FOR T_LRB Expression T_SC Expression T_SC Expression T_RRB Statement { $$ = $9; }
                ;
