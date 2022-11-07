#ifndef TASK_H
#define TASK_H


#include "Programmatore.h"
#include "Data.h"

class Task{
    public:
        Task(string n="Nome Cognome", Data s=(1,1,2022), int h=0, Programmatore p={"Nome cognome", 1}) : nomeTask{n}, scadenza{s}, ore{h}, pr{&p} {}

        string getNomeTask() const;
        Data getScadenza() const;
        int getOre() const;
        Programmatore* getProgrammatore() const;
        Task operator=(const Task&);
        //Funzione toString() per la stampa delle task
        string toString() const;
    private:
        string nomeTask;
        Data scadenza;
        int ore;
        Programmatore* pr;

};



#endif