#!/bin/sh


bison -v -d --file-prefix=y mini_l.y

flex ../861169204-861126267.lex
gcc lex.yy.c -lfl
./a.out

gcc -o parser y.tab.c lex.yy.c -lfl

