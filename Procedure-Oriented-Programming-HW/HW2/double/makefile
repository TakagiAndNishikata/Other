all:	dep
	gcc -c *c
	gcc -o stack_double ../mm.o list_double.o stack_double.o main_stack_double.o
	gcc -o queue_double ../mm.o list_double.o queue_double.o main_queue_double.o

dep:
	gcc -MM *c > depend_double

clean:
	rm -f *o stack_double queue_double depend_double
