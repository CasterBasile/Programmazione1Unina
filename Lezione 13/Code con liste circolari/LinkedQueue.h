#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H
#include <iostream>
#include <stdexcept>
#include "CLinkedList.h"
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::runtime_error;

template <typename T> class CircleList;
template <typename T>
class LinkedQueue{
    public:
        LinkedQueue();              //Costruttore
        int size() const;           //Numero di elementi nella coda
        bool empty() const;         //Verifica se la coda è vuota
        const T& front();           //Restituisce l'elemento in posizione front
        void enqueue(const T& e);   //Aggiunge un elemento in posizione front
        void dequeue();             //Elimina un elemento in posizione front
    private:
        CircleList<T> C;            //Lista circolare di elementi
        int n;                      //Numero di elementi
};

#include "LinkedQueue.cpp"

#endif