#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//Definisco la classe
class Account{
    
    public:
        Account(string accountNome, float accountBilancio){
            nome=accountNome;
            if(accountBilancio>0)
                bilancio=accountBilancio;
        }

        void setNome(string accountNome){
            nome=accountNome;
        }

        string getNome() const{
            return nome;
        }

        void deposito(float somma){
            if(somma>0)
                bilancio+=somma;
            cout<<"Deposito effettuato con successo!"<<endl;
        }

        float getBilancio(){
            return bilancio;
        }
    
        /*Questo esercizio richiedeva l'implementazione di questa funzione. Quello che deve fare è sostanzialmente ricevere in ingresso
        una somma da prelevare, verificare che essa sia maggiore del bilancio e ridurre il bilancio della somma desiderata.*/
        void prelievo (float somma){
            if(somma>bilancio)
                cout<<"L'importo supera il bilancio"<<endl;
            else{
                bilancio-=somma;
                cout<<"Il bilancio attuale e' di "<<bilancio<<" euro. "<<endl;
            }
        }

    private:
        string nome;
        float bilancio{0};

};