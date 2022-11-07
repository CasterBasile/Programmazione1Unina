#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::setprecision;
using std::right;
using std::left;
using std::ios;
using std::fixed;
using std::showpoint;

void output(const string&, const string&, int);

int main(){
    ifstream var{"file.txt", ios::in};
    cout<<left<<setw(12)<<"Nome: "<<setw(12)<<"Cognome: "<<"Anni:\n"<<fixed<<showpoint;
    int anni;
    string nome, cognome;

    while(var>>nome>>cognome>>anni){
        output(nome, cognome, anni);
    }

    //cout<<"Nome: "<<nome<<" Cognome: "<<cognome<<"Anni: "<<endl;


}

void output(const string& nome, const string& cognome, int anni){
        cout<<left<<setw(12)<<nome<<setw(12)<<cognome<<setw(7)<<setprecision(2)<<right<<anni<<endl;
}