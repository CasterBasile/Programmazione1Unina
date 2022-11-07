//Provo soltanto a dichiarare la classe in questo file, l'implementazione la farò in seguito in un altro file
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class motorVehicle{
    public:
    //Dichiarazione delle funzioni membro
        motorVehicle(string costructor, string fuel, int years, string color, int capacity);
        void setCostruttore(string costructor);
        string getCostruttore() const;
        
        void setCarburante(string fuel);
        string getCarburante() const;
        
        void setAnno(int years);
        int getAnno() const;
        
        void setColore(string color);
        string getColore() const;
        
        void setCilindrata(int capacity);
        int getCilindrata() const;
        
        void displayCarDetails();

    
    private:
        string costruttore, carburante, colore;
        int annoCostruzione, cilindrata;

};