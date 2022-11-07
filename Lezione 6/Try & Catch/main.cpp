#include <iostream>
#include <stdexcept> //Per generare le eccezioni

/*Esempio Try & Catch:
Try & Catch servono SOLO per fare il "debug" e non per scrivere l'intervallo
dei valori da poter inserire. Quindi, in Try scegli dei valori da mandare ad
una funzione oppure ad una variabile, seguita da if in modo da generare 
l'eccezione che deve essere intercettata da Catch che stampa a video l'errore.

NOTA: L'eccezione generata dal THROW e intercettata da CATCH è proprio una 
variabile quindi si passa il riferimento a Catch. Di seguito un esempio.
*/

/*TRACCIA PROGRAMMA DI PROVA:
Viene inserito un numero in input e se il numero è compreso fra 20 e 50, il 
programma genera un'eccezione.
*/

using std::cout;
using std::cin;
using std::endl;
using std::invalid_argument;

void setNum(int num);
void setNum(int num){
    if(num>=20 && num<=50){
        throw invalid_argument("Non puoi inserire un numero compreso fra 20 e 50.\n"); //Parentesi FONDAMENTALI
    }else{
        cout<<"Tentativo consentito!!"<<endl;
    }
}

int main(){

    int a{0};
    cout<<"Inserire un numero: "<<endl;
    cin>>a;
    setNum(a);
    cout<<"Di seguito i parametri inseriti nel try: "<<endl;
    try{
        /*Avremmo potuto dichiarare anche una variabile all'interno di try, ad esempio:
        se avessimo avuto una classe avremmo potuto creare una classe stesso qui dentro,
        finalizzata al solo tentativo, senza modificare le altre.*/
        setNum(500);
        setNum(34);
        setNum(680);
    }
    catch(invalid_argument &var){
        cout<<"Eccezione: "<<var.what()<<endl;
    }

    
    return 0;
}