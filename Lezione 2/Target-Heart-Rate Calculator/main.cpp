#include "HeartRate.h"

int main(){

    string nome, cognome;
    int g, m, a; //Giorno, mese, anno
    
    cout<<"Inserire nome: "<<nome<<endl;
    cin>>nome;
    cout<<"Inserire cognome: "<<cognome<<endl;
    cin>>cognome;
    cout<<"Inserire giorno di nascita: "<<endl;
    cin>>g;
    cout<<"Inserire mese di nascita: "<<endl;
    cin>>m;
    cout<<"Inserire anno di nascita: "<<endl;
    cin>>a;

    HeartRate Utente{nome, cognome, g, m, a};
    cout<<"Nome: "<<Utente.getNome()<<endl;
    cout<<"Cognome: "<<Utente.getCognome()<<endl;
    cout<<"Data di nascita: "<<Utente.getGiorno()<<"/"<<Utente.getMese()<<"/"<<Utente.getAnno()<<endl;
    cout<<"Eta': "<<Utente.getEta()<<endl;
    Utente.getTargetBPM();
    

    return 0;

}