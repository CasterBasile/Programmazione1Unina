#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::invalid_argument;

#ifndef COORDINATE_H
#define COORDINATE_H

class Coordinate{
    public:
        explicit Coordinate(double=0.0, double=0.0); //Costruttore
        void setX(double);  //Funzione per impostare la coordinata X
        void setY(double);  //Funzione per impostare la coordinata Y
        double getX() const;
        double getY() const;
    private:
        double x, y;
};





#endif