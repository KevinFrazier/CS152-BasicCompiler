#!/bin/bash


flex sample.lex
gcc lex.yy.c -lfl
./a.out
