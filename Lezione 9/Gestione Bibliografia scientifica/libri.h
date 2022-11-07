#ifndef LIBRI_H
#define LIBRI_H
#include "pubblicazioni.h"


class Libri : public Pubblicazioni{
    public:
        Libri(const string&, const string&, int, const string&, const string&);
        virtual ~Libri()=default;
        //Funzioni set
        void setCasaEditrice(const string&);
        void setISBN(const string&);
        //Funzioni get
        string getCasaEditrice() const;
        string getISBN() const;
        string getTipo() const{return tipo;};
        //Override
        virtual string stampa() const override;
    protected:
        string cEdit, isbn, tipo="Libro";
};

#endif