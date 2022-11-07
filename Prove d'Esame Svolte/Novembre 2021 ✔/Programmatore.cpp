#include "Programmatore.h"

/*
string getNome() const;
float getCosto() const;
*/

string Programmatore::getNome() const{
    return nome;
}

float Programmatore::getCosto() const{
    return costo;
}

Programmatore& Programmatore::operator=(const Programmatore& pr){
    if(this==&pr)
        return *this;
    else{
        nome=pr.nome;
        costo=pr.costo;
        return *this;
    }
}

string Programmatore::toString() const{
    ostringstream s;
    s<<"-Nome: "<<getNome()<<"\n-Costo: "<<getCosto()<<" $\n\n";
    return s.str();
}

bool Programmatore::operator<(Programmatore p){
    return getCosto()<p.getCosto();
}

