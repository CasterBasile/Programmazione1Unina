#include "motorVehicle.h"

//Implementazione delle funzioni membro dichiarate in motorVehicle.h

/*
NOTA: Devo usare l'operatore di risoluzione dell'ambito ::. Sintassi:
tipo_della_funzione nome_della_classe::nome _della_funzione_presente_nella_classe
Ci permette di accedere a delle funzioni che sono presenti in specifiche classi.
*/

motorVehicle::motorVehicle(string costructor, string fuel, int years, string color, int capacity){
    setCostruttore(costructor);
    setCarburante(fuel);
    setAnno(years);
    setColore(color);
    setCilindrata(capacity);
}

void motorVehicle::setCostruttore(string costructor){
    costruttore=costructor;
}

void motorVehicle::setCarburante(string fuel){
    carburante=fuel;
}

void motorVehicle::setAnno(int years){
    if(years>=1950 && years<=2023)
        annoCostruzione=years;
    else{
        annoCostruzione=0;
        cout<<"Anno di Costruzione non corretto per un auto inserita."<<endl;
    }
}

void motorVehicle::setColore(string color){
    colore=color;
}

void motorVehicle::setCilindrata(int capacity){
    if(capacity>=500){
        cilindrata=capacity;
    }else{
        cout<<"Cilindrata non corretta per un auto inserita."<<endl;
        cilindrata=0;
    }
}

string motorVehicle::getCostruttore() const{
    return costruttore;
}

string motorVehicle::getCarburante() const{
    return carburante;
}

int motorVehicle::getAnno() const{
    return annoCostruzione;
}

string motorVehicle::getColore() const{
    return colore;
}

int motorVehicle::getCilindrata() const{
    return cilindrata;
}

void motorVehicle::displayCarDetails(){
    cout<<endl;
    cout<<"Tipo di carburante: "<<carburante<<endl;
    cout<<"Anno di costruzione: "<<annoCostruzione<<endl;
    cout<<"Colore: "<<colore<<endl;
    cout<<"Cilindrata: "<<cilindrata<<endl;
    cout<<endl<<endl;
}

