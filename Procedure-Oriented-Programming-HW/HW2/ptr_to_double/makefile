all:	dep
	gcc -c *c
	gcc -o stack_ptr_to_double ../mm.o list_ptr_to_double.o stack_ptr_to_double.o main_stack_ptr_to_double.o
	gcc -o queue_ptr_to_double ../mm.o list_ptr_to_double.o queue_ptr_to_double.o main_queue_ptr_to_double.o

dep:
	gcc -MM *c > depend_ptr_to_double

clean:
	rm -f *o stack_ptr_to_double queue_ptr_to_double depend_ptr_to_double
