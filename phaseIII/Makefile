parse: calc.lex calc.y
	bison -v -d --file-prefix=y calc.y
	flex calc.lex
	g++ -g -O0 -std=c++11 -Werror=return-type -o mini_c y.tab.c lex.yy.c
	
clean:
	rm -f lex.yy.c y.tab.* y.output *.o calc

