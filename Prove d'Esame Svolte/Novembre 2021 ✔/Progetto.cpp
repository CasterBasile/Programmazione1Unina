#include "Progetto.h"

string Progetto::getNome() const{
    return nome;
}

string Progetto::getCommittente() const{
    return committente;
}

float Progetto::getImporto() const{
    return importo;
}

Data Progetto::getInizio() const{
    return inizio;
}

Data Progetto::getConsegna() const{
    return consegna;
}

List* Progetto::getListaTask() const{
    return task;
}

string Progetto::toString() const{
    ostringstream s;
    s<<"-Nome: "<<getNome()<<"\n-Committente: "<<getCommittente()<<"\n-Importo: "<<getImporto()<<" $ \n-Inizio: "<<getInizio().stampa()<<"\n-Consegna: "<<getConsegna().stampa()<<"\n\n";
    return s.str();
}
