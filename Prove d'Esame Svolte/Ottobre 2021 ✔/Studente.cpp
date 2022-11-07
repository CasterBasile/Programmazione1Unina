#include "Studente.h"

Studente::Studente(string n, string c, string m){
    nome=n;
    cognome=c;
    matricola=m;
}

 
int Studente::numeroCrediti() const{
    int totCrediti=0;
    for(auto cursor = esami.begin(); cursor!=esami.end(); ++cursor){
        Insegnamento i=*cursor;
        totCrediti+= i.getCrediti();
        //Praticamente sto scorrendo la lista degli esami e sommo i crediti per ogni insegnamento.
    }
    return totCrediti;
}

void Studente::addEsame(Insegnamento i){
    esami.push_back(i);
}

string Studente::toString(){
    ostringstream out;
    out<<nome<<" "<<cognome<<" "<<"n. esami "<<esami.size()<<" Crediti sup.: "<<numeroCrediti()<<endl;
    return out.str();
}

bool Studente::operator<(const Studente& rhs) const{
    return numeroCrediti() < rhs.numeroCrediti();
}