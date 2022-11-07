#ifndef STUDENTE_H
#define STUDENTE_H
#include <string>
#include <list>
#include <sstream>
#include "Insegnamento.h"
using std::endl;
using std::ostringstream;
using std::list;
using std::string;
class Studente{
    public:
        Studente(string, string, string);
        int numeroCrediti() const;
        string toString();
        void addEsame(Insegnamento);
        bool operator<(const Studente&) const;  //Costante poiché questo operatore non cambia quella che è la variabile costante



    private:
        string nome, cognome, matricola;
        list<Insegnamento> esami;
};




#endif