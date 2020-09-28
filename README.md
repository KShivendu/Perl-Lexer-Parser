# Perl lexer parser : Introduction to Language Processing - Course project

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


# References : 
- Geeksforgeeks
- `info flex`
- [Flex Notes](https://github.com/ifding/flex-bison/blob/master/flex-learning-notes.md)
