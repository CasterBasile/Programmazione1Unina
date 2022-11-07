esegui: main.o
	g++ -o esegui main.o
main.o: main.cpp binary.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
