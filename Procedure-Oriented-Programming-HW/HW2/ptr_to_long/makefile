all:	dep
	gcc -c *c
	gcc -o stack_ptr_to_long ../mm.o list_ptr_to_long.o stack_ptr_to_long.o main_stack_ptr_to_long.o
	gcc -o queue_ptr_to_long ../mm.o list_ptr_to_long.o queue_ptr_to_long.o main_queue_ptr_to_long.o

dep:
	gcc -MM *c > depend_ptr_to_long

clean:
	rm -f *o stack_ptr_to_long queue_ptr_to_long depend_ptr_to_long
