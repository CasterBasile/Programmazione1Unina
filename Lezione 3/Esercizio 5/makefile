esegui: main.o fibonacci.o
	g++ -o esegui main.o fibonacci.o 
main.o: main.cpp fibonacci.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
fibonacci.o: fibonacci.cpp fibonacci.h
	g++ -c fibonacci.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
