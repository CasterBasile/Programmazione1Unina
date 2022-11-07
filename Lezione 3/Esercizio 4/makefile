esegui: main.o decimale.o
	g++ -o esegui main.o decimale.o 
main.o: main.cpp decimale.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
decimale.o: decimale.cpp decimale.h
	g++ -c decimale.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
