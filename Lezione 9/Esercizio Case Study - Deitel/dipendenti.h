#ifndef DIPENDENTI_H
#define DIPENDENTI_H

#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostringstream;
using std::invalid_argument;
using std::vector;


class Dipendenti{
    public:
        Dipendenti(const string& nome, const string& cognome, const string& codiceFiscale);
        virtual ~Dipendenti() = default; //Default non l'avevamo ancora utilizzando, con questo comando diciamo 
                                        //al compilatore che vogliamo utilizzare un distruttore di default
        void setNome(const string&);
        string getNome() const;
        void setCognome(const string&);
        string getCognome() const;
        void setCodiceFiscale(const string&);
        string getCodiceFiscale() const;
    
        virtual double guadagni() const=0; //Pure virtual function, perché a questo livello non riesco ad essere specifico, cioè non so che tipo di dipendente è, quindi non so come calcolare lo stipendio
        virtual string stampa() const;     //Questa la dichiaro come virtual perché questa funzione utilizza altre funzioni, quindi ho bisogno del late binding

    private:
        string n, c, cf;
};
#endif