#include "funzioni.h"

int menu(){
    int scelta=0;
    cout<<"Menu':"<<endl;
    cout<<"1. Utenti senza debiti."<<endl;
    cout<<"2. Utenti che devono ricevere un rimborso."<<endl;
    cout<<"3. Utenti con debiti."<<endl;
    cout<<"4. Termina programma."<<endl;
    do{
    cout<<"Effettua una scelta (1-2-3-4):"<<endl;
    cin>>scelta;
    if(scelta<1 || scelta>4)
        cout<<"La scelta deve essere compresa fra 1 e 4."<<endl;
    }while(scelta<1 || scelta>4);

    return scelta;
}

bool display(int scelta, double credito){
    if(scelta==1 && credito==0.0)
        return true;
    if(scelta==2 && credito<0.0)
        return true;
    if(scelta==3 && credito>0.0)
        return true;
    
    return false;
}

void output(const string& nome, const string& cognome, double credito){
    cout<<left<<setw(15)<<nome<<setw(15)<<cognome<<setprecision(2)<<right<<credito<<endl;
}
