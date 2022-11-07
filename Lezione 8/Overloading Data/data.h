#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::invalid_argument;
using std::ostringstream;
using std::array;


class Data{
    public:
        Data(int, int, int);
        bool verificaGiorno(); 
        bool verificaMese();
        string stampa();
        void incremento();
        void decremento();
        Data& operator++();     //Pre-incremento
        Data operator++(int);   //Post-incremento 
        Data& operator+=(int);  //Aggiunge un numero specifico di giorni
        Data& operator-=(int);
        bool operator<(const Data&) const; //Verifica se una data è minore di un'altra
        bool operator>(const Data&) const; //Verifica se una data è maggiore di un'altra
        bool operator==(const Data&) const; //Verifica se le date sono uguali
        bool operator!=(const Data&) const; //Verifica se le date sono diverse
        bool operator<=(const Data&) const; //Verifica se una data è uguale o viene prima di un'altra
        bool operator>=(const Data&) const; //Verifica se una data è uguale o viene dopo un'altra
        
    private:
        int g, m, a;
        const array<int,13> numGiorniXMese{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //Ho messo anche 0 in modo che in posizione x ci sia il rispettivo mese
};

#endif
