/*Realizzare un programma per la gestione di un account bancario. Realizzare una classe con funzione setNome e getNome, deposito e getBilancio.
Utilizzare il costruttore.*/

#include "function.h"

int main(){
    
    int scelta{1};
    char choice{'s'};
    float somma;
    Account account1{"Castrese Basile", 500};       //Sto usando il costruttore
    Account account2{"Tizio Caio", 325.50};

    do{
    cout<<"Account presenti: \n \n";
    cout<<"Account 1: "<<account1.getNome()<<"  Bilancio: "<<account1.getBilancio()<<" euro."<<endl;
    cout<<"Account 2: "<<account2.getNome()<<"  Bilancio: "<<account2.getBilancio()<<" euro."<<endl;
    cout<<endl<<endl;

    cout<<"Menu':"<<endl;
    cout<<"1. Effettua un deposito."<<endl;
    cout<<"2. Mostra bilancio."<<endl;
    cout<<"3. Effettua un prelievo. "<<endl;

    do{
    cout<<"Inserire numero: (1-2-3)"<<endl;
    cin>>scelta;
    }while(scelta<1 && scelta>3);

    if(scelta==1){

        do{
        cout<<"Account 1 o 2? (1/2)"<<endl;
        cin>>scelta;
        if(scelta!=1 && scelta!=2)
            cout<<"Inserire numero corretto! \n \n"<<endl;
        }while(scelta!=1 && scelta!=2);

        if(scelta==1){
            cout<<"Somma da depositare? ";
            cin>>somma;
            account1.deposito(somma);
        }
        if(scelta==2){
            cout<<"Somma da depositare? ";
            cin>>somma;
            account2.deposito(somma);
        }

    }

    if(scelta==2){

        do{
        cout<<"Account 1 o 2? (1/2)"<<endl;
        cin>>scelta;
        if(scelta!=1 && scelta!=2)
            cout<<"Inserire numero corretto! \n \n"<<endl;
        }while(scelta!=1 && scelta!=2);

        if(scelta==1){
            cout<<account1.getNome()<<"  Bilancio: "<<account1.getBilancio()<<" euro."<<endl;
        }
        if(scelta==2){
            cout<<account2.getNome()<<"  Bilancio: "<<account2.getBilancio()<<" euro."<<endl;        
        }

    }    

    if(scelta==3){
                do{
        cout<<"Account 1 o 2? (1/2)"<<endl;
        cin>>scelta;
        if(scelta!=1 && scelta!=2)
            cout<<"Inserire numero corretto! \n \n"<<endl;
        }while(scelta!=1 && scelta!=2);

        cout<<"Inserire somma da prelevare: ";
        cin>>somma;

        if(scelta==1){
        account1.prelievo(somma);    
        }
        if(scelta==2){
        account2.prelievo(somma);    
        }

    }
    cout<<"Ripetere il programma?(s/n)"<<endl;
    cin>>choice;

    }while(choice=='s' || choice=='S');

    cout<<"Arrivederci! "<<endl;
    
        return 0;
}