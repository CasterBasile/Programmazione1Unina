#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//Definisco la classe
class Account{
    
    public:
        //Costruttore
        Account(string accountNome, float accountBilancio){
            nome=accountNome;
            if(accountBilancio>0)               /*Ho messo questa condizione per fare in modo che il saldo sia maggiore di 0.
                                                Nel caso in cui venga inserito un valore minore, viene automaticamente impostato a 0.*/
                bilancio=accountBilancio;
        }

        //Funzione setNome
        void setNome(string accountNome){
            nome=accountNome;
        }

        //Funzione getNome che restituisce il nome
        string getNome() const{
            return nome;
        }

        //Funzione deposito che permette di effettuare un deposito, quindi deve ricevere in ingresso una somma
        void deposito(float somma){
            if(somma>0)
                bilancio+=somma;
            cout<<"Deposito effettuato con successo!"<<endl;
        }

        //Funzione che restituisce il bilancio
        float getBilancio(){
            return bilancio;
        }
    
    private:
        string nome;
        float bilancio{0};

};