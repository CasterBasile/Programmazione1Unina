#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::ios;
using std::ofstream;
using std::string;

int main(){
    cout<<"Apro il file."<<endl<<endl;
    ofstream var{"file.txt", ios::out};
    string nome, cognome;
    int anni;
    int i=0;
    cout<<"Inserire nome: "<<endl;
    cin>>nome;
    cout<<"Inserire cognome: "<<endl;
    cin>>cognome;
    cout<<"inserire anni: "<<endl;
    cin>>anni;
    cout<<"Scrivo su file..."<<endl;
    var<<nome<<' '<<cognome<<' '<<anni<<endl;
    cout<<"Chiudo il file..."<<endl;
    var.close();
    cout<<"File chiuso.";

    return 0;
}