#include "Data.h"

Data::Data(int day, int month, int year){
    setGiorno(day);
    setMese(month);
    setAnno(year);   
}

void Data::setGiorno(int day){
    if(day>=1 && day<=31){      
        giorno=day;
    }else{
        cout<<"Giorno non inserito correttamente (Verrà inserito pari a 1)."<<endl;
        giorno=1;
    }
}

void Data::setMese(int month){
    if(month>=1 && month<=12){
        mese=month;
    }else{
        cout<<"Mese non inserito correttamente (Verrà inserito pari a 1)."<<endl;
        mese=1;
    }
}

void Data::setAnno(int year){
    if(year<=2022){
        anno=year;
    }else{
        cout<<"Anno non inserito correttamente (Verrà inserito pari a 1)."<<endl;
        anno=1;
    }
}

int Data::getGiorno() const{
    return giorno;
}

int Data::getMese() const{
    return mese;
}

int Data::getAnno() const{
    return anno;
}

void Data::displayDate(){
    cout<<giorno<<"/"<<mese<<"/"<<anno<<endl;
}