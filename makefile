OBJ = lex.yy.o

scanner: $(OBJ)
	gcc -o scanner $(OBJ) -lfl
lex.yy.o: hw3.l hw3.h
	gcc -c lex.yy.c
lex.yy.c: hw3.l hw3.h
	flex hw3.l
clean:
	rm -f scanner *.c *.o
