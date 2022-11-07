#include "binary.h"

int main(){
    int numero;
    cout<<"Inserire un numero: "<<endl;
    cin>>numero;
    Binary var{numero};
    cout<<"Il numero convertito e' "<<var.convertitore()<<endl;

    return 0;
}