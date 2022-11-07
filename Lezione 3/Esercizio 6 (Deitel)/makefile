esegui: main.o codifica.o
	g++ -o esegui main.o codifica.o 
main.o: main.cpp codifica.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
codifica.o: codifica.cpp codifica.h
	g++ -c codifica.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
