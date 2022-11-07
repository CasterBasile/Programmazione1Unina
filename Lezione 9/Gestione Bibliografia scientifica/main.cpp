
#include "libri.h"
#include "riviste.h"
#include "convegni.h"
#include "quickSort.h"

int main(){

    int conteggioLibri=0, conteggioRiviste=0, conteggioConvegni=0;


    vector<Pubblicazioni*>pub{
        new Libri("La teoria del buio", "Castrese Basile", 2022, "Feltrinelli", "1234-6543-7821-0987"),
        new Riviste("Saggistica", "Carlo Bianchi", 2021, 15, 3, 7),
        new Convegni("Sulla terra", "Adrian Fartade - Barbascura X", 2022, "Palazzo Reale - Napoli", 10),
        new Libri("Analisi Matematica I", "Marcellini - Sbordone", 2000, "Mondadori", "1254-6398-7452-3652")
    };



    /*
    Utilizziamo il dynamic_cast per "contare" il numero di elementi per ogni tipo. 
    SINTASSI:
    dynamic_cast<nuovo_tipo>(espressione);
    Lo usiamo come se fosse un ciclo for normale, pubPtr sarebbe le "i".
    */

    for(const auto pubPtr : pub){
        auto rivistePtr = dynamic_cast<Riviste*>(pubPtr);
        if(rivistePtr != nullptr){
            conteggioRiviste++;
            continue;   //Se la condizione dell'if è verificata dobbiamo andare avanti col ciclo senza continuare il resto
        }
        auto convegniPtr=dynamic_cast<Convegni*>(pubPtr);
        if(convegniPtr!=nullptr){
            conteggioConvegni++;
            continue;
        }
        auto libriPtr=dynamic_cast<Libri*>(pubPtr);
        if(libriPtr!=nullptr){
            conteggioLibri++;
        }
    }

    //L'ordinamento avviene in base al nome dell'autore
    quickSort(pub, 0, pub.size()-1);

    //Stampa tutti gli elementi del vettore
    for(const auto pubPtr : pub){
        cout<<pubPtr->stampa()<<endl;
    }
    
    


    cout<<"Totale Libri: "<<conteggioLibri<<endl;
    cout<<"Totale Riviste: "<<conteggioRiviste<<endl;
    cout<<"Totale Convegni: "<<conteggioConvegni<<endl;

}