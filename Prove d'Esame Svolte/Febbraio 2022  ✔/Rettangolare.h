#ifndef RETTANGOLARE_H
#define RETTANGOLARE_H
#include "Tavolo.h"

class Rettangolare : public Tavolo{
    public:
        Rettangolare(int clr, string lgn, string frn, float prz, float b, float h) : Tavolo(clr, lgn, frn, prz), base{b}, altezza{h} {}
        Rettangolare();
        Rettangolare(Rettangolare& r){
            base=r.base;
            altezza=r.altezza;
        }
        //Funzioni GET
        float getBase() const{return base;}
        float getAltezza() const{return altezza;}
        string getForma() const{return forma;}
        //Calcolo Area
        virtual float getArea() const override;

        //Funzione stampa
        virtual string toString() const override;

        //Calcolo prezzo
        virtual float getPrezzoFinale(){return getArea()*getPrezzo();}

    protected:
        float base, altezza, area;
        string forma{"Rettangolare"};
};



#endif