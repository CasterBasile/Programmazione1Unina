#ifndef TAVOLO_H
#define TAVOLO_H
#include <string>
#include <sstream>
using std::string;
using std::ostringstream;

class Tavolo{
    public:
        Tavolo(int clr, string lgn, string frn, float prz) : colore{clr}, legno{lgn}, fornitore{frn}, prezzo{prz} {}
        Tavolo();
        Tavolo(Tavolo& t){
            colore=t.colore;
            legno=t.legno;
            fornitore=t.fornitore;
            prezzo=t.prezzo;
        }

        //Funzioni GET
        int getColore() const{return colore;}
        string getLegno() const{return legno;}
        string getFornitore() const{return fornitore;}
        float getPrezzo() const{return prezzo;}
        virtual float getArea()const{return area;}

        //Funzione stampa
        virtual string toString() const{
            ostringstream s;
            s<<"Colore: "<<getColore()<<"\nLegno: "<<getLegno()<<"\nFornitore: "<<getFornitore()<<"\nPrezzo per cmq: "<<getPrezzo()<<" $";
            return s.str();
        }


    protected:
        int colore;
        string legno, fornitore;
        float prezzo;
        float area{0};
};




#endif