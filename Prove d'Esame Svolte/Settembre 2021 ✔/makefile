CC=g++
CFLAGS=-std=c++11
DEPS=pagina.h lista_finale12.h 
OBJ=pagina.o lista_finale12.o main.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o
