#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::runtime_error;

class StringNodo{
    private:
        string elem;
        StringNodo* next; //Collegamento al prossimo nodo
    
        friend class StringListaCollegata;      //La funzione StringListaCollegata può accedere ai privati di StringNodo
};