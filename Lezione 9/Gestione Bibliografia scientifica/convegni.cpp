#include "convegni.h"

Convegni::Convegni(const string& nome, const string& autori, int anno, const string& sedeConvegno , int pagina) : Pubblicazioni(nome, autori, anno){
    setConvegno(sedeConvegno);
    setNumeroPagina(pagina);
}

void Convegni::setConvegno(const string& sedeConvegno){
    nCon=sedeConvegno;
}

void Convegni::setNumeroPagina(int pagina){
    if(pagina>0)
        pg=pagina;
    else
        throw invalid_argument("La pagina deve essere maggiore di 0.");
}

string Convegni::getConvegno() const{
    return nCon;
}

int Convegni::getNumeroPagina() const{
    return pg;
}

string Convegni::stampa() const{
    ostringstream s;
    s<<"\nTipologia:"<<getTipo()<<Pubblicazioni::stampa()<<"\nSede Convegno: "<<getConvegno()<<"\nNumero di pagina: "<<getNumeroPagina()<<"\n";
    return s.str();
}