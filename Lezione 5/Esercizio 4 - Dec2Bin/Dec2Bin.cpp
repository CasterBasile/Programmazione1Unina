#include "Dec2Bin.h"


void Dec2Bin::convertitore(int n){
    if(n>0){
        if(n%2==0){
            ris='0'+ris;
        }else{
            ris='1'+ris;
        }
        n=n/2;
        convertitore(n);
    }else{
        ris=ris;
    }
}


string Dec2Bin::getBin(){
    return ris;
}