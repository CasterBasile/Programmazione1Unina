#include "riviste.h"

Riviste::Riviste(const string& nome, const string& autori, int anno, int numeroRivista, int paginaIniziale, int paginaFinale) : Pubblicazioni(nome, autori, anno){
        setNumRivista(numeroRivista);
        setPagine(paginaIniziale, paginaFinale);
}

void Riviste::setNumRivista(int numeroRivista){
    if(numeroRivista>0)
        numR=numeroRivista;
    else
        throw invalid_argument("Il numero della rivista deve essere maggiore di 0.");
}

void Riviste::setPagine(int paginaIniziale, int paginaFinale){
    if(paginaIniziale<=paginaFinale){
        pIn=paginaIniziale;
        pFi=paginaFinale;
    }else{
        throw invalid_argument("La pagine iniziale deve essere minore o uguale di quella finale.");
    }
}

int Riviste::getNumRivista() const{
    return numR;
}

string Riviste::getPagine() const{
    ostringstream s;
    s<<"Pagina iniziale: "<<pIn<<"\nPagina finale: "<<pFi<<endl;
    return s.str();
}

string Riviste::stampa() const{
    ostringstream s;
    s<<"\n\nTipologia:"<<getTipo()<<Pubblicazioni::stampa()<<"\nNumero della rivista: "<<getNumRivista()<<"\n"<<getPagine()<<endl;
    return s.str();
}