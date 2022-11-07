#include "decimale.h"

Decimale::Decimale(int n){
    numero=n;
}

int Decimale::convertitore(){
    int ris=0, i=0;

    while(numero>0){
        if(numero%10!=0){
            ris=ris+pow(2,i);
        }
        numero=numero/10;
        i++;
    }

    return ris;
}