#ifndef CONVEGNI_H
#define CONVEGNI_H
#include "pubblicazioni.h"

class Convegni : public Pubblicazioni{
    public:
        Convegni(const string&, const string&, int, const string&, int);
        virtual ~Convegni()=default;
        //Funzioni Set
        void setConvegno(const string&);
        void setSede(const string&);
        void setNumeroPagina(int);
        //Funzioni Get
        string getConvegno() const;
        string getSede() const;
        int getNumeroPagina() const;
        string getTipo() const{return tipo;}
        //Funzione stampa() su cui faremo l'override
        string stampa() const;
    protected:
        string nCon,sedCon, tipo="Convegno";
        int pg;
};




#endif