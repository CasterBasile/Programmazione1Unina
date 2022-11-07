#ifndef PROGETTO_H
#define PROGETTO_H

#include "Data.h"
#include "List.h"
#include "Nodo.h"

class Progetto{
    public:
        //Costruttore
        Progetto(string n="NomeProg", string comm="Azienda", float imp=0.0, Data in=(1,1,2020), Data con=(1,1,2020), List* t=nullptr) : nome{n}, committente{comm}, importo{imp}, inizio{in}, consegna{con}, task{t} {}
        //Funzioni GET
        string getNome() const;
        string getCommittente() const;
        float getImporto() const;
        Data getInizio() const;
        Data getConsegna() const;
        List* getListaTask() const;
        //Funzion STAMPA
        string toString() const;
    private:
        string nome, committente;
        float importo;
        Data inizio, consegna;
        List* task;
};



#endif