all:	dep
	gcc -c *c
	gcc -o stack_ptr_to_int ../mm.o list_ptr_to_int.o stack_ptr_to_int.o main_stack_ptr_to_int.o
	gcc -o queue_ptr_to_int ../mm.o list_ptr_to_int.o queue_ptr_to_int.o main_queue_ptr_to_int.o

dep:
	g++ -MM *c > depend_ptr_to_int

clean:
	rm -f *o stack_ptr_to_int queue_ptr_to_int depend_ptr_to_int
