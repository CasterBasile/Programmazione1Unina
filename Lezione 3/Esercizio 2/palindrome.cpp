#include "palindrome.h"

Palindrome::Palindrome(int n){
    checkCifre(n);
}

int Palindrome::checkCifre(int n){

    if(n<10000 || n>99999){
        cout<<"Il numero da te inserito non e' composto da 5 cifre"<<endl;
        return 0;
    }else{
        numero=n;
        cout<<"Il numero da te inserito e' composto da 5 cifre"<<endl;
        checkPalindrome();        
        return 0;
    }
}

void Palindrome::checkPalindrome(){

        if(numero%10 == numero/10000){  //Controlla prima ed ultima cifra
            if(numero%100/10 == numero/1000%10){    //Controlla seconda e penultima cifra, non serve controllare la terza con la terza perché appunto è la stessa cifra
                    cout<<"Il numero da te inserito e' palindromo."<<endl;
            }else{
        cout<<"Il numero da te inserito non e' palindromo."<<endl;
            }
        }else{
        cout<<"Il numero da te inserito non e' palindromo."<<endl;
        }

}

//Un po' spaghetti code ma funziona, il procedimento è corretto, si potrebbe sistemare un po' la questione degli if...else innestati
