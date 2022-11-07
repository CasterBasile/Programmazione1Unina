#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    float value{0}, temp{0};
    char scelta{'c'};
 
    cout<<"-----CONVERTITORE TEMPERATURA-----"<<endl<<endl;

    do{
    cout<<"In che unita' di misura e' la tua temperatura? Celsius o Fahrenheit (C/F)? "<<endl;
    cin>>scelta;

    if(scelta!='C' && scelta!='c' && scelta!='F' && scelta!='f')
        cout<<"Inserisci C o F"<<endl;

    }while(scelta!='C' && scelta!='c' && scelta!='F' && scelta!='f');
    
    cout<<"Inserisci la temperatura in "<<scelta<<": "<<endl;
    cin>>value;

    if(scelta=='c' || scelta=='C'){
       temp=(1.8)*value + 32;
       cout<<value<<" gradi Celsius sono "<<temp<<" Fahrenheit."<<endl;
       return 0;
    }else{
       temp=(0.55)*(value - 32);
       cout<<value<<" gradi Fahrenheit sono "<<temp<<" Celsius."<<endl;
       return 0;
    }

}