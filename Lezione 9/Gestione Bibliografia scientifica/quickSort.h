#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "pubblicazioni.h"  //Lo includo perché contiene l'inclusione della libreria <vector> e di using std::vector

/*
Utilizzo i template perché come possiamo notare la sintassi del Quick Sort è sempre la stessa, 
quello che cambia è il tipo in ingresso.
*/

template <class T>  
void quickSort(vector<T>& A, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q);
        quickSort(A, q+1, r);
    }
}
template <class T>
void quickSort(vector<T>& A) {
    quickSort(A, 0, A.size()-1);
}

template <class T>
int partition(vector<T>& A, int p, int r) {
    T pivot = A.at(p);
    int i = p-1;
    int j = r+1;
    while (true) {
        do {
            j--;
        } while (*A.at(j) > *pivot);
        do {
            i++;
        } while (*A.at(i) < *pivot);
        if (i < j) {
            swap(A, i, j);
        } else {
            return j;
        }
    }
}

template <class T>
void swap(vector<T>& A, int i, int j) {
    T temp = A.at(i);
    A.at(i) = A.at(j);
    A.at(j) = temp;
}

#endif