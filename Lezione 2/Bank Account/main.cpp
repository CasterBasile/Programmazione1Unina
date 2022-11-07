#include "account.h"    //Devo include il "file" dove sono presenti le dichiarazioni

int main(){
    Account var;
    string nome;

    cout<<"Il nome iniziale dell'account e' "<<var.getNome()<<endl;
    //Accediamo ad una funzione membro della classe con la dot-notation
    cout<<"Inserisci il nome dell'account: ";
    getline(cin, nome); /*Potevamo utilizzare anche cin, la differenza è che cin 
                        è un oggetto, getline è una funzione definita globalmente.
                        Inoltre getline accetta anche nomi separati
                        da uno spazio, cin no, accetta solo il primo nome (Motivo per
                        cui il prof. utilizza la funzione getline).*/

                        /*Ricorda: Quando chiamiamo una funzione, il programma "sospende"
                        il main. Terminata la funzione, continua da dove "aveva lasciato"*/
                        
    var.setNome(nome);  /*Quando abbiamo definito la funzione abbiamo anche
                        dichiarato quali sono le variabili che deve accettare
                        in ingresso. Quando andiamo a richiamare la funzione 
                        dobbiamo "passare" anche il valore*/

    cout<<"Il nome impostato e': "<<var.getNome()<<endl;

    return 0;
}