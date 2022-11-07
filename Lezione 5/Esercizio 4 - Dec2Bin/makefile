esegui: main.o Dec2Bin.o
	g++ -o esegui main.o Dec2Bin.o 
main.o: main.cpp Dec2Bin.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
Dec2Bin.o: Dec2Bin.cpp Dec2Bin.h
	g++ -c Dec2Bin.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
