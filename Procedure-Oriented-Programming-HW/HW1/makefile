all: *.c dep
	gcc -c *.c
	gcc mm.o list.o stack.o main_stack.o -o stack 
	gcc mm.o list.o queue.o main_queue.o -o queue

dep:
	gcc -MM *.c > dep

clean:
	rm -f stack queue dep *.o
