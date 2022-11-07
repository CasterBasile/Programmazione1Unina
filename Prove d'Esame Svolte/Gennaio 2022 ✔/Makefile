CC=g++
CFLAGS=-std=c++11
DEPS=Pacco.h PaccoExtraEuropeo.h Ordini.h Date.h
OBJ=main.o Pacco.o Ordini.o PaccoExtraEuropeo.o

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o
