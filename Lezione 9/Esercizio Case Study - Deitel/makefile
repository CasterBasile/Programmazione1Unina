CC=g++
CFLAGS=-std=c++11
DEPS=basePlus.h commissioni.h dipendenti.h SalarioDipendente.h 
OBJ=basePlus.o SalarioDipendente.o commissioni.o dipendenti.o main.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)