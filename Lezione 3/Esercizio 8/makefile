esegui: main.o ternePitagoriche.o
	g++ -o esegui main.o ternePitagoriche.o 
main.o: main.cpp ternePitagoriche.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
ternePitagoriche.o: ternePitagoriche.cpp ternePitagoriche.h
	g++ -c ternePitagoriche.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
