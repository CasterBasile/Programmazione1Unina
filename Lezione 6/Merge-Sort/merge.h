#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
//Prototipi
void merge(vector<int>& A, int p, int r, int q);
void mergeSort(vector<int>& A, int p, int r);
/*
p è l'indice iniziale della prima "sottosequenza", q è l'indice finale della prima "sottosequenza",
q+1 è l'indice iniziale della seconda "sottosequenza", r è l'indice finale della seconda "sottosequenza".
Questa funzione (mergeSort) viene chiamata ricorsivamente due volte, una volta per ogni "sottosequenza". 
L'ordinamento vero e proprio avviene con la funzione merge che ha come valori di ingresso il vettore A,
l'indice iniziale p, l'indice finale r e l'indice finale della prima "sottosequenza" q. 
*/
void mergeSort(vector<int>& A, int p, int r){
    int q;
    if(p<r){
        q=(p+r)/2;
        mergeSort(A, p, q);
        mergeSort(A, q+1, r);
        merge(A, p, r, q);
    }
}

/*
Dichiaro 3 variabili, i, j, k che rappresentano:
-i: L'indice iniziale della prima "sottosequenza"
-k: L'indice iniziale della prima "sottosequenza"
-j: L'indice iniziale della seconda "sottosequenza"
Creo anche un vettore C che avrà la stessa dimensione del vettore A, questo sarà il vettore ordinato.
Il primo while si ripete finché i è <= dell'indice finale della prima "sottosequenza" e finché
j è <= dell'indice finale della seconda "sottosequenza".
Qui avviene l'ordinamento vero e proprio, quindi si confronta elemento per elemento.
Gli altri 2 while si ripetono quando solo una della due condizioni del primo while è valida.
Il ciclo for, invece, sarebbe l'ultimo passo. Quello che fa è copiare il contenuto di C in A.
*/
void merge(vector<int>& A, int p, int r, int q){
    int i, j, k;
    static vector<int> C(A.size());
    i=p;
    k=p;
    j=q+1;
    while(i<=q && j<=r){
        if(A[i]<A[j]){
            C[k]=A[i];
            k++;
            i++;
        }else{
            C[k]=A[j];
            k++;
            j++;
        }
    }
    while(i<=q){
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<=r){
        C[k]=A[j];
        k++;
        j++;
    }
    for(i=p; i<k; i++){
        A[i]=C[i];
    }
}