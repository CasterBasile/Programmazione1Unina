#include <iostream>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostringstream;

class Data{
    public:
        Data(int=1, int=1, int=1); //Giorno, mese, anno;
        ~Data();
        const string stampa();
    private:
        int g, m, a;
};

class Persona{
    public:
        Persona(const string, const Data);  //Ecco la composizione di classi, il costruttore ha come argomento una variabile di tipo Data, che è un'altra classe
        ~Persona();
        const string stampa();
    private:
        string n;
        Data d;
};