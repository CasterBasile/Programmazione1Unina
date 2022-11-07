#include "MaxMin.h"

MaxMin::MaxMin(int a, int b, int c, int d, int e){
    Min(a,b,c,d,e);
    Max(a,b,c,d,e);
}

void MaxMin::Min(int a, int b, int c, int d, int e){

        minimo=a;

        if(minimo>b){
            minimo=b;
        }
        if(minimo>c){
            minimo=c;
        }
        if(minimo>d){
            minimo=d;
        }
        if(minimo>e){
            minimo=e;
        }

    cout<<"Il minimo e' "<<minimo<<endl;
}

void MaxMin::Max(int a, int b, int c, int d, int e){

        massimo=a;

        if(massimo<b){
            massimo=b;
        }
        if(massimo<c){
            massimo=c;
        }
        if(massimo<d){
            massimo=d;
        }
        if(massimo<e){
            massimo=e;
        }
    
    cout<<"Il massimo e' "<<massimo<<endl;
}

