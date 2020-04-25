# Perl2C : Introduction to language processing course project

## Compiling Lexer Code :
```bash
./buildLexer.sh
./perl2c.bin < <FILE_NAME.pl>
```

## Using Lexer :
```bash
./perl2c <FILE_NAME.pl>
```



## Using Flex Demo(from Amit Sir) code:
```bash
flex classDemo.l
gcc -o flexDemo lex.yy.c -lfl
./flexDemo
```
- Now, type whatever you want. Press `Ctrl + D` to get output



## Target for Lexer :
- reserved constants, string constants, {}, , ; 
- multiple line comment