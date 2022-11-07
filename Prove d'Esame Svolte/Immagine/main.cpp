#include "Immagine.h"

int main(){
    Immagine i(5,5);

    i.setValueR(0, 0, 1);
    i.setValueG(0, 0, 2);
    i.setValueB(0, 0, 4);

    i.setValueR(0, 1, 5);
    i.setValueG(0, 1, 1);
    i.setValueB(0, 1, 7);

    i.setValueR(0, 2, 9);
    i.setValueG(0, 2, 0);
    i.setValueB(0, 2, 2);

    i.setValueR(1, 0, 3);
    i.setValueG(1, 0, 1);
    i.setValueB(1, 0, 5);

    i.setValueR(1, 1, 6);
    i.setValueG(1, 1, 1);
    i.setValueB(1, 1, 2);

    i.setValueR(1, 2, 3);
    i.setValueG(1, 2, 9);
    i.setValueB(1, 2, 2);

    i.setValueR(2, 0, 7);
    i.setValueG(2, 0, 8);
    i.setValueB(2, 0, 2);

    i.setValueR(2, 1, 6);
    i.setValueG(2, 1, 2);
    i.setValueB(2, 1, 6);

    i.setValueR(2, 2, 5);
    i.setValueG(2, 2, 1);
    i.setValueB(2, 2, 0);

    i.setValueR(3, 0, 3);
    i.setValueG(3, 0, 5);
    i.setValueB(3, 0, 8);

    i.setValueR(3, 1, 3.0);
    i.setValueG(3, 1, 1);
    i.setValueB(3, 1, 0);

    i.setValueR(3, 2, 2);
    i.setValueG(3, 2, 1);
    i.setValueB(3, 2, 8);

    i.setValueR(3, 3, 3);
    i.setValueG(3, 3, 1);
    i.setValueB(3, 3, 0.);

    i.setValueR(4, 0, 3);
    i.setValueG(4, 0, 1);
    i.setValueB(4, 0, 1);

    i.setValueR(4, 1, 2);
    i.setValueG(4, 1, 8);
    i.setValueB(4, 1, 2);

    i.setValueR(4, 2, 2);
    i.setValueG(4, 2, 1);
    i.setValueB(4, 2, 3);

    i.setValueR(4, 3, 3);
    i.setValueG(4, 3, 2);
    i.setValueB(4, 3, 8);

    i.setValueR(4, 4, 3);
    i.setValueG(4, 4, 1);
    i.setValueB(4, 4, 7);


    cout<<i.toString()<<endl;
    cout<<"FILTRO"<<endl;
    i.filter();

    cout<<i.toString();


}