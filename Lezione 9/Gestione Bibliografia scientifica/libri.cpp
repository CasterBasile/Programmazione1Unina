#include "libri.h"

Libri::Libri(const string& nomi, const string& autori, int anno, const string& CasaEditrice, const string& codice) : Pubblicazioni(nomi, autori, anno){
    setCasaEditrice(CasaEditrice);
    setISBN(codice);
}



void Libri::setCasaEditrice(const string& CasaEditrice){
    cEdit=CasaEditrice;
}

void Libri::setISBN(const string& codice){
    isbn=codice;
}

string Libri::getCasaEditrice() const{
    return cEdit;
}

string Libri::getISBN() const{
    return isbn;
}

string Libri::stampa() const{
    ostringstream s;
    s<<"Tipologia:"<<getTipo()<<Pubblicazioni::stampa()<<"\nCasa editrice: "<<getCasaEditrice()<<"\nISBN: "<<getISBN()<<endl;
    return s.str();
}