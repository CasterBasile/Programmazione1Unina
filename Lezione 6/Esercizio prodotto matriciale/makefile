esegui: main.o function.o
	g++ -o esegui main.o function.o 
main.o: main.cpp function.h
	g++ -c main.cpp -std=c++11 -Wall
function.o: function.cpp function.h
	g++ -c function.cpp -std=c++11 -Wall
make clean:
	rm -f *o
	rm -f *exe