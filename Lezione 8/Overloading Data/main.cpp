#include "data.h"

int main(){
    Data a{6, 5, 2022};
    Data b{31, 12, 2022};
    cout<<a.stampa()<<endl;
    cout<<"Incremento la data di 1."<<endl;
    a++;
    cout<<a.stampa();


    return 0;
};