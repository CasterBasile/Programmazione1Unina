#include "distruttore.h"

CreaEDistruggi::CreaEDistruggi(int a, string n){
    anni=a;
    nome=n;
}

CreaEDistruggi::~CreaEDistruggi(){
    cout<<"Effettuo l'eliminazione..."<<endl;
}

void CreaEDistruggi::Stampa(){
    cout<<"Eta': "<<anni<<" Nome: "<<nome<<endl;
}