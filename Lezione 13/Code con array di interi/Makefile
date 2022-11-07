CC = g++
CFLAGS = -std=c++11 -pedantic -Wall
DEPS = Code.h
OBJS = Code.o main.o
%.o: %.cpp ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}
esegui: ${OBJS}
	${CC} -o $@ $^ ${CFLAGS}
clean: $(OBJ)
	rm -f *.exe *.o
