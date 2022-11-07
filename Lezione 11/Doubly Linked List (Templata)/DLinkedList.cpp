#include "DLinkedList.h"

//Costruttore
template <typename T>
DLinkedList<T>::DLinkedList(){
    //Creiamo le due sentinelle, inizialmente puntano alla stessa cosa
    header = new DNodo<T>;
    trailer = new DNodo<T>;
    header -> next = trailer;   //L'header ha come nodo successivo il solo trailer
    header -> prev = nullptr;   //L'header non ha un nodo precedente essendo il primo elemento
    trailer -> prev = header;   //Il trailer ha come nodo precedente l'header
    trailer -> next = nullptr; //Il trailer non ha un nodo successivo essendo l'ultimo elemento
}

//Distruttore
template <typename T>
DLinkedList<T>::~DLinkedList(){
    while(!empty()) removeFront();  //Rimuove tutti gli elementi finché la lista non è vuota
    delete header;                  //Infine rimuove l'header...
    delete trailer;                 //...e il trailer
}

//Funzione che verifica se la lista è vuota o no
template <typename T>
bool DLinkedList<T>::empty() const{
    return (header->next==trailer); //Se l'elemento successivo all'header è il trailer allora significa che la lista è vuota e quindi restituisce true
}

//Funzione che restituisce l'ultimo elemento
template <typename T>
const T& DLinkedList<T>::front() const{
    return header->next->elem;  
}

//Funzione che restituisce il primo elemento
template <typename T>
const T& DLinkedList<T>::back() const{
    return trailer->prev->elem;
}

template <typename T>
void DLinkedList<T>::add(DNodo<T>* v, const T& e){
    DNodo<T>* u = new DNodo<T>;
    u->elem=e;
    u->next = v;
    u->prev = v->prev;
    v->prev->next=u;
    v->prev;
}

template <typename T>
void DLinkedList<T>::addFront(const T& e){
    add(header->next, e);
}

template <typename T>
void DLinkedList<T>::addBack(const T& e){
    add(trailer, e);
}

template <typename T>
void DLinkedList<T>::remove(DNodo<T>* v){
    if(empty()){
        throw runtime_error("La lista e' vuota.");
    }
    DNodo<T>* u = v->prev;
    DNodo<T>* w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}

template <typename T>
void DLinkedList<T>::removeFront(){
    remove(header->next);
}

template <typename T>
void DLinkedList<T>::removeBack(){
    remove(trailer->prev);
}

template <typename T>
string DLinkedList<T>::toString(){
    ostringstream out;
    DNodo<T>* u = header->next;
    out<<"Header <--> ";
    while(u!=trailer){
        out<<u->elem<<" <--> ";
        u = u->next;
    }
    out<<"Trailer";
    return out.str();
}
