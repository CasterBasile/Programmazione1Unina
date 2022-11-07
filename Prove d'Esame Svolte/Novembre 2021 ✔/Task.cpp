#include "Task.h"


string Task::getNomeTask() const{
    return nomeTask;
}

Data Task::getScadenza() const{
    return scadenza;
}

int Task::getOre() const{
    return ore;
}

Programmatore* Task::getProgrammatore() const{
    return pr;
}

Task Task::operator=(const Task& t){
    if(this==&t)
        return *this;
    else{
        nomeTask=t.nomeTask;
        scadenza=t.scadenza;
        ore=t.ore;
        pr=t.pr;    //Questo è possibile grazie all'operatore = definito nella classe "Programmatore"
    }
    return *this;
}

string Task::toString() const{
    ostringstream s;
    s<<"-Nome Task: "<<getNomeTask()<<"\n-Scadenza: "<<getScadenza().stampa()<<"\n-Ore lavoro: "<<getOre()<<"\n-Programmatore incaricato: "<<getProgrammatore()->getNome()<<"\n\n";
    return s.str();
}
