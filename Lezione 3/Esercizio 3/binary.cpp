#include "binary.h"

Binary::Binary(int n){
    numero=n;
}


string Binary::convertitore(){
    string ris="";
    while(numero>0){        //Il ciclo si deve ripetere finché il numero è maggiore di 0.
        if(numero%2==0)
            ris='0'+ris;    //Se il resto della divisione è 0 allora metto 0.
        else
            ris='1'+ris;    //Se il resto della divisione è diverso da 0 allora metto 1.
        numero=numero/2;    //Ad ogni ciclo divido per due (Sarebbe il metodo standard per la comversione in binario)
                            //NOTA: numero=numero/2; sta fuori all'else, quindi viene eseguito SEMPRE.
    } 
    return ris;             //La funzione è di tipo string quindi deve ritornare una stringa.
}