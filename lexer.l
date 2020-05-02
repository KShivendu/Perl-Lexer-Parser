%{
#include <assert.h>
#include <stdio.h>
#include <string.h>
/*#include "ptucc_parser.tab.h"*/
#include "cgen.h"
#include "symtab.c"

int line_num = 1;
#define KW_PROGRAM 300
#define KW_BEGIN 301
#define KW_END 302
#define ERROR_MESSAGE 303
#define TK_EOF 0
#define IDENTIFIER 304
/* 
	A primitive macro facility:
	just one macro is allowed to be defined! 
*/

char* mactable[32][2];


/* Return 1 on success, 0 on failure (macro table full) */
int set_macro(char* name, char* def);

/* Return def for macro, or NULL if no such macro is defined. */
char* get_macro(char* name);

%}

IDENTIFIER 		[a-zA-Z][0-9a-zA-Z_]*

DIGIT  			[0-9]
POSITIVE_INT 	[0]|[1-9][0-9]*
NUMBER  		{DIGIT}{DIGIT}*
REAL 			{POSITIVE_INT}"."{NUMBER}+[Ee]?[+-]?[1-9]*?

COMMON_CHARS			[^'"\\]
ESCAPE_CHARS			"\\n"|"\\t"|"\\r"|"\\\'"|"\\\""|"\\\\"
CONSTANT_STRING "\""(({COMMON_CHARS}|{ESCAPE_CHARS})*)"\""|"'"(({COMMON_CHARS}|{ESCAPE_CHARS})*)"'"	


WHITESPACE 		[ \t\r]

MULTILINECOMMENTBEGIN ^=[a-zA-Z]
MULTILINECOMMENTEND ^"=cut"$

%x comment
%x line_comment




%%


static 					{ printf("Line: %d token KW_STATIC: %s\n", line_num, yytext); }
true|false				{ printf("Line: %d token BOOLEAN: %s\n", line_num, yytext);}
do 						{ printf("Line: %d token KW_DO: %s\n", line_num, yytext); }
if 						{ printf("Line: %d token KW_IF: %s\n", line_num, yytext); }
not						{ printf("Line: %d token KW_NOT: %s\n", line_num, yytext); }
boolean					{ printf("Line: %d token KW_BOOLEAN: %s\n", line_num, yytext); }
break					{ printf("Line: %d token KW_BREAK: %s\n", line_num, yytext); }
else					{ printf("Line: %d token KW_ELSE: %s\n", line_num, yytext); }
and						{ printf("Line: %d token KW_AND: %s\n", line_num, yytext); }
integer 				{ printf("Line: %d token KW_INTEGER: %s\n", line_num, yytext); }
string 					{ printf("Line: %d token KW_STRING: %s\n", line_num, yytext); }
continue 				{ printf("Line: %d token KW_CONTINUE: %s\n", line_num, yytext); }
for						{ printf("Line: %d token KW_FOR: %s\n", line_num, yytext); }
mod						{ printf("Line: %d token KW_MOD: %s\n", line_num, yytext); }
character				{ printf("Line: %d token KW_CHARACTER: %s\n", line_num, yytext); }
void					{ printf("Line: %d token KW_VOID: %s\n", line_num, yytext); }
return 					{ printf("Line: %d token KW_RETURN: %s\n", line_num, yytext); }
end						{ printf("Line: %d token KW_END: %s\n", line_num, yytext); }
begin 					{ printf("Line: %d token KW_BEGIN: %s\n", line_num, yytext); }
real					{ printf("Line: %d token KW_REAL: %s\n", line_num, yytext); }
while					{ printf("Line: %d token KW_WHILE: %s\n", line_num, yytext); }
or						{ printf("Line: %d token KW_OR: %s\n", line_num, yytext); }

foreach					{ printf("Line: %d token KW_FOR_EACH: %s\n", line_num, yytext); }
until					{ printf("Line: %d token KW_UNTIL: %s\n", line_num, yytext); }


{IDENTIFIER}|[$@%]+{IDENTIFIER} {printf("Line: %d token IDENTIFIER: %s\n", line_num, yytext);
                    			insert(yytext, strlen(yytext), UNDEF, line_num);}


{CONSTANT_STRING}		{printf("Line: %d token CONSTANT_STRING: %s\n", line_num, yytext);}
{POSITIVE_INT}			{printf("Line: %d token POSITIVE_INT: %s\n", line_num, yytext);}
{REAL}					{printf("Line: %d token REAL: %s\n", line_num, yytext); }


"+"         			{printf("Line: %d token OP_PLUS: %s\n", line_num, yytext); }
"-"        				{printf("Line: %d token OP_MINUS: %s\n", line_num, yytext); }
"*"         			{printf("Line: %d token OP_MULT: %s\n", line_num, yytext); }
"/"         			{printf("Line: %d token OP_DIVIS: %s\n", line_num, yytext); }
">="        			{printf("Line: %d token OP_GREATEROREQUAL: %s\n", line_num, yytext); }
"="         			{printf("Line: %d token OP_EQUAL: %s\n", line_num, yytext); }
"<="        			{printf("Line: %d token OP_LESSOREQUAL: %s\n", line_num, yytext); }
"<"						{printf("Line: %d token OP_LESS: %s\n", line_num, yytext); }
">"         			{printf("Line: %d token OP_GREATER: %s\n", line_num, yytext); }
"!="					{printf("Line: %d token OP_DIFFERENT: %s\n", line_num, yytext); }
":="					{printf("Line: %d token ASSIGNMENT: %s\n", line_num, yytext); }
";"         			{printf("Line: %d token SEMICOLON: %s\n", line_num, yytext); }
"("         			{printf("Line: %d token LEFT_PARENTHESIS: %s\n", line_num, yytext); }
")"         			{printf("Line: %d token RIGHT_PARENTHESIS: %s\n", line_num, yytext); }
","         			{printf("Line: %d token COMMA: %s\n", line_num, yytext); }
"["         			{printf("Line: %d token LEFT_BRACKET %s\n:", line_num, yytext); }
"]"         			{printf("Line: %d token RIGHT_BRACKET: %s\n", line_num, yytext); }
"&&" 					{printf("Line: %d token and: %s\n", line_num, yytext); }
"||" 					{printf("Line: %d token or: %s\n", line_num, yytext); }
"!" 					{printf("Line: %d token not: %s\n", line_num, yytext); }

"{"         			{printf("Line: %d token LEFT_CURLY_BRACKET: %s\n", line_num, yytext); }
"}"         			{printf("Line: %d token RIGHT_CURLY_BRACKET: %s\n", line_num, yytext); }
"=~"					{printf("Line: %d token REGEX_OPERATOR: %s\n", line_num, yytext); }
"!~"					{printf("Line: %d token NEG_REGEX_OPERATOR: %s\n", line_num, yytext); }
"."						{printf("Line: %d token DOT_OPERATOR: %s\n", line_num, yytext); }
"$_"					{printf("Line: %d token SPL_LIST_ARR_VAR: %s\n", line_num, yytext); } /* Not sure how to handle this one */

{MULTILINECOMMENTBEGIN}					{ BEGIN(comment);} /* printf("Starting multi line commenting\n"); */ 
<comment>[^=\n]*        /* eat anything that's not a '=' */
<comment>\n             ++line_num;
<comment>^"=cut"$   {BEGIN(INITIAL);} /* printf("Comment End\n");*/


"#"					BEGIN(line_comment);
<line_comment>[^\n]*        /* eat anything in that row */
<line_comment>\n           ++line_num;  BEGIN(INITIAL);
   


{WHITESPACE}*			{	/* skip whitespace */}
\n 						++line_num;
<<EOF>> 				return TK_EOF;

.        				return ERROR_MESSAGE;

%%
/*user code*/
int main (int argc, char *argv[])
{
	init_hash_table();
	yyin = fopen(argv[1], "r");
	int token;
	while ( (token = yylex()) != TK_EOF )
	{	
	if (token==303)
		{
			printf("Unrecognized token %s in line %u\n", yytext, line_num);
			printf("vgikame\n");
			exit(1);
		}
	}
	fclose(yyin);

	// symbol table dump
    yyout = fopen("symtab_dump.out", "w");
    symtab_dump(yyout);
    fclose(yyout); 
}
