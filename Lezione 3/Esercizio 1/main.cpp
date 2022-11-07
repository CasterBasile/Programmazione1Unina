#include "MaxMin.h"
/*In questo esercizio utilizzerò 0 come variabile sentinella, in particolare non appena viene inserito lo 0 il programma termina.
In questo programma dobbiamo calcolare il massimo e il minimo di una serie di numeri inseriti dall'utente. Avrei voluto utilizzare
il ciclo while ma senza il concetto di array non ho trovato un modo per implementarlo (O comunque sarebbe stato uno spreco di memoria inutile)*/
int main(){
    int a,b,c,d,e;
    int i{0};

    cout<<"Inserire numero "<<++i<<":"; //Pre-incremento in modo che visualizza un numero differente ogni volta. Con il post-incremento (i++) avrei dovuto inizializzare i{1};
    cin>>a;
    if(a==0){
        cout<<"0 e' la variabile sentinella, programma terminato."<<endl;
        return 0;
    }
    cout<<"Inserire numero "<<++i<<":";
    cin>>b;
    if(b==0){
        cout<<"0 e' la variabile sentinella, programma terminato."<<endl;
        return 0;
    }
    cout<<"Inserire numero "<<++i<<":";
    cin>>c;
    if(c==0){
        cout<<"0 e' la variabile sentinella, programma terminato."<<endl;
        return 0;
    }
    cout<<"Inserire numero "<<++i<<":";
    cin>>d;
    if(d==0){
        cout<<"0 e' la variabile sentinella, programma terminato."<<endl;
        return 0;
    }
    cout<<"Inserire numero "<<++i<<":";
    cin>>e;
    if(e==0){
        cout<<"0 e' la variabile sentinella, programma terminato."<<endl;
        return 0;
    }

    MaxMin numeri{a,b,c,d,e};


    return 0;    
    
}