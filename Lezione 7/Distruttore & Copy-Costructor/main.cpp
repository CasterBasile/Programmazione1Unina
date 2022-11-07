#include "distruttore.h"

int main(){
    CreaEDistruggi var{22, "Castrese"};
    var.Stampa();
    CreaEDistruggi var1;
    var1=var;
    var1.Stampa();

    return 0;
}

/*
NOTA: La funzione distruttore viene chiamata in automatico al termine dell'esecuzione del programma.
Per quanto riguarda il copy costructor, è importante che gli argomenti del costruttore abbiamo 
un'inizializzazione per default, sennò non va.
 */