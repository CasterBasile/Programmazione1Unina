esegui: main.o HeartRate.o
	g++ -o esegui main.o HeartRate.o 
main.o: main.cpp HeartRate.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
HeartRate.o: HeartRate.cpp HeartRate.h
	g++ -c HeartRate.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f *exe
