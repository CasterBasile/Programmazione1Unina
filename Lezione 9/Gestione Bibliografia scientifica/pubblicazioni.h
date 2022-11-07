#ifndef PUBBLICAZIONI_H
#define PUBBLICAZIONI_H
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::invalid_argument;
using std::ostringstream;


class Pubblicazioni{
    public:
        Pubblicazioni(const string&, const string&, int);   //Nome, autore/i, anno pubblicazione
        virtual ~Pubblicazioni()=default;
        //funzioni set
        void setNome(const string&);
        void setAutori(const string&);
        void setAnno(int);
        //Funzioni get
        string getNome() const;
        string getAutori() const;
        int getAnno() const;
        //Funzione stampa
        virtual string stampa() const;
        //Operatori
        bool operator<(const Pubblicazioni& str) const;
        bool operator>(const Pubblicazioni& str) const;
    protected:
        string n, aut;
        int a;
};




#endif