all:	dep
	gcc -c *c
	gcc -o stack_int ../mm.o list_int.o stack_int.o main_stack_int.o
	gcc -o queue_int ../mm.o list_int.o queue_int.o main_queue_int.o

dep:
	gcc -MM *c > depend_int

clean:
	rm -f *o stack_int queue_int depend_int
