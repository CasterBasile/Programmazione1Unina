#include "funzioni.h"

int main(){
    ifstream var{"file.txt", ios::in};
    if(!var){
        cerr<<"Il file non puo' essere aperto."<<endl;
        exit(EXIT_FAILURE);
    }

    int scelta=menu();
    while (scelta!=4){
        switch(scelta){
            case 1:
                cout<<"Utenti con 0 debiti: "<<endl;
                break;
            case 2:
                cout<<"Utenti che devono ricevere un rimborso: "<<endl;
                break;
            case 3:
                cout<<"Utenti con debiti: "<<endl;
                break;
            case 4:
                return 0;
        }
    

    string nome, cognome;
    double debito;

    while(!var.eof()){
        var>>nome>>cognome>>debito;
        if(display(scelta, debito)){
            output(nome, cognome, debito);
        }
    }
    cout<<endl<<endl;
    var.clear();
    var.seekg(0);
    scelta=menu();
}
    cout<<"Programma terminato."<<endl;
}