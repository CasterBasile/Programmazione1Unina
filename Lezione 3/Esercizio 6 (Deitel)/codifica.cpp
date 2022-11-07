#include "codifica.h"

Codifica::Codifica(int numero){
    n=numero;

    if(verifica==true)
        separaNumeri();
    else{
        cout<<"Il numero non e' composto da 5 cifre. "<<endl;
    }
}

void Codifica::menu(){
    int m;
    cout<<"Menu' :"<<endl;
    cout<<"1. Codifica"<<endl;
    cout<<"2. Decodifica"<<endl;
    cout<<"Inserire scelta (1/2): ";
    cin>>m;
    if(m==1)
        codificaNumero();
    if(m==2)
        decodificaNumero();
}


void Codifica::separaNumeri(){
    a=(n/1000)%10;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;   
    menu();
}

void Codifica::codificaNumero(){
    int temp1=c, temp2=d;
    c=(a+7)%10;
    d=(b+7)%10;
    a=(temp1+7)%10;
    b=(temp2+7)%10;
    cout<<"Il numero codificato e' "<<a<<b<<c<<d<<endl;
}

void Codifica::decodificaNumero(){
    int temp=a;
    a=c;
    c=temp;
    temp=b;
    b=d;
    d=temp;
    d=d+3;
    cout<<a<<b<<c<<d<<endl;

    cout<<"Il numero decodificato e' "<<a<<b<<c<<d;
}