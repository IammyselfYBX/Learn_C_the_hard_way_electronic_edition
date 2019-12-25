CFLAGS=-Wall -g
all: main
main: stack_scope.o main.c
	cc -Wall -g -DNDEBUG main.c stack_scope.o -o main
stack_scope.o:stack_scope.c
	cc -Wall -g -DNDEBUG -c stack_scope.c -o stack_scope.o
clean:
	rm stack_scope.o main