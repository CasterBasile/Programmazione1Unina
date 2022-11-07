#include <iostream>
#include "Ordini.h"


using std::cout;
using std::endl;
int main(){
    Ordini o("Amazon");
    Pacco p1("Castrese", "Luca", Date(24,6,2022), 2);
    Pacco p2("Luigi", "Davide", Date(23,6,2022), 9);
    PaccoExtraEuropeo p3("Luigi", "Salvatore", Date(28,6,2022), 8, "Stati Uniti", "America");

    o.inserisciOrdine(p1);
    o.inserisciOrdine(p2);
    o.inserisciOrdine(p3);
    
    cout<<o.toString();

    o.weekly_earnings();

}
