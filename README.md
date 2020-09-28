# Perl lexer parser : Introduction to Language Processing - Course project

## Compiling Lexer Code :
```bash
./buildLexer.sh
./perllp.bin < <FILE_NAME.pl>
```

## Using Lexer :
```bash
./perllex <FILE_NAME.pl>
```



## Using Flex code:
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
