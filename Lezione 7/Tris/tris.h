#ifndef TRIS_H
#define TRIS_H
#include <iostream>
#include <array>
#include <string>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::string;
using std::setw;

class Tris{
    private:
        enum Stato{VINTO, PAREGGIO, CONTINUA}; //In questo caso dichiariamo prima il private perché dopo nel public andiamo a definire una funzione di tipo enum, cioé di tipo Stato
        array<array<char,3>, 3> tabella;
    public:
        Tris(); //Costruttore
        void movimento();
        void stampa() const;
        bool verificaMovimento(int, int) const;
        bool coordinate(char);
        Stato statoGioco() const;    
};


#endif