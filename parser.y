%{
#include <string.h>
#include <stdarg.h>
#include <stdio.h>	
#include <stdlib.h>
#include "cgen.h"
#define YYSTYPE float
extern int yylex(void);
extern int line_num;
#include "parser.tab.h"
%}


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


%token IDENTIFIER
%token CONSTANT_STRING
%token POSITIVEINT
%token REAL

%token OP_PLUS
%token OP_MINUS
%token OP_MULT
%token OP_DIV
%token OP_EQUAL
%token OP_NOTEQUAL
%token OP_LESS
%token OP_LESSOREQUAL
%token OP_GREATER
%token OP_GREATEROREQUAL
%token OP_ASSIGNMENT
%token OP_SEMICOLON
%token OP_LEFT_PARENTHESIS
%token OP_RIGHT_PARENTHESIS
%token OP_COMMA
%token OP_LEFT_BRACKET
%token OP_RIGHT_BRACKET

%token OP_AND
%token OP_OR
%token OP_NOT

// New for perl
%token LEFT_CURLY_BRACKET
%token RIGHT_CURLY_BRACKET
%token KW_FOR_EACH
%token KW_UNTIL
%token POSITIVE_INT
%token OP_DIFFERENT
%token REGEX_OPERATOR
%token NEG_REGEX_OPERATOR
%token DOT_OPERATOR
%token SPL_LIST_ARR_VAR




%left OP_OR KW_OR
%left OP_AND KW_AND
%left OP_EQUAL OP_NOTEQUAL OP_GREATER OP_GREATEROREQUAL OP_LESSOREQUAL OP_LESS
%left OP_PLUS OP_MINUS
%left OP_MULT OP_DIVIS KW_MOD KW_DIV

%right OP_NOT
%right KW_NOT
%right KW_WHILE
%right KW_THEN KW_ELSE

%start program


%%
program : exp { printf("program -> exp = %d\n", (int)$1);}
exp : {printf("EMPTY EXPRESSION");}
|exp OP_PLUS exp {$$= $3 + $1;}
|exp OP_MINUS exp {$$= $3 - $1;}
|exp OP_MULT exp {$$= $3 * $1;}
|exp OP_DIVIS exp {$$= $3 / $1;}
|POSITIVE_INT {$$ = $1 ;printf("POSITIVE_INT = %s", $1);}
;
%%

int main ()
{
  if( yyparse() == 0)
     printf("Accepted!\n");
  else
     printf("Rejected!\n");
  return 0;
} 

void yyerror(char const* s, ...)
{
   printf("Line %d: %s\n", line_num, s);
}
