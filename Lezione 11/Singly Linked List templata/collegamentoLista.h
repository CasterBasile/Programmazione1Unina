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
        const int getSize() const;
        NodoTipo operator[](int i);
    private:
        Nodo<NodoTipo>* head;
        int size{0};
};

#include "collegamentoLista.cpp" 

#endif
