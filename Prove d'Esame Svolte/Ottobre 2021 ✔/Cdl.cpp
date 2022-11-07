#include "Cdl.h"
#include <algorithm>
using std::sort;

Cdl::Cdl(string n){
    nomeCdl=n;
}

void Cdl::addStudente(Studente s){
    studenti.push_back(s);
}

void Cdl::addInsegnamento(Insegnamento i){
    corsi.push_back(i);
}

//Aggiunge l'esame c allo studente s
void Cdl::addEsameStudente(int c, int s){
    if(c>=0 && c<corsi.size() && s>0 && s<studenti.size()){
        studenti[s].addEsame(corsi[c]);
    }
}

void Cdl::calcIstogramma(){
    //Azzero il contatore
    for(int i=0; i<180; ++i) istogrammaCrediti[i]=0;
    for(int i=0; i<studenti.size(); ++i){
        int n=studenti[i].numeroCrediti();
        istogrammaCrediti[n]++;
    }
    for(int i=0; i<180; ++i){
        if(istogrammaCrediti[i]!=0){
            cout<<"Numero studenti che ha "<<i<<" Crediti: "<<istogrammaCrediti[i]<<endl;
        }
    }
    
}

void Cdl::ordinaEStampa(){
    sort(studenti.begin(), studenti.end());
    for(int i=0; i<studenti.size(); ++i){
        cout<<studenti[i].toString()<<endl;
    }
}