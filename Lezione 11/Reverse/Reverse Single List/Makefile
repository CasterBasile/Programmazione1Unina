CC = g++
CFLAGS = -std=c++11 -pedantic -Wall
DEPS = Nodo.h collegamentoLista.h collegamentoLista.cpp
OBJS = main.o
%.o: %.cpp ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}
esegui: ${OBJS}
	${CC} -o $@ $^ ${CFLAGS}
clean: $(OBJ)
	rm -f *.exe *.o
