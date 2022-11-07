#include "Nodo.h"

class StringListaCollegata{
    public:
        StringListaCollegata();  //Costruttore
        ~StringListaCollegata(); //Distruttore 
        bool empty() const;      //Verifica se la lista è vuota o no
        const string& front() const;     //Restituisce l'elemento
        void addFront(const string&); //Aggiunge elemento alla coda
        void removeFront(); //Rimuove elemento 
    private:
        StringNodo* head;
};

