#include "dipendenti.h"

//Definizione del costruttore
Dipendenti::Dipendenti(const string& nome, const string& cognome, const string& codiceFiscale){
    setNome(nome);
    setCognome(cognome);
    setCodiceFiscale(codiceFiscale);
}

void Dipendenti::setNome(const string& nome){
    n=nome;
}

void Dipendenti::setCognome(const string& cognome){
    c=cognome;
}

void Dipendenti::setCodiceFiscale(const string& codiceFiscale){
    cf=codiceFiscale;
}

string Dipendenti::getNome() const{
    return n;
}

string Dipendenti::getCognome() const{
    return c;
}

string Dipendenti::getCodiceFiscale() const{
    return cf;
}

string Dipendenti::stampa() const{
    return getNome() + " " + getCognome() + " CF:" + getCodiceFiscale();
}