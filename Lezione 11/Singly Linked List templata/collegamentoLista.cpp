#include "collegamentoLista.h"

template <typename NodoTipo>
collegamentoLista<NodoTipo>::collegamentoLista(){
    head=nullptr;
}

template <typename NodoTipo>
bool collegamentoLista<NodoTipo>::empty() const{
    return head==nullptr;
}

template <typename NodoTipo>
const NodoTipo& collegamentoLista<NodoTipo>::front() const{
    return head->elem;
}

template <typename NodoTipo>
collegamentoLista<NodoTipo>::~collegamentoLista(){
    while(!empty()) removeFront();
}

template <typename NodoTipo>
void collegamentoLista<NodoTipo>::addFront(const NodoTipo& e){
    Nodo<NodoTipo>* v = new Nodo<NodoTipo>;
    v->elem = e;
    v->next = head;
    head=v;
    size++;
}

template <typename NodoTipo>
void collegamentoLista<NodoTipo>::removeFront(){
    if(head==nullptr){
        throw invalid_argument("Lista vuota.");
    }
    Nodo<NodoTipo>* old = head;
    head = old->next;
    delete old;
    size--;
}

template <typename NodoTipo>
const int collegamentoLista<NodoTipo>::getSize() const{
    return size;
}


