CC=g++
CFLAGS=-std=c++11
DEPS=EBA.h Biscotti.h CNode.h CLinkedList.h
OBJ=EBA.o Biscotti.o main.o 

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
clean: $(OBJ)
	rm -f *.exe *.o
