#include "function.h"


int main(){

array<array<int, col>,rig> matrice1{};
array<array<int, col>,rig> matrice2{};

//Richiamo la funzione di riempimento per la matrice 1
setMat1(matrice1);
//Richiamo la funzione di riempimento per la matrice 2
setMat2(matrice2);
//Richiamo la funzione che stampa a video la matrice 1
getMat(matrice1);
//Richiamo la funzione che stampa a video la matrice 2
getMat(matrice2);
//Richiamo la funzione che effettua il prodotto
getProd(matrice1, matrice2);



    return 0;
}