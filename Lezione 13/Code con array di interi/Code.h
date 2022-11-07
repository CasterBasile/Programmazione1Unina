#ifndef CODE_H
#define CODE_H

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::array;
using std::ostringstream;
using std::out_of_range;
using std::domain_error;

class Code{
    public:
        Code(int dimensione);       //Costruttore
        ~Code() = default;      //Distruttore
        void enqueue(int var);    //Aggiunge un elemento alla coda
        void dequeue();         //Elimina un elemendo dalla coda
        int front() const;        //Restituisce l'elemento che "sta da più tempo in coda", quello con indice head
        int size() const;       //Restituisce la dimensione dell'array
        bool empty() const;     //Verifica se l'array è vuoto o no
        bool full() const;      //Verifica se l'array è pieno o no
    private:
        int head=0, tail=0, dim=0;
        int n[];
};




#endif