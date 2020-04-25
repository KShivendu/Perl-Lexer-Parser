# Perl2C : Introduction to language processing course project

## Compiling Lexer Code :
```bash
flex lexer.l
gcc -o perl2c lex.yy.c -lfl
./perl2c < <FILE_NAME.pl>
```

## Using Lexer :
```bash
./lexer.sh <FILE_NAME.pl>
```



## Using Flex Demo(from Amit Sir) code:
```bash
flex classDemo.l
gcc -o flexDemo lex.yy.c -lfl
./flexDemo
```
- Now, type whatever you want. Press `Ctrl + D` to get output
