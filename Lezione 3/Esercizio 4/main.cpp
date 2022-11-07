#include "decimale.h"

int main(){
    int numero;
    cout<<"Inserire un numero binario: "<<endl;
    cin>>numero;
    Decimale var{numero};
    cout<<numero<<" in decimale e' "<<var.convertitore()<<endl;

    return 0;
}