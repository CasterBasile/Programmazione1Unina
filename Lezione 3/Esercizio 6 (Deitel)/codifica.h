#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Codifica{
    
    public:
        Codifica(int numero);
        void menu();
        void separaNumeri();
        void codificaNumero();
        void decodificaNumero();
    
    private:
        int n;          //Questo sarà il numero da codificare/decodificare
        int a,b,c,d;    //Ognuna di queste variabili sarà una cifra di n
        bool verifica=true;

};