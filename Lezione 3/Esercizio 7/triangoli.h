#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Triangoli{

    public:
        Triangoli(char valore); //Non servirebbe il costruttore ma realizzo il programma 
                                //in modo che sia l'utente a scegliere il carattere
        void menu();
        void disegnoTriangoli();
    private:
        char v='*'; //Di default lo imposto come *, come chiesto dall'esercizio
        char s;  //Scelta, serve per il menù

};