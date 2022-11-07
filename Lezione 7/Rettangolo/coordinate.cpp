#include "coordinate.h"

Coordinate::Coordinate(double coordinataX, double coordinataY){
    setX(coordinataX);
    setY(coordinataY);
}

void Coordinate::setX(double coordinataX){
    if(coordinataX<0.0 || coordinataX>20.0)
        throw invalid_argument("La coordinata deve essere compresa fra 0.0 e 20.0");
    else
        x=coordinataX;
}

void Coordinate::setY(double coordinataY){
    if(coordinataY<0.0 || coordinataY>20.0)
        throw invalid_argument("La coordinata deve essere compresa fra 0.0 e 20.0");
    else
        y=coordinataY;
}

double Coordinate::getX() const{
    return x;
}

double Coordinate::getY() const{
    return y;
}