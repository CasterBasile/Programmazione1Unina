#ifndef RETTANGOLO_H
#define RETTANGOLO_H
#include "coordinate.h"

class Rettangolo{
    public:
        explicit Rettangolo(Coordinate=Coordinate(0.0, 1.0), Coordinate= Coordinate(1.0, 1.0), Coordinate=Coordinate(1.0, 0.0), Coordinate=Coordinate(0.0, 0.0), char='*', char='*');
        void setCoordinate(Coordinate, Coordinate, Coordinate, Coordinate);
        double altezza() const;
        double larghezza() const;
        double perimetro() const;
        double area() const;
        bool quadrato() const; //Verifica se si tratta di un quadrato
        void disegna() const;
        void setCaratterePerimetro(char);
        void setCarattereRiempimento(char);
    private:
        Coordinate punto1;
        Coordinate punto2;
        Coordinate punto3;
        Coordinate punto4;
        char carattereRiempimento;
        char caratterePerimetro;
};

#endif
