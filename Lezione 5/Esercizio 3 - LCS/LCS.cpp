#include "LCS.h"

template <typename T>
//Questa funzione calcola la stringa più lunga
const T& LCS::max(const T& a, const T& b){
    return(a > b) ? a:b;
}

//Funzione LCS
int LCS::longestCommon(string a, string b, int i, int j){   //Ha in ingresso le due stringhe e la lunghezza delle due stringhe
    if(i==0 || j==0)
        return 0;   
    if(a[i-1]==b[j-1])  //Nel primo "ciclo" confronta le ultime due lettere delle due stringhe, se sono uguali...
        return 1+longestCommon(a, b, i-1, j-1); //...somma 1 e richiama la funzione decrementando ancora gli indici
    else
        return max(longestCommon(a, b, i, j-1), longestCommon(a, b, i-1, j));   //Altrimenti calcola la stringa più lunga fra le due stringhe su cui ricorsivamento abbiamo chiamato LCS
}