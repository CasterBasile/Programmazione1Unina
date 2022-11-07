#ifndef CDL_H
#define CDL_H
#include <vector>
#include <string>
#include <iostream>
#include "Studente.h"
#include "Insegnamento.h"
using std::vector;
using std::string;
using std::cout;

class Cdl{
    public:
        Cdl(string);    
        void addStudente(Studente);
        void addInsegnamento(Insegnamento);
        void addEsameStudente(int, int); //Quale corso voglio aggiungere a quale studente, devo specificare la chiave per cercare il corso e la chiave per lo studente
        void calcIstogramma();  //Funzione che ci ha chiesto l'esame
        void ordinaEStampa();
    private:
        vector<Studente> studenti;
        vector<Insegnamento> corsi;
        string nomeCdl;
        int istogrammaCrediti[181];
};



#endif