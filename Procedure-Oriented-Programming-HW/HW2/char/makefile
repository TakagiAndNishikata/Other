all:	dep
	gcc -c *c
	gcc -o stack_char ../mm.o list_char.o stack_char.o main_stack_char.o
	gcc -o queue_char ../mm.o list_char.o queue_char.o main_queue_char.o

dep:
	gcc -MM *c > depend_char

clean:
	rm -f *o stack_char queue_char depend_char
