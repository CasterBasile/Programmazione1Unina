#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::endl;
using std::string;

class Data{
    public:
        //Costruttore
        Data(int day, int month, int year);

        //Funzioni Set
        void setGiorno(int day);
        void setMese(int month);
        void setAnno(int year);

        //Funzioni Get
        int getGiorno() const;
        int getMese() const;
        int getAnno() const;

        //Funzione che mostra la data nel seguente formato giorno/mese/anno
        void displayDate();
    private:
        int giorno, mese, anno;

};