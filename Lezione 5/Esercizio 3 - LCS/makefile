esegui: main.o LCS.o
	g++ -o esegui main.o LCS.o 
main.o: main.cpp LCS.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
LCS.o: LCS.cpp LCS.h
	g++ -c LCS.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
