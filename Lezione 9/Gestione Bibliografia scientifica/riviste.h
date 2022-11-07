#ifndef RIVISTE_H
#define RIVISTE_H

#include "pubblicazioni.h"

class Riviste : public Pubblicazioni{
    public:
        Riviste(const string&, const string&, int, int, int, int);
        virtual ~Riviste()=default;
        //Funzioni set
        void setNumRivista(int);
        void setPagine(int, int);   //Funzione per impostare la pagine di inizio e la pagina di fine articolo sulla rivista
        //Funzione get
        int getNumRivista() const;
        string getPagine() const;
        string getTipo() const{return tipo;};
        //Funzione stampa() su cui effettueremo l'override
        virtual string stampa() const override;
    protected:
        string tipo="Rivista";
        int numR, pIn, pFi;
};





#endif