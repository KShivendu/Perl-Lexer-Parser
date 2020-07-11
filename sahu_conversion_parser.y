
// #include "parser.tab.h"

// #include "ast.hpp"
// #include "ast.hpp"
// extern ast_Top *g_root; // A way of getting the AST out


/*program : exp { printf("program -> exp = %d\n", $1);}
exp : {printf("EMPTY EXPRESSION");}
|exp OP_PLUS exp {$$= $3 + $1;}
|exp OP_MINUS exp {$$= $3 - $1;}
|exp OP_MULT exp {$$= $3 * $1;}
|exp OP_DIVIS exp {$$= $3 / $1;}
|POSITIVE_INT {$$ = $1;}
;*/


ParameterList:
Parameter
|ParameterList OP_COMMA Parameter ParameterList"'";

ParameterList"'" : 
|OP_COMMA Parameter ParameterList"'";
Parameter:
VARIABLE
;