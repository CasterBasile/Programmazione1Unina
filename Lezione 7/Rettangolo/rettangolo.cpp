#include "rettangolo.h"


Rettangolo::Rettangolo(Coordinate a, Coordinate b, Coordinate c, Coordinate d, char carRiem, char carPer){
    setCoordinate(a, b, c, d);
    setCarattereRiempimento(carRiem);
    setCaratterePerimetro(carPer);
}

void Rettangolo::setCoordinate(Coordinate a, Coordinate b, Coordinate c, Coordinate d){
    if(!((a.getY()==b.getY() && a.getX()==d.getX() && b.getX()==c.getX() && c.getY()==d.getY()))){
        throw invalid_argument("Le coordinate non formano un rettangolo.\n");
    }
    punto1=a;
    punto2=b;
    punto3=c;
    punto4=d;
}

double Rettangolo::altezza() const{
    return fabs(punto4.getY()-punto1.getY());   //fabs calcola il mobulo
}

double Rettangolo::larghezza() const{
    return fabs(punto2.getX()-punto1.getX());
}

double Rettangolo::perimetro() const{
    return 2*(altezza()+larghezza());
}

double Rettangolo::area() const{
    return altezza()*larghezza();
}

bool Rettangolo::quadrato() const{
    return altezza()==larghezza();
}

void Rettangolo::disegna() const{
    for(double y{25.0}; y>=0.0; --y){
        for(double x{0.0}; x<=25.0; ++x){
            if((punto1.getX()==x && punto1.getY()==y) || (punto4.getX()==x && punto4.getY()==y)){
                while(x<=punto2.getX()){
                    cout<<caratterePerimetro;
                    ++x;
                }
                cout<<'.';
            }
            else if(((x<=punto4.getX() && x>=punto1.getX())) && punto4.getY() >= y && punto1.getY()<=y){
                cout<<caratterePerimetro;

                for(++x; x<punto2.getX();){
                    cout<<carattereRiempimento;
                    ++x;
                }

                cout<<caratterePerimetro;
            }
            else{
                cout<<'.';
            }
        }
        cout<<'\n';
    }
}

void Rettangolo::setCarattereRiempimento(char carRiem){
    carattereRiempimento=carRiem;
}

void Rettangolo::setCaratterePerimetro(char carPer){
    caratterePerimetro=carPer;
}