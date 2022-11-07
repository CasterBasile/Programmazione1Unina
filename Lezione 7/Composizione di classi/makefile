esegui: main.o classi.o
	g++ -o esegui main.o classi.o 
main.o: main.cpp classi.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
classi.o: classi.cpp classi.h
	g++ -c classi.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
