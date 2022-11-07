#include "Circolare.h"

float Circolare::getArea() const{
    return (3.14)*(getRaggio()*getRaggio());
}

string Circolare::toString() const{
    string tav=Tavolo::toString();
    ostringstream s;
    s<<"Forma: "<<getForma()<<"\n"<<tav<<"\nArea: "<<getArea()<<" cmq\n";
    return s.str();
}