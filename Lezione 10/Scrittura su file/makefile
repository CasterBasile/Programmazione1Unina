CC=g++
CFLAGS=-std=c++11
OBJ=main.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o