CC = g++
CFLAGS = -std=c++11 -pedantic -Wall
DEPS = Nodo.h
OBJS = StringListaCollegata.o main.o
%.o: %.cpp ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}
esegui: ${OBJS}
	${CC} -o $@ $^ ${CFLAGS}
