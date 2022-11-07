#ifndef COLLEGAMENTOLISTA_H
#define COLLEGAMENTOLISTA_H

#include "Nodo.h"
template<typename NodoTipo>
class collegamentoLista{
    public:
        collegamentoLista();
        ~collegamentoLista();
        bool empty() const;
        const NodoTipo& front() const;
        void addFront(const NodoTipo& e);
        void removeFront();
        void Reverse(Nodo<NodoTipo>* p);
        void ReverseIterative();
        void print();
        const int getSize() const;
        NodoTipo operator[](int i);
        Nodo<NodoTipo>* head;
    private:
        int size{0};
};

#include "collegamentoLista.cpp" 

#endif
