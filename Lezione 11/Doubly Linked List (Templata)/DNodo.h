#ifndef DNODO_H
#define DNODO_H

#include <iostream>
#include <string>
#include <sstream>
#include "Dnodo.h"
using std::string;
using std::runtime_error;
using std::ostringstream;
using std::cout;
using std::cin;
using std::endl;

template <typename T> class DLinkedList;

template <typename T>
class DNodo{
    private:
        T elem;                             //Elemento
        DNodo* prev;                        //Nodo precedente
        DNodo* next;                        //Nodo successivo
        friend class DLinkedList<T>;        //Diamo accesso ai privati alla funzione DLinkedList
};

#endif