all:	dep
	gcc -c *c
	gcc -o stack_float ../mm.o list_float.o stack_float.o main_stack_float.o
	gcc -o queue_float ../mm.o list_float.o queue_float.o main_queue_float.o

dep:
	gcc -MM *c > depend_float

clean:
	rm -f *o stack_float queue_float depend_float
