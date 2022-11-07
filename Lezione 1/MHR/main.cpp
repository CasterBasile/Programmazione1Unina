#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    double MHR{0}, MHRTan{0}, MHRGell{0}, MHRNes{0}, min{0}, max{0};
    int years;
    string nome;

    cout<<"Inserisci il tuo nome: "<<endl;
    cin>>nome;
    cout<<"Inserisci la tua eta': "<<endl;
    cin>>years;
    MHR=220-years;                          //Formula per il calcolo dell'MHR standard
    min=MHR;
    max=MHR;
    cout<<"MHR Standard: "<<MHR<<endl;
    MHRTan=208-(0.7)*(years);              //Formula per il calcolo dell'MHR Tanaka
    if(MHRTan<min)
        min=MHRTan;
    if(MHRTan>max)
        max=MHRTan;
    cout<<"MHR Tanaka: "<<MHRTan<<endl;
    MHRGell=207-(0.7)*(years);            //Formula per il calcolo dell'MHR Gellish
    if(MHRGell<min)
        min=MHRGell;
    if(MHRGell>max)
        max=MHRGell;
    cout<<"MHR Gellish: "<<MHRGell<<endl;
    MHRNes=211-(0.64)*(years);            //Formula per il calcolo dell'MHR Nes
    if(MHRNes<min)
        min=MHRNes;
    if(MHRNes>max)
        max=MHRNes;
    cout<<"MHR Nes: "<<MHRNes<<endl;

    cout<<nome<<", il battito cardiaco deve essere compreso fra "<<min<<"BPM e "<<max<<" BPM."<<endl;
}