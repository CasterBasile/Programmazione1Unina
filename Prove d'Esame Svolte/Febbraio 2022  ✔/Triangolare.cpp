#include "Triangolare.h"

float Triangolare::getArea() const{
    return Rettangolare::getArea()/2;
}

string Triangolare::toString() const{
    string tav=Tavolo::toString();
    ostringstream s;
    s<<"Forma: "<<getForma()<<"\n"<<tav<<"\nArea: "<<setprecision(2)<<fixed<<getArea()<<" cmq\n\n";
    return s.str();
}