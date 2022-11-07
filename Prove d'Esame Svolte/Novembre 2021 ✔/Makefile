CC=g++
CFLAGS=-std=c++11
DEPS=Progetto.h Task.h Programmatore.h Data.h Nodo.h List.h
OBJ=Progetto.o Task.o Programmatore.o Data.o main.o List.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o
