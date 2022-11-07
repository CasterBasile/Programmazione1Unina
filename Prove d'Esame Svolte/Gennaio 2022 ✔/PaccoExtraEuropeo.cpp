#include "PaccoExtraEuropeo.h"

PaccoExtraEuropeo::PaccoExtraEuropeo(PaccoExtraEuropeo& p) : Pacco(p){
    nazione=p.nazione;
    continente=p.continente;
}

int PaccoExtraEuropeo::costo() const{
    int costo;
    if(getNazione()=="Stati Uniti")
        return Pacco::costo()+10;
    else
        return Pacco::costo()+15;
}

string PaccoExtraEuropeo::info() const{
    ostringstream s;
    s<<"Destinatario: "<<destinatario<<"\nMittente: "<<mittente<<"\nData: "<<consegna.display()<<"Peso: "<<peso<<"\nNazione: "<<getNazione()<<"\nContinente: "<<getContinente()<<"\nCosto: "<<costo()<<" $\n";
    return s.str();
    
}