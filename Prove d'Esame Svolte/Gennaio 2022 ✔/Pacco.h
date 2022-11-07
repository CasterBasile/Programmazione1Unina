#ifndef PACCO_H
#define PACCO_H


#include <string>
#include <sstream>
#include "Date.h"
using std::string;
using std::ostringstream;

//Classe Base
class Pacco{
    
    public:
        //Costruttore di default (Va sempre messo nella classe base)
        Pacco();
        
        Pacco(Pacco&);

        //Costruttore 
        Pacco(string d, string m, Date con, float p) : destinatario{d}, mittente{m}, consegna{con}, peso{p} {}
        //Funzione che calcola il costo
        virtual int costo() const;

        //Funzioni GET
        string getDestinatario() const{return destinatario;}
        string getMittente() const{return mittente;}
        Date& getConsegna(){return consegna;}
        float getPeso() const{return peso;}

        //Funzione che stampa le informazioni e il prezzo
        virtual string info() const;


    protected:
        string destinatario, mittente;
        Date consegna;
        float peso;

};


#endif