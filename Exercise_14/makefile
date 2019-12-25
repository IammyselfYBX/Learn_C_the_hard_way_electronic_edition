main:function.o can_print_it.o print_arguments.o print_letters.o
	cc -Wall -g function.o can_print_it.o print_arguments.o print_letters.o -o main
function.o:function.c
	gcc -Wall -g -c function.c -o function.o
can_print_it.o:can_print_it.c
	gcc -Wall -g -c can_print_it.c -o can_print_it.o
print_arguments.o:print_arguments.c 
	gcc -Wall -g -c print_arguments.c  -o print_arguments.o
#如果写
#print_arguments.o:print_arguments.c 
#	gcc -Wall -g -c print_arguments.c  -o print_arguments.o
#会提示
#gcc: error: print_letters.o: No such file or directory
print_letters.o:print_letters.c 
	gcc -Wall -g -c print_letters.c -o print_letters.o
	
clean:
	rm function.o can_print_it.o print_arguments.o print_letters.o main