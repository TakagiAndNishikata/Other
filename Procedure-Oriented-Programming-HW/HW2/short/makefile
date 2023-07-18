all:	dep
	gcc -c *c
	gcc -o stack_short ../mm.o list_short.o stack_short.o main_stack_short.o
	gcc -o queue_short ../mm.o list_short.o queue_short.o main_queue_short.o

dep:
	gcc -MM *c > depend_short

clean:
	rm -f *o stack_short queue_short depend_short
