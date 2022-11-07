esegui: main.o motorVehicle.o
	g++ -o esegui main.o motorVehicle.o 
main.o: main.cpp motorVehicle.h
	g++ -c main.cpp -std=c++11 -pedantic -Wall
motorVehicle.o: motorVehicle.cpp motorVehicle.h
	g++ -c motorVehicle.cpp -std=c++11 -pedantic -Wall
make clean:
	rm -f *o
	rm -f esegui