#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Prototipi
void quickSort(vector<int> &A, int p, int r);
int partition(vector<int> &A, int p, int r);
void swap(vector<int> &A, int i, int j);

/*
q è l'indice che divide l'array in due parti, il numero di elementi della prima parte è minore o
uguale al numero di elementi della seconda parte.
Come possiamo notare ci sono due chiamate al quickSort, queste due chiamate servono ad ordinare 
i sottoarray separatamente.
*/
void quickSort(vector<int> &A, int p, int r){
    if(p<r){
        int q=partition(A, p, r);
        quickSort(A, p, q);
        quickSort(A, q+1, r);
    }
}
/*
x è quello che chiamiamo elemento Pivot. Gli elementi minori o uguali al pivot verranno spostati
tutti a sinistra. Gli elementi maggiori o uguali al pivot verranno spostati a destra.
Il ciclo while si ripete fino all'istruzione di return, il "true" come condizione del while è fittizio.
Il primo do-while cerca il primo elemento da destra che sia minore o uguale al Pivot.
Il secondo do-while cerca il primo elemento da sinistra che sia maggiore o uguale al Pivot.
Se l'array non è stato scandito completamente si scambiano A[i] ed A[j];
*/
int partition(vector<int> &A, int p, int r){
    int x=A[p];
    int i=p-1;
    int j=r+1;

    while(true){
        do
            j=j-1;
        while(A[j]>x);
        do
            i=i+1;
        while(A[i]<x);
        if(i<j)
            swap(A, i, j);
        else
            return j;
    }
}
/*
Questa funzione scambia solo le variabili.
*/
void swap(vector<int> &A, int i, int j){
    int num=A[j];
    A[j]=A[i];
    A[i]=num;
}

#endif