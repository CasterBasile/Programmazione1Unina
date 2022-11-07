#include "ternePitagoriche.h"

void ternePitagoriche::calcoloTerne(){
    int a, b, c;
    for(int i=1; i<=500; i++){
        for(int j=1; j<=500; j++){
            for(int k=1; k<=500; k++){
                a=i*i;
                b=j*j;
                c=k*k;
                if(a+b==c){
                    cout<<i<<" - "<<j<<" - "<<k<<endl;
                }
            }
        }
    }
    
}