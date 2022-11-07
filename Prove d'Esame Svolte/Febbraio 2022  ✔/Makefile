CC=g++
CFLAGS=-std=c++11
DEPS=Tavolo.h Triangolare.h Rettangolare.h Gestore.h Circolare.h
OBJ=main.o Triangolare.o Rettangolare.o Gestore.o Circolare.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o
