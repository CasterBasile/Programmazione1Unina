#include "Gestore.h"

void Gestore::inserisciAppoggio(Tavolo& t){
    auto cursor = tavoli.begin();
    auto end = tavoli.end();
    while(cursor != end){
        Tavolo* tmp = * cursor;
        if(t.getArea()<tmp->getArea()) break;
        cursor++;
    }
    tavoli.insert(cursor, &t);
}

string Gestore::toString() const{
    ostringstream s;
    for(auto cursor=tavoli.begin(); cursor!=tavoli.end(); cursor++){
        Tavolo* tavoloptr = *cursor;
        Rettangolare* rettptr = dynamic_cast<Rettangolare*>(tavoloptr);
        Triangolare* trgptr = dynamic_cast<Triangolare*>(tavoloptr);
        Circolare* crcptr = dynamic_cast<Circolare*>(tavoloptr);

        if(rettptr != nullptr){
            s<<rettptr->toString();
            s<<endl;
        }else if(trgptr!=nullptr){
            s<<trgptr->toString();
            s<<endl;
        }else if(crcptr!=nullptr){
            s<<crcptr->toString();
            s<<endl;
        }else{
            s<<tavoloptr->toString();
            s<<endl;
        }
    }
    return s.str();
}


float Gestore::summarizeWharehouse(){
    float prz{0};
    for(auto cursor=tavoli.begin(); cursor!=tavoli.end(); cursor++){
        Tavolo* tavoloptr = *cursor;
        Rettangolare* rettptr = dynamic_cast<Rettangolare*>(tavoloptr);
        Triangolare* trgptr = dynamic_cast<Triangolare*>(tavoloptr);
        Circolare* crcptr = dynamic_cast<Circolare*>(tavoloptr);

        if(rettptr != nullptr){
            prz+=rettptr->getPrezzoFinale();
        }else if(trgptr!=nullptr){
            prz+=trgptr->getPrezzoFinale();
        }else{
            prz+=crcptr->getPrezzoFinale();
        }
    }
    return prz;
}