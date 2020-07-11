parser: parser_new.y lexer_new.l
	bison -d parser_new.y
	flex lexer_new.l
	gcc parser_new.tab.c lex.yy.c -lfl -o perl2c

clean:
	rm lex.yy.c perl2c parser_new.tab.* parser_new.output