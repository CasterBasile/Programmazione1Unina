#include "Pacco.h"
#include <iostream>
using std::cout;

Pacco::Pacco(Pacco& p){
    destinatario=p.destinatario;
    mittente=p.mittente;
    consegna=p.consegna;
    peso=p.peso;
}

int Pacco::costo() const{
    int costo = getPeso()*1;

    return costo;
}

string Pacco::info() const{
    ostringstream s;
    s<<"Destinatario: "<<destinatario<<"\nMittente: "<<mittente<<"\nData: "<<consegna.display()<<"Peso: "<<peso<<" Kg"<<"\nCosto: "<<costo()<<" $\n\n";
    return s.str();
}


