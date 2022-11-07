#ifndef PACCOEXTRAEUROPEO_H
#define PACCOEXTRAEUROPEO_H

#include "Pacco.h"

class PaccoExtraEuropeo : public Pacco{
    public:
        //Costruttori
        PaccoExtraEuropeo(string d, string m, Date con, float p, string naz, string cont) : Pacco(d, m, con, p), nazione{naz}, continente{cont} {}
        PaccoExtraEuropeo(PaccoExtraEuropeo& p);
        //Funzione che calcola il costo
        virtual int costo() const override;

        //Funzioni GET
        string getNazione() const{return nazione;}
        string getContinente() const{return continente;}

        //Funzione Stampa
        virtual string info() const override;
    
    private:
        string nazione;
        string continente;

};


#endif