#ifndef NODO_H
#define NODO_H

#include "Task.h"

class Nodo{
    private:
        Task e;
        Nodo* next;

        friend class List;
};


#endif