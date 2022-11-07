esegui: main.o binary.o
	g++ -o esegui main.o binary.o 
main.o: main.cpp binary.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
binary.o: binary.cpp binary.h
	g++ -c binary.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
