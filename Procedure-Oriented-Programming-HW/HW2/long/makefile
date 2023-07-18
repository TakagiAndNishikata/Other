all:	dep
	gcc -c *c
	gcc -o stack_long ../mm.o list_long.o stack_long.o main_stack_long.o
	gcc -o queue_long ../mm.o list_long.o queue_long.o main_queue_long.o

dep:
	gcc -MM *c > depend_long

clean:
	rm -f *o stack_long queue_long depend_long
