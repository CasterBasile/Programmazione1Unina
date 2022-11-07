#ifndef ORDINI_H
#define ORDINI_H
#include <iostream>
#include <list>
#include "PaccoExtraEuropeo.h"

using std::list;
using std::cout;
using std::endl;

class Ordini{
    public:
        Ordini(string n) : nome{n} {}
        void inserisciOrdine(Pacco& p);
        string toString() const;
        void weekly_earnings();

    private:
        string nome;
        list<Pacco*> ordini;
};




#endif