#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostringstream;

class Time{
    public:
        //Dichiaro le funzioni di tipo Time, cioè il nome della classe
        Time& setGiorno(string);    
        Time& setOre(int);
        Time& setMinuti(int);
        Time& setSecondi(int);
        string stampa();
    private:
        string giorno;
        int ore, minuti, secondi;
};