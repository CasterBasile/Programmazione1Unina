#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){
    double peso{0}, altezza{0};

    cout<<"Inserisci il tuo peso in Kg: "<<endl;
    cin>>peso;
    cout<<"Inserisci la tua altezza in metri (m): "<<endl;
    cin>>altezza;
    cout<<endl<<endl;
    cout<<"Il tuo peso e' "<<peso<<" Kg."<<endl<<"La tua altezza e' "<<altezza<<" m."<<endl;
    double BMI{peso/pow(altezza,2)};
    cout<<"Il tuo BMI e' "<<BMI<<endl;
    if(BMI<18.5)
        cout<<"Sei sottopeso :/ "<<endl;
    if(BMI>=18.5 && BMI<=24.9)
        cout<<"Sei normopeso! "<<endl;
    if(BMI>=25 && BMI<=29.9)
        cout<<"Sei sovrappeso :| "<<endl;
    if(BMI>=30)
        cout<<"Sei obeso :( "<<endl;

    return 0;    
}