#include "StringListaCollegata.h"

StringListaCollegata::StringListaCollegata(){
    head=nullptr;
}

StringListaCollegata::~StringListaCollegata(){
    while(!empty())
        removeFront();
}

//Verifica che la lista sia vuota
bool StringListaCollegata::empty() const{
    return head==nullptr;   //Cioè ritorna "vero" se la "testa" è un puntatore a null
}

//Ritorna l'elemento
const string& StringListaCollegata::front() const{
    return head->elem;
}

void StringListaCollegata::addFront(const string& e){   //Dove e è l'elemento da aggiungere
    //Alloco un nuovo nodo:
    StringNodo* v= new StringNodo;
    //Inserisco il nuovo elemento
    v->elem=e;
    //Ho il nuovo nodo che punta alla "vecchia" testa
    v->next=head;
    //Aggiorno head in modo che adesso corrisponda al nuovo nodo
    head=v;
} 

void StringListaCollegata::removeFront(){
    //Innanzitutto verifico che ci sia qualcosa da cancellare, cioé verifico che non sia vuota
    if(empty()){
        throw runtime_error("La lista e' vuota.");
    }
    //Quello che facciamo è rimuovere il collegamento
    StringNodo* old = head;
    head=head->next;
    delete old;
}