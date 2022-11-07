#include "dipendenti.h"
#include "commissioni.h"
#include "SalarioDipendente.h"
#include "basePlus.h"

int main(){
    SalarioDipendente var1{"Castrese", "Basile", "BSLCTR00H21F799X", 1200};
    Commissioni var2{"Luca", "Rossi", "LUCRSS01H22F780Y", 800, 0.6};
    basePlus var3{"Giovanni", "Bianchi", "GVNBAH97H16G790R", 5000, 0.4, 200};

    vector<Dipendenti *> dip{&SalarioDipendente, &Commissioni, &basePlus}; //Vettore di puntatori a dipendenti

    for(const dipendenti* dipendentiPtr : dip){
        virtualViaPuntatore(dipendentiPtr);
    }
    
}

void virtualViaPuntatore(const Dipendenti& classeBasePtr){
    cout<<classeBasePtr->stampa()<<"/n Guadagni: "<<classeBasePtr->guadagni()<<endl<<endl;
}

void virtualViaRiferimento(const Dipendenti& classeBaseRef){
    cout<<classeBaseRef.stampa()<<" Guadagni: "<<classeBaseRef.guadagni()<<endl<<endl;
}