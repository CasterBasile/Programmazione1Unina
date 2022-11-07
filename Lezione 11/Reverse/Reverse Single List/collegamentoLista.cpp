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

template <typename NodoTipo>
void collegamentoLista<NodoTipo>::print(){
    Nodo<NodoTipo>* temp = head;
    while(temp != nullptr){
        cout<<temp->elem<<" ";
        temp = temp->next;
    }
}

template <typename NodoTipo>
void collegamentoLista<NodoTipo>::Reverse(Nodo<NodoTipo>* p){
    if(p->next==nullptr){
        head=p;
        return;
    }
    Reverse(p->next);
    Nodo<NodoTipo>* q = p->next;
    q->next=p;
    p->next=nullptr;
}

template <typename NodoTipo>
void collegamentoLista<NodoTipo>::ReverseIterative(){
    Nodo<NodoTipo>* current = head;
    Nodo<NodoTipo>* prev = nullptr;
    Nodo<NodoTipo>* next=nullptr;

    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}


