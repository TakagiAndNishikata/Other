all: *.cpp dep 
	g++ -c philosopher.cpp
	g++ -pthread -o philosopher philosopher.o
dep:
	g++ -MM *.cpp > depend
clean:
	rm -f philosopher depend *.o
