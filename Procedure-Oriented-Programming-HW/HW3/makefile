all:	dep
	gcc -c *c
	gcc -o stack mm.o list.o list_ptr.o stack.o stack_ptr.o main_stack.o
	gcc -o queue mm.o list.o list_ptr.o queue.o queue_ptr.o main_queue.o

dep:
	gcc -MM *c > depend

clean:
	rm -f *o stack queue depend
