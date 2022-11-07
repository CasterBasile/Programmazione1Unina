esegui: main.o cascade.o
	g++ -o esegui main.o cascade.o 
main.o: main.cpp cascade.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
cascade.o: cascade.cpp cascade.h
	g++ -c cascade.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
