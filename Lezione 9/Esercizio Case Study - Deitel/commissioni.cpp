#include "commissioni.h"

Commissioni::Commissioni(const string& nome, const string& cognome, const string&  codice, double vendite, double tasso){
    Dipendenti(nome, cognome, codice, vendite);
    setImportoLordoVendita(vendite);
    setCommissione(tasso);
}

void Commissioni::setImportoLordoVendita(double vendita){
    if(vendita<0.0)
        throw invalid_argument("L'importo lordo di vendita deve essere maggiore di 0.");
    else
        impVend=vendita;
}

double Commissioni::getImportoLordoVendita() const{
    return impVend;
}

void Commissioni::setCommissione(double tasso){
    if(tasso<=0 || tasso>=1)
        throw invalid_argument("Il tasso deve essere maggiore di 0 e minore di 1");
    else
        com=impVend;
}

double Commissioni::getCommissione() const{
    return com;
}

double Commissioni::guadagni() const{
    return getCommissione()*getImportoLordoVendita();
}

double Commissioni::stampa() const{
    ostringstream s;
    s<<"Commissioni: "<<Dipendenti::stampa()<<"\n"<<" Importo Lordo vendita: "<<getImportoLordoVendita()<<" Tasso Commissione: "<<getCommissione()<<"\n";
    return s.str();
}