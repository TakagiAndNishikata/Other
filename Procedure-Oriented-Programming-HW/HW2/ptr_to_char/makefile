all:	dep
	gcc -c *c
	gcc -o stack_ptr_to_char ../mm.o list_ptr_to_char.o stack_ptr_to_char.o main_stack_ptr_to_char.o
	gcc -o queue_ptr_to_char ../mm.o list_ptr_to_char.o queue_ptr_to_char.o main_queue_ptr_to_char.o

dep:
	gcc -MM *c > depend_ptr_to_char

clean:
	rm -f *o stack_ptr_to_char queue_ptr_to_char depend_ptr_to_char
