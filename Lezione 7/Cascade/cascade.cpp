#include "cascade.h"

Time& Time::setGiorno(string g){
    if(g!="lunedi'" && g!="martedi'" && g!="mercoledi'" && g!="giovedi'" && g!="venerdi'" && g!="sabato" && g!= "domenica")
        giorno="lunedi'";
    else
        giorno=g;

    return *this;   //Per effettuare il cascade devo mettere questo
}

Time& Time::setOre(int o){
    if(o<0 || o>24)
        ore=10;
    else
        ore=o;

    return *this;
}

Time& Time::setMinuti(int m){
    if(m<0 || m>60)
        minuti=10;
    else
        minuti=m;    

    return *this;
}

Time& Time::setSecondi(int s){
    if(s<0 || s>60)
        secondi=10;
    else
        secondi=s;   

    return *this; 
}

string Time::stampa(){
    ostringstream s;
    s<<giorno<<" "<<ore<<":"<<minuti<<":"<<secondi;
    return s.str();
}