yapl: y.tab.c lex.yy.c parser_debug.o lalr_table.o parser_diag.o
	gcc -O3 lex.yy.c y.tab.c parser_debug.o lalr_table.o parser_diag.o -o yapl
	@echo "Run the program as ./yapl [input_file]"

y.tab.c: yapl.y 
	yacc -dv yapl.y

lex.yy.c: yapl.l y.tab.h
	lex yapl.l

parser_debug.o: parser_debug.c parser_debug.h
	gcc -c parser_debug.c -o parser_debug.o

lalr_table.o: lalr_table.c lalr_table.h
	gcc -c lalr_table.c -o lalr_table.o

parser_diag.o: parser_diag.c parser_diag.h parser_debug.h lalr_table.h
	gcc -c parser_diag.c -o parser_diag.o

clean:
	@rm -f lex.yy.c y.tab.h y.tab.c y.output yapl parser_debug.o lalr_table.o parser_diag.o parsing_table.csv  derivation.dot derivation.png

