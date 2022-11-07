#include "classi.h"

int main(){
    Data var1{21, 6, 2000};
    Persona p1{"Castrese", var1};
    cout<<p1.stampa()<<endl;

    return 0;
}