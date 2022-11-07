#include "List.h"

List::List(){
    head=nullptr;
}

List::~List(){
    while(!empty()) removeFront();
}

const Task List::front() const{
    return head->e;
}

int List::size(){
    int dim{0};
    Nodo* n=head;
    while(n!=nullptr){
        dim++;
        n=n->next;
    }
    return dim;
}

void List::removeFront(){
    if(empty())
        throw runtime_error{"La lista e' vuota"};
    Nodo* old = head;
    head = old->next;
    delete old;
}

bool List::empty() const{
    return head==nullptr;
}

void List::addTask(Task& t, List& lista){   //Funzione per aggiungere la task alla lista di task
    Nodo* n = new Nodo;
    n->e=t;
    n->next=head;
    head=n;

    for(int j=1; j<lista.size(); j++){
        Task k=lista[j];
        int i=j;
        while(i>0 && lista[i-1].getScadenza()>k.getScadenza()){
            lista[i]=lista[i-1];
            i--;
        }
        lista[i]=k;
    }
}

Task List::operator[](int i){
    Nodo* n=head;
    int j=0;
    if(i<0 && i>size()-1)
        throw invalid_argument("Posizione non raggiungibile.");
    else{
        while(j<i){
            j++;
            n=n->next;
        }
        return n->e;
    }
}


int List::workloadDeveloper(Programmatore& p, List& l){ //Riceve in ingresso il riferimento al programmatore e la lista di task
    int somma{0}; //somma delle ore
    int i=l.size()-1;   //Utilizzeremo il ciclo while, per cui abbiamo bisogno di una variabile iterator che inizialmente ha la dimensione della lista di task-1
    while(i>=0){    //Finché i>=0...
        Programmatore* pr=((l[i]).getProgrammatore());  //Prendi il riferimento del programmatore i-esimo
        if(pr->getNome()==p.getNome()){ //estrapola il nome e poi verifica che sia uguale a quello del programmatore in ingresso della funzione
            somma+=((l[i]).getOre()); //Se si, fai la somma delle ore
            i--;    //Diminuisci iterator
        }else{
            i--;    //Altrimenti diminuisci solo l'iterator
        }
    }
    return somma;   //Infine restituisci la somma!!!!!
}
