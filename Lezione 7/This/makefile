esegui: main.o this.o
	g++ -o esegui main.o this.o 
main.o: main.cpp this.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
this.o: this.cpp this.h
	g++ -c this.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
