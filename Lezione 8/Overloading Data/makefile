CC=g++
CFLAGS=-std=c++11
DEPS = data.h
OBJ = data.o main.o

%.o: %.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)
esegui:	$(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)
make clean:
	rm -f *o
	rm -f *exe