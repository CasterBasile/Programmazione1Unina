#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

//Algoritmo Binary Search

/*
Questo algoritmo riceve in ingresso due parametri, cioè il vettore e il numero da cercare.
Dichiaro 3 variabili, una che indica la dimensione del vettore (n), una che rappresenta l'indice
di sinistra (inizialmente vale 0) e una che indica l'indice di destra (inizialmente vale la dimensione
del vettore -1, poiché parte da 0).
Il ciclo while si ripete finché l'indice di sinistra è minore dell'indice di destra.
All'interno del ciclo while dichiariamo una variabile chiamata mid che rappresenta l'indice "medio" del
vettore. La ricerca del numero si basa su questa variabile, infatti andiamo a dividere il vettore finché
non troviamo il numero da noi scelto. La divisione del vettore avviene in base a questa variabile. Infatti
se il numero in corrispondenza del centro (A[mid]) è minore del numero da cercare, l'indice di sinistra
diventa il numero successivo al centro (quello di destra resta invariato), se invece è maggiore l'indice di destra diventa il numero precedente
al centro (quello di sinistra resta invariato). 
Questa operazione si ripete tante volte quante sono le volte in cui viene ripetuto il ciclo while.
Infine se il numero non è presente nel vettore, si restituisce -1, è una sorta di valore sentinella.
In questo caso ho implementato la funzione in modo che la stampa a video del risultato della ricerca avvenga
stesso nella funzione binarySearch, avrei potuto implementate la stampa del risultato nel main mettendo
if(risultato==-1)
    cout<<"Numero non presente nel vettore"<<endl;
*/
int binarySearch(vector<int> &A, int num){
    int n=A.size();
    int sx=0;
    int dx=n-1;
    cout<<"La lunghezza dell'array e': "<<n<<endl;
    while(sx<=dx){
        int mid=(sx+dx)/2;
        if(A[mid]==num){
            cout<<"Il numero si trova in posizione "<<mid<<endl;
            return mid;
        }
        if(A[mid]<num)
            sx=mid+1;
        else
            dx=mid-1;
    }
    cout<<"Numero non presente."<<endl;
    return -1;
}