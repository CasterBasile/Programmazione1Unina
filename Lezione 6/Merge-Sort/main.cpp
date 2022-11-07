#include "merge.h"


int main(){
    vector<int> a{10,9,8,7,6,5,4,3,2,1,0};
    int dim=a.size();   //Dimensione del vettore, size() è una funzione inclusa in #include <vector>

    //Stampo il vettore iniziale
    cout<<"Vettore inizile: "<<endl;
    for(int i=0; i<dim; i++){
        cout<<a[i]<<" ";
    }
 /*
 Alla funzione mergeSort passo il vettore, l'indice iniziale e l'indice 
 finale, che sarebbe la dimensione del vettore diminuita di 1 (perché parte
 da 0)
 */
                        
    mergeSort(a, 0, dim-1);

    //Stampo il vettore finale, quello ordinato
    cout<<"\nVettore ordinato: "<<endl;
    for(int i=0; i<dim; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}