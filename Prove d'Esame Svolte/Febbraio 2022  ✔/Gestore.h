#ifndef GESTORE_H
#define GESTORE_H
#include <iostream>
#include <list>
#include "Rettangolare.h"
#include "Triangolare.h"
#include "Circolare.h"

using std::list;
using std::endl;

class Gestore{
    public:
        Gestore(string n): nome{n} {}
        //Funzione inserimento (ordinato per area)
        void inserisciAppoggio(Tavolo& t);
        //Funzione stampa
        virtual string toString() const;
        //Funzione che calcola la somma dei prezzi di tutti i piani di appoggio della lista
        float summarizeWharehouse();



    private:
        string nome;
        list<Tavolo*> tavoli;


};


#endif