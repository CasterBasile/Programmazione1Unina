CC=g++
CFLAGS=-std=c++11
DEPS=pubblicazioni.h 
OBJ=pubblicazioni.o libri.o riviste.o convegni.o main.o	#Non dobbiamo inserire anche quickSort.o perché di esso abbiamo solo il file di intestazione

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.exe $(OBJ)
	