#include "CLinkedList.h"

template <typename T>
CircleList<T>::CircleList(){
    cursor=nullptr;
}


template <typename T>
bool CircleList<T>::empty() const{
    return cursor==nullptr;         //Ritorna vero se il cursore non punta a nulla
}

template <typename T>
const T& CircleList<T>::back() const{
    return cursor->elem;
}

template <typename T>
const T& CircleList<T>::front() const{
    return cursor->nexr->elem;
}

template <typename T>
void CircleList<T>::advance(){
    cursor=cursor->next;
}

template <typename T>
void CircleList<T>::add(const T& e){
    //Creiamo un nuovo nodo ed inizializziamo
    CNode<T>* v = new CNode<T>;
    v->elem=e;
    //Se la lista è piena dobbiamo creare un nuovo nodo che punta a se stesso
    if(cursor==nullptr){
        v->next=v;
        cursor=v;
    }else{  //Altrimenti dobbiamo collegare il nuovo nodo subito dopo il cursore
        v->next=cursor->next;
        cursor->next=v;
    }
}

template <typename T>
void CircleList<T>::remove(){
    CNode<T> *old = cursor->next;
    
    //Se si tratta dell'ultimo nodo della lista allora dobbiamo impostare il cursore a nullptr
    if(old==cursor)
        cursor=nullptr;
    else    //Se non è l'ultimo nodo della lista si deve effettuare un "salto"
        cursor->next = old->next;
    delete old;
}

template <typename T>
string CircleList<T>::toString(){
    ostringstream s;
    CNode<T>* u = cursor;
    s<<"Cursore -->";
    s<<u->elem<<" --> ";
    u = u->next;
    while(u!=cursor){
        s<<u->elem<<" --> ";
        u = u->next;
    }
    s<<"Cursore";
    return s.str();
}
