#ifndef EBA_H
#define EBA_H
#include <cmath>
#include <array>
#include "Biscotti.h"
#include "CLinkedList.h"
using std::array;
using std::sqrt;
using std::pow;

class EBA{
    public:
        EBA(string n){
            nome=n;
        }

        void readFile();
        void toString();

        int getTotale() const{
            return totale;
        }
        
        float distanzaEuclidea(int a, int b);
        bool checkSimil();
        void grafoSimil();
        void stampa();

    private:
        int totale=0;
        float epsilon=115.50, distEuc;
        string nome;
        vector<Biscotti> biscotti;
        vector<CircleList<int>> grafo;
        int numEpsilonSimili[15]={0};
};


#endif