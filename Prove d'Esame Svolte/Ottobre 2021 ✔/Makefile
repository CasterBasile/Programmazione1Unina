CC=g++
CFLAGS=-std=c++11
DEPS=Cdl.h Insegnamento.h Studente.h
OBJ=Cdl.o Studente.o Cdl.o main.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o
