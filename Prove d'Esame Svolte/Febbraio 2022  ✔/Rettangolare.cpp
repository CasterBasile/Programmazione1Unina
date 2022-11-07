#include "Rettangolare.h"

float Rettangolare::getArea() const{
    return getBase()*getAltezza();
}

string Rettangolare::toString() const{
    string tav=Tavolo::toString();
    ostringstream s;
    s<<"Forma: "<<getForma()<<"\n"<<tav<<"\nArea: "<<getArea()<<" cmq\n";
    return s.str();
}
