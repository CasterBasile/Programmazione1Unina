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
    
        void prelievo (float somma){
            if(somma>bilancio)
                cout<<"L'importo supera il bilancio"<<endl;
            else{
                bilancio-=somma;
                cout<<"Il bilancio attuale e' di "<<bilancio<<" euro. "<<endl;
            }
        }

        /*Devo implementare la funzione che mostra il nome dell'account e il bilancio.*/
        void displayAccount(Account profilo){                               //NOTA: La particolarità è che stiamo implementando una funzione che ha come
            cout<<"Nome Account: "<<profilo.getNome()<<endl;               //dato di ingresso una variabile di tipo account. Non serve definire una variabile
            cout<<"Bilancio: "<<profilo.getBilancio()<<endl;               //di questo tipo in private proprio perché andiamo solo a mostrare a video.
        }

    private:
        string nome;
        float bilancio{0};
        

};