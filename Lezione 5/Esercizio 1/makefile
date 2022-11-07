esegui: main.o dadi.o
	g++ -o esegui main.o dadi.o 
main.o: main.cpp dadi.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
dadi.o: dadi.cpp dadi.h
	g++ -c dadi.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
