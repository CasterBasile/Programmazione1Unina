//Con questo programma comincio ad usare header scritti in diversi "fogli"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*Conviene mettere la dichiarazione della classe in un .h, così che possano essere riutilizzate
facilmente*/
class Account{  //Camel-Case, utilizzo l'iniziale maiuscola
    public:
        //Definisco una funzione membro che imposta il nome dell'account nell'oggetto
        void setNome(string accountNome){  
            nome=accountNome;
        }

        //Definisco una funzione che mi "ritorna" il nome, per questo la dichiaro come string
        string getNome() const{ //Definire una funzione "const" significa definire una 
            return nome;        //funzione che non modifica l'oggetto per cui viene chiamata  
        }
    
    private:
        string nome{"-Non impostato-"}; /*Ho dichiarato la variabile nella sezione privata, quindi
                                        sarà accessibile solo dalle funzioni membro della classe*/
};  //Le classi terminano con un ;