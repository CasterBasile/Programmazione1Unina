#include <iostream>
//Le due librerie successive ci servono per implementare le funzioni rand()
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

class Dadi{
    public:
        int tiraDadi();
        void impostaStatus();
        void eseguiGioco();

    private:
        enum class Stato{VINTO, PERSO, CONTINUA};
        Stato var;
        int punteggio;
};