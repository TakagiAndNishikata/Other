all:	dep
	gcc -c *c
	gcc -o stack_ptr_to_float ../mm.o list_ptr_to_float.o stack_ptr_to_float.o main_stack_ptr_to_float.o
	gcc -o queue_ptr_to_float ../mm.o list_ptr_to_float.o queue_ptr_to_float.o main_queue_ptr_to_float.o

dep:
	gcc -MM *c > depend_ptr_to_float

clean:
	rm -f *o stack_ptr_to_float queue_ptr_to_float depend_ptr_to_float
