#include <iostream>
#include "Gestore.h"

using std::cout;
using std::endl;
int main(){
    Gestore g("Ikea");
    Rettangolare r(1, "Frassino", "Ikea", 10, 2, 3.5);
    Triangolare t(2, "Abete", "Leroy Merlin", 8, 3, 5);
    Circolare c(1, "Pino", "Ikea", 7, 1.5);
    Rettangolare r1(1, "Limone", "Happy Casa", 5, 4, 4);
    Rettangolare r2(1, "Melo", "Ebay", 62.0, 1.0, 5.0);


    g.inserisciAppoggio(r1);
    g.inserisciAppoggio(c);
    g.inserisciAppoggio(r);
    g.inserisciAppoggio(t);
    g.inserisciAppoggio(r2);

    cout<<g.toString()<<endl;

    cout<<"Il prezzo totale dei piani di appoggio e': "<<setprecision(2)<<fixed<<g.summarizeWharehouse()<<" $"<<endl;
    
    


}