#include "EBA.h"

int main(){

    EBA v("Biscotti");
    v.readFile();
    cout<<"Totale biscotti: "<<v.getTotale()<<"\n\n";
    v.toString();

   
    v.grafoSimil();
    v.stampa();



    


    return 0;
}