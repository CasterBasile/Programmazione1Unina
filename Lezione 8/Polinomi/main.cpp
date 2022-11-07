#include "polinomio.h"

int main(){
    double a[]={1, 2, 3, 5};
    Polinomio p1(a, 4);
    Polinomio p2(p1);
    Polinomio p3=p1+p2;

    
    cout<<"p1 e' "<<p1.stampa()<<endl<<"p2 e' "<<p2.stampa()<<endl;
    if(p1==p2)
        cout<<"I polinomi p1 e p2 sono uguali."<<endl;    
    else
        cout<<"I polinomi p1 e p2 sono diversi."<<endl;

    cout<<"Somma di polinomi: "<<p3.stampa()<<endl;
    

    return 0;
}