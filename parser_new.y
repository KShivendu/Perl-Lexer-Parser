%{
  #include <stdio.h>
  int yylex();
%}


%right '='
%left '+' '-'
%left '*' '/'
%token EOL funcname
%%
file:
|'sub' funcname'()' {printf("=%d\n>",eval($0));}
;
%%

int main() {
  printf(">");
  yyparse();
  return 0;
}

void yyerror(char *s) {
  fprintf(stderr,"error:%s\n",s);
}
