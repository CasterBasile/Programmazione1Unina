#include "dadi.h"

int Dadi::tiraDadi(){
    int a=1 + rand()%6;    //Primo dado, 1 e %6 in modo che i numeri generati vadano da 1 a 6
    int b=1 + rand()%6;    //Secondo dado
    int somma=a+b;
    cout<<"Dado 1: "<<a<<" Dado 2: "<<b<<" La loro somma e' "<<somma<<endl;
    
    return somma;
}

void Dadi::impostaStatus(){

    int somma=tiraDadi();
    switch(somma){
        case 7:
        case 11:
            var=Stato::VINTO;
            break;
        case 2:
        case 3:
        case 12:
            var=Stato::PERSO;
            break;
        default:
            var=Stato::CONTINUA;
            punteggio=somma;
            cout<<"Il punteggio e' "<<punteggio<<endl;
            break;
    }

}

void Dadi::eseguiGioco(){
    int somma;
    impostaStatus();
    while(var==Stato::CONTINUA){
        somma=tiraDadi();
    if(somma==punteggio){
        var=Stato::VINTO;
        cout<<"Hai vinto! "<<endl;
    }else{
        if(somma==7){
            var=Stato::PERSO;
            cout<<"Hai perso! "<<endl;
        }
      }
    }
}
