#ifndef POLINOMIO_H
#define POLINOMIO_H
#include <iostream>
#include <array>
#include <string>
#include <sstream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::ostringstream;
using std::string;

class Polinomio{
    friend bool operator==(const Polinomio &, const Polinomio &);

    public:
    //Costruttore
        Polinomio();
        Polinomio(double coefficienti[], int num);
        Polinomio(const Polinomio & sec);
    
    //Distruttore
        ~Polinomio();

    //Funzioni membro
        int gradi() const;  //Ottiene il grado del polinomio
        string stampa() const;
    
    //Operatori di assegnazione (Da realizzare mediante overloading)
        Polinomio & operator=(const Polinomio&);
        Polinomio & operator+=(const Polinomio&);
        Polinomio & operator*=(double);

    private:
        int dim;
        double * coeff;
};

Polinomio operator+(const Polinomio &, const Polinomio &);
Polinomio operator*(const Polinomio &, double);
Polinomio operator*(double, const Polinomio &);





#endif