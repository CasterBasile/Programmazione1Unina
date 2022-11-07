#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
    int numbers[5];
    int numbers_length=5;

    //Riempimento Array
    for(int i=0; i<numbers_length; i++){
        cout<<"Inserire numero: ";
        cin>>numbers[i];
    }

    //Mostrare contenuto Array
    for(int i=0; i<numbers_length; i++){
        if(i==0){
            cout<<"Il contenuto dell'array e' ";
            cout<<numbers[i]<<" ";
            continue;
        }
        cout<<numbers[i]<<" ";
    }

    //Ordinamento con Insertion sort
    for(int j=1; j<numbers_length; j++){
        int key = numbers[j];       //Key è una variabile che memorizza l'elemento j-esimo dell'array
        int i=j;               //i=j perché il ciclo while per l'ordinamento vero e proprio deve partire da j

        while(i>0 && numbers[i-1]>key){ //Si ripete finché trova un valore dell'array maggiore di Key e i è maggiore di 0
            numbers[i]=numbers[i-1];
            i--;
        }
        numbers[i]=key;
    }

    //Mostriamo l'array ordinato
    cout<<endl;
    for(int i=0; i<numbers_length; i++){
        if(i==0){
            cout<<"Il contenuto dell'array ordinato e' ";
            cout<<numbers[i]<<" ";
            continue;
        }
        cout<<numbers[i]<<" ";
    }

    return 0;

}