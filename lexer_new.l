%{
#include "parser_new.tab.h" 
%}

%%
[0-9]+ {yylval.i = atoi(yytext);return NUMBER;}
"+"|"-"|"*"|"/"|"|"|"("|")"|"=" {return yytext[0];}
[a-zA-Z_][a-zA-Z0-9]* {return funcname;}
\n {return EOL;}
[ \t] {}
. {printf("Unknown Character: %s\n",yytext);}
%%

