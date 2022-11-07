#include "Biscotti.h"

void Biscotti::toString(){
    cout<<"ID: "<<ID<<"\nNome: "<<nome<<"\nProduttore: "<<produttore<<"\nCaratteristiche: ";
    for(int i=0; i<10; i++) cout<<caratteristiche[i]<<" ";
    cout<<"\n\n";
}

vector<float> Biscotti::getCaratteristiche(){
    return caratteristiche;
}
