esegui: main.o distruttore.o
	g++ -o esegui main.o distruttore.o 
main.o: main.cpp distruttore.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
distruttore.o: distruttore.cpp distruttore.h
	g++ -c distruttore.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
