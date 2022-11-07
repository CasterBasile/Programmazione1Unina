#include "HeartRate.h"

HeartRate::HeartRate(string name, string surname, int day, int month, int year){
    setNome(name);
    setCognome(surname);
    setGiorno(day);
    setMese(month);
    setAnno(year);
    setEta();
    setMaxBPM();
}

void HeartRate::setNome(string name){
    nome=name;
}

void HeartRate::setCognome(string surname){
    cognome=surname;
}

void HeartRate::setGiorno(int day){
    giorno=day;
}

void HeartRate::setMese(int month){
    mese=month;
}

void HeartRate::setAnno(int year){
    anno=year;
}

string HeartRate::getNome() const{
    return nome;
}

string HeartRate::getCognome() const{
    return cognome;
}

int HeartRate::getGiorno() const{
    return giorno;
}

int HeartRate::getMese() const{
    return mese;
}

int HeartRate::getAnno() const{
    return anno;
}

void HeartRate::setEta(){
    eta=2022-anno;
}

void HeartRate::setMaxBPM(){
    BPM=220-eta;
}

void HeartRate::getTargetBPM(){

    cout<<"Il battito cardiaco target di "<<nome<<" "<<cognome<<" e' compreso fra "<<(0.5)*BPM<<" BPM e "<<(0.85)*BPM<<" BPM."<<endl;
    
}

int HeartRate::getEta() const{
    return eta;
}