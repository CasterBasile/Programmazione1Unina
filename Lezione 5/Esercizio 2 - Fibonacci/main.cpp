#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int fibonacci(int); //Questo è il prototipo, possiamo non scrivere il nome del parametro in ingresso

int main(){
    for(int i=0; i<=10; ++i)
        cout<<"Fibonacci("<<i<<") "<<fibonacci(i)<<endl;

}

//Definisco la funzione fibonacci
int fibonacci(int num){
    if((num==0) || num==1){
        return num;     //se il numero è 0 o 1 devo restituire 0 o 1 senza fare calcoli
    }else{
        return fibonacci(num-1)+fibonacci(num-2);   //Altrimento devo sommare i due numeri precedenti della successione per ottenere il "nuovo"
    }
}