CC=g++
CFLAGS=-std=c++11
DEPS = coordinate.h rettangolo.h
OBJ = coordinate.o rettangolo.o main.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

esegui: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

make clean:
	rm -f *o
	rm -f *exe

