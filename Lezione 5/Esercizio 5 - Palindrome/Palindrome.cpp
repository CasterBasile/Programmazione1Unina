#include "Palindrome.h"

Palindrome::Palindrome(string & nome){
    n=nome;
    setLength();
    checkPalindrome();
}

//Imposta la lunghezza della stringa
void Palindrome::setLength(){
    l=n.length();
}

void Palindrome::checkPalindrome(){
    if(n[i]==n[l-1] && v==true && i<l-1){
        v=true;
        i++;   //Al primo "giro" confronta la prima lettera con l'ultima, al secondo "giro" la seconda lettera con la penultima e così via fino ad arrivare a metà
        l--;
        checkPalindrome();
    }
    if(n[i]!=n[l-1])
        v=false;
}

void Palindrome::risultato(){
    if(v==true){
        cout<<n<<" e' palindromo."<<endl;
    }
    if(v==false){
        cout<<n<<" non e' palindromo."<<endl;
    }
}