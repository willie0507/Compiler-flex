#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ELSE 1
#define EXIT 2
#define INT 3
#define IF 4
#define READ 5
#define RETURN 6
#define WHILE 7
#define WRITE 8
#define ID 9
#define NUMBER 10
#define PLUS 11
#define MINUS 12
#define MUL 13
#define DIV 14
#define MOD 15
#define EQ 16
#define NEQ 17
#define GREAT 18
#define GE 19
#define LESS 20
#define LE 21
#define AND 22
#define OR 23
#define NOT 24
#define ASSIGHN 25
#define SEMI 26
#define COMMA 27
#define LSB 28
#define RSB 29
#define LBB 30
#define RBB 31

union YYSTYPE {
	int integer ;
	char* string ;
} ;

union YYSTYPE yylval ;
