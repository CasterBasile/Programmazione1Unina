#include "fibonacci.h"

Fibonacci::Fibonacci(int a){
    num1=a;
    num2=a+1;
}

void Fibonacci::sequenzaFibonacci(){
    cout<<"Numeri iniziali: "<<num1<<" e "<<num2<<endl;
    bool verifica=true;     //Come richiesto dall'esercizio
    long int v{0};
    
    while(verifica){
        v=num1+num2;
        num1=num2;
        num2=v;
        cout<<v<<endl;
        if(v>1000)
            verifica=false;         //Non è richiesto (anzi è richiesto di fare un ciclo infinito) ma l'ho messo 
                                    //per bloccarlo senza farlo in maniera forzata.
    }

}