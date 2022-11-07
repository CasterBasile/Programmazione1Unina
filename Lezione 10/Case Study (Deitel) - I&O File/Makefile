CC=g++
CFLAGS=-std=c++11
DEPS=funzioni.h
OBJ=funzioni.o main.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o