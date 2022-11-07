#include "data.h"

Data::Data(int giorno, int mese, int anno){
    if(anno>=1700)
        this->a=anno;
    else
        throw invalid_argument("L'anno deve essere maggiore o uguale a 1700");
    
    if(anno!=0 && mese>=1 && mese<=12)
        this->m=mese;
    else
        throw invalid_argument("Il mese deve essere compreso fra 1 e 12.");    

    if(anno!=0 && mese>=1 && mese<=12 && giorno>=1 && giorno<=31)
        this->g=giorno;
    else
        throw invalid_argument("Il giorno deve essere compreso fra 1 e 31.");
}

//Stampa la data
string Data::stampa(){
    ostringstream s;
    s<<this->g<<"/"<<this->m<<"/"<<this->a;
    return s.str();
}

/*Questa funzione verifica se è possibile incrementare il giorno, 
ad esempio non possiamo incrementare il giorno 29 febbraio senza incrementare 
anche il mese. L'incremento viene fatto nella funzione apposita, questa funzione 
serve solo a controllare.*/
bool Data::verificaGiorno(){    //Questa funzione verifica se è possibile incrementare il giorno, ad esempio non possiamo incrementare il giorno 29 febbraio senza incrementare anche il mese. L'incremento viene fatto nella funzione apposita, questa funzione serve solo a controllare.
    if(g>=numGiorniXMese[m])
        return false;   //Se il giorno è uguale all'ultimo giorno del mese allora non puoi incrementare solo il giorno
    else
        return true;    //Se il giorno è diverso dall'ultimo giorno del mese allora puoi incrementare solo il giorno
} 

bool Data::verificaMese(){
    if(m>12)
        return true; //Se il mese è minore di 12 possiamo incrementarlo senza incrementare l'anno
    if(m==12)
        return false; //Se il mese è 12 dobbiamo incrementare l'anno e porre il mese pari a 1
}

//Creo una funzione apposita per l'incremento poiché servirà in più di una funzione
void Data::incremento(){
    if(verificaGiorno())
        g++;
    else{
    if(verificaMese()){
        m++;
        g=1;
    }else{
        m=1;
        g=1;
        a++;
    }
}
}

//Questa funzione effettua il pre-incremento
Data& Data::operator++(){
    incremento();
    return *this;
}

//Questa funzione effettua il post-incremento
Data Data::operator++(int){
    Data varTemporanea{*this};
    incremento();

    return varTemporanea;    
}

//Questa funzione aggiunge un numero specifico di giorni
Data& Data::operator+=(int giorni){
    for(int i=0; i<giorni; ++i){
        incremento();
    }
    return *this;
}

bool Data::operator<(const Data& seconda) const{
    //Per prima cosa verifico l'anno
    if(a<seconda.a) 
        return true;
    if(a==seconda.a && m<seconda.m)
        return true;
    if(a==seconda.a && m==seconda.m && g<seconda.g)
        return true;
    return false;      
}

bool Data::operator>(const Data& seconda) const{
    if(a>seconda.a)
        return true;
    if(a==seconda.a && m>seconda.m)
        return true;
    if(a==seconda.a && m==seconda.m && g>seconda.g)
        return true;
    return false;
}

bool Data::operator==(const Data& seconda) const{
    if(a==seconda.a && m==seconda.m && g==seconda.g)
        return true;
    return false;
}

bool Data::operator!=(const Data& seconda) const{
    if(a!=seconda.a || m!=seconda.m || g!=seconda.g)
        return true;
    return false;
}

bool Data::operator<=(const Data& seconda) const{
    if(a<=seconda.a && m<=seconda.m && g<=seconda.g)
        return true;
    return false;    
}

bool Data::operator>=(const Data& seconda) const{
    if(a>=seconda.a && m>=seconda.m && g>=seconda.g)
        return true;
    return false;    
}

void Data::decremento(){
    if(g!=1)
        g--;
    else{
    if(g!=1 && m!=1){
        m--;
        g=numGiorniXMese[m];
    }else{
        m--;
        g=31;
        a--;
    }
}
}

Data& Data::operator-=(int giorni){
    for(int i=0; i<giorni; ++i){
        decremento();
    }
    return *this;
}
