SUBDIRS = char int short long float double ptr_to_char ptr_to_short ptr_to_int ptr_to_long ptr_to_float ptr_to_double
all: dep
	gcc -c mm.c
	for i in $(SUBDIRS); do \
		(cd $$i && make); \
	done

dep:
	for i in $(SUBDIRS); do \
		(cd $$i && make dep); \
	done
	gcc -MM char/*c short/*c int/*c long/*c float/*c double/*c ptr_to_char/*c ptr_to_short/*c ptr_to_int/*c ptr_to_long/*c ptr_to_float/*c ptr_to_double/*c > dep
	
clean:
	rm -f mm.o dep
	for i in $(SUBDIRS); do \
		(cd $$i && make clean); \
	done

