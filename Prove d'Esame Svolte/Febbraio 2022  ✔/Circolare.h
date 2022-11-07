#ifndef CIRCOLARE_H
#define CIRCOLARE_H
#include "Tavolo.h"

class Circolare : public Tavolo{
    public:
        Circolare(int clr, string lgn, string frn, float prz, float r) : Tavolo(clr, lgn, frn, prz), raggio{r} {}
        //Funzione GET
        float getRaggio() const{return raggio;}
        string getForma() const{return forma;}
        //Funzione calcolo area
        virtual float getArea() const override;
        //Fuznione stampa
        virtual string toString() const override;
        //Calcolo prezzo
        virtual float getPrezzoFinale(){return getArea()*getPrezzo();}

    private:
        float raggio;
        string forma{"Circolare"};
};



#endif