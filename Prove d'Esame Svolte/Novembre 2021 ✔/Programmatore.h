#ifndef PROGRAMMATORE_H
#define PROGRAMMATORE_H

#include <string>
#include <sstream>
using std::string;
using std::ostringstream;

class Programmatore{
    public:
        //Costruttore
        Programmatore(string n=" ", float c=0.0) : nome{n}, costo{c} {}
        //Distruttore
        virtual ~Programmatore()= default;
        //Funzioni GET
        string getNome() const;
        float getCosto() const;
        //Funzione utile per la stampa
        string toString() const;
        Programmatore& operator=(const Programmatore&); //Questo ci servirà per la funzione workloadDeveloper
        //Operatore < per l'ordinamento in base al costo
        bool operator<(Programmatore p);
        
    private:
        string nome;
        float costo;
};



#endif