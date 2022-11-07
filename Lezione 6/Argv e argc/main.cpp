#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

/*
Esempio con Argv e Argc:
Quando esegui il programma, digita mediante linea di comando "esegui" + una serie di nomi.
Fatto questo, clicca invio. Il programma partirà con i dati da te inseriti e farà un confronto
nome per nome per verificare quanti nomi sono uguali.
*/
int main(int argc, char **argv){
int cont{0};
    for(int i=1; i<argc; i++){
        cout<<"Il nome e': "<<argv[i]<<endl;
        cout<<endl;
    }
    for(int i=1; i<argc; i++){
        for(int j=1; j<argc; j++){
            if(strcmp(argv[i],argv[j])==0 && i!=j){
            cout<<"Persona 1:"<<argv[i]<<"  Persona 2:"<<argv[j]<<endl;
            cont++;
            }
        }
    }

    cout<<cont<<" persone hanno lo stesso nome."<<endl;


    return 0;
}