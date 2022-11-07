#include "Ordini.h"

void Ordini::inserisciOrdine(Pacco& p){
    auto cursor = ordini.begin();
    auto end = ordini.end();
    while(cursor != end){
        Pacco* tmp = *cursor;
        if(p.getConsegna()<tmp->getConsegna()) break;
        cursor++;
    }
    ordini.insert(cursor, &p);
}

string Ordini::toString() const{
    ostringstream s;
    for(auto cursor=ordini.begin(); cursor!=ordini.end(); cursor++){
        Pacco* Paccoptr=*cursor;
        PaccoExtraEuropeo* Extraptr = dynamic_cast<PaccoExtraEuropeo*>(Paccoptr);
        if(Extraptr != nullptr){
            s<<Extraptr->info();
            s<<endl;
        }
        else{
            s<<Paccoptr->info();
            s<<endl;
        }
    }
    return s.str();
}

void Ordini::weekly_earnings(){
    float g{0};
    for(auto cursor=ordini.begin(); cursor!=ordini.end(); cursor++){
        Pacco* Paccoptr = *cursor;
        PaccoExtraEuropeo* Extraptr = dynamic_cast<PaccoExtraEuropeo*>(Paccoptr);
        if(Extraptr != nullptr){
            g+=Extraptr->costo();
        }else{
            g+=Paccoptr->costo();
        }
    }
    cout<<"Guadagni settimanali: "<<g<<" $."<<endl;
}
