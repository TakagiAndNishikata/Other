all:	dep
	gcc -c *c
	gcc -o stack_ptr_to_short ../mm.o list_ptr_to_short.o stack_ptr_to_short.o main_stack_ptr_to_short.o
	gcc -o queue_ptr_to_short ../mm.o list_ptr_to_short.o queue_ptr_to_short.o main_queue_ptr_to_short.o

dep:
	gcc -MM *c > depend_ptr_to_short

clean:
	rm -f *o stack_ptr_to_short queue_ptr_to_short depend_ptr_to_short
