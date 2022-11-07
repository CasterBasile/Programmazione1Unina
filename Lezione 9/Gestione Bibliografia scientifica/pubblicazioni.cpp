#include "pubblicazioni.h"

Pubblicazioni::Pubblicazioni(const string& nome, const string& autori, int anno){
    setNome(nome);
    setAutori(autori);
    setAnno(anno);
}


void Pubblicazioni::setNome(const string& nome){
    n=nome;
}

void Pubblicazioni::setAutori(const string& autori){
    aut=autori;
}

void Pubblicazioni::setAnno(int anno){
    if(anno>=1650)
        a=anno;
    else
        throw invalid_argument("L'anno deve essere maggiore o uguale a 1650.");
}

string Pubblicazioni::getNome() const{
    return n;
}

string Pubblicazioni::getAutori() const{
    return aut;
}

int Pubblicazioni::getAnno() const{
    return a;
}

string Pubblicazioni::stampa() const{
    ostringstream s;
    s<<"\nNome: "<<getNome()<<"\nAutori: "<<getAutori()<<"\nAnno di pubblicazione: "<<getAnno();
    return s.str();
}

//Operatore <
bool Pubblicazioni::operator<(const Pubblicazioni& str) const{
    return (this->aut < str.aut);
}

//Operatore >
bool Pubblicazioni::operator>(const Pubblicazioni& str) const{
    return (this->aut > str.aut);
}