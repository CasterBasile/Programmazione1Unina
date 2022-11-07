esegui: main.o Data.o
	g++ -o esegui main.o Data.o 
main.o: main.cpp Data.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
Data.o: Data.cpp Data.h
	g++ -c Data.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
