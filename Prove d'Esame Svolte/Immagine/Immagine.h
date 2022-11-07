#ifndef IMMAGINE_H
#define IMMAGINE_H

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>

using std::invalid_argument;
using std::cout;
using std::endl;
using std::string;
using std::ostringstream;



class Immagine{
    public:
        Immagine(int = 3, int = 3); //Costruttore;
        Immagine(const Immagine&); //Copy constructore
        Immagine& operator=(const Immagine &); //Overloading operatore = (Assegnazione)
        ~Immagine(); //Distruttore

        //Funzioni SET
        void setRow(int r){nrow=r;}
        void setCol(int c){ncol=c;}
        void setValueR(int r, int c, double val){R[r][c]=val;}
        void setValueG(int r, int c, double val){G[r][c]=val;}
        void setValueB(int r, int c, double val){B[r][c]=val;}

        //Funzioni GET
        int getRow() const{return nrow;}
        int getCol() const{return ncol;}
        double getValueR(int r, int c) const{return R[r][c];}
        double getValueG(int r, int c) const{return G[r][c];}
        double getValueB(int r, int c) const{return B[r][c];}

        //Funzione STAMPA
        string toString() const;

        //Funzione Richiesta
        void filter();
    private:
        int nrow;
        int ncol;
        double **R;
        double **G;
        double **B;
};

#include "Immagine.cpp"

#endif