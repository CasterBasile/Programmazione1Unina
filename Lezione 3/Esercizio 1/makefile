esegui: main.o MaxMin.o
	g++ -o esegui main.o MaxMin.o 
main.o: main.cpp MaxMin.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
MaxMin.o: MaxMin.cpp MaxMin.h
	g++ -c MaxMin.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe