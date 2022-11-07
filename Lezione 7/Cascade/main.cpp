#include "cascade.h"

int main(){
    Time var;
    
    var.setGiorno("venerdi'").setOre(10).setMinuti(15).setSecondi(30);
    string ris=var.stampa();
    cout<<ris<<endl;

    return 0;
}