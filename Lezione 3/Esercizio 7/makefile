esegui: main.o triangoli.o
	g++ -o esegui main.o triangoli.o 
main.o: main.cpp triangoli.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
triangoli.o: triangoli.cpp triangoli.h
	g++ -c triangoli.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
