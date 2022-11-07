#ifndef DLINKEDLIST_H
#define DLINKEDLIST_H

#include "DNodo.h"

template <typename T>

class DLinkedList{
    public:
        DLinkedList();                  //Costruttore
        ~DLinkedList();                 //Distruttore
        bool empty() const;             //Funzione che verifica se la lista è vuota
        const T& front() const;         //Restituisce l'ultimo elemento della lista
        const T& back() const;          //Restituisce il primo elemento della lista
        void addFront(const T& e);      //Aggiunge un elemento come ultimo della lista
        void addBack(const T& e);       //Aggiunge un elemento come prima della lista
        void removeFront();             //Rimuove l'ultimo elemento della lista
        void removeBack();              //Rimuove il primo elemento della lista
        string toString();              
    
    //Qui definiamo le due sentinelle
    private:
        DNodo<T>* header;
        DNodo<T>* trailer;
    
    protected:
        void add(DNodo<T>* v, const T& e);      //Inserisce un nuovo nodo prima del nodo v
        void remove(DNodo<T>* v);               //Rimuove il nodo v
};

#include "DLinkedList.cpp"


#endif