#include "Dec2Bin.h"

int main(){
    int numero;
    string ris;
    Dec2Bin var;
    cout<<"Inserire un numero: "<<endl;
    cin>>numero;
    var.convertitore(numero);
    ris=var.getBin();    
    cout<<numero<<" in binario e' "<<ris<<endl;

    return 0;
}