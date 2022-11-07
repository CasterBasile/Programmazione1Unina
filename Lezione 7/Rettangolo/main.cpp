#include "rettangolo.h"

int main(){
    Coordinate punto1{6.0, 10.0};
    Coordinate punto2{18.0, 10.0};
    Coordinate punto3{18.0, 20.0};
    Coordinate punto4{6.0, 20.0};
    Rettangolo ret{punto1, punto2, punto3, punto4, '-', '*'};
    cout<<"Altezza rettangolo: "<<ret.altezza()<<endl;
    cout<<"Larghezza rettangolo: "<<ret.larghezza()<<endl;
    cout<<"Perimetro rettangolo: "<<ret.perimetro()<<endl;
    cout<<"Area rettangolo: "<<ret.area()<<endl;
    cout<<"Disegno il rettangolo..."<<endl<<endl;
    ret.disegna();

    return 0;
}