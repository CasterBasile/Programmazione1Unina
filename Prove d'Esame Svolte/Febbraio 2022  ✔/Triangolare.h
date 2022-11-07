#ifndef TRIANGOLARE_H
#define TRIANGOLARE_H

#include <iomanip>
#include "Rettangolare.h"

using std::setprecision;
using std::fixed;

class Triangolare : public Rettangolare{
    public:
        Triangolare(int clr, string lgn, string frn, float prz, float b, float h) : Rettangolare(clr, lgn, frn, prz, b, h) {}
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


    private:
        float base, altezza;
        string forma{"Triangolare"};

};



#endif