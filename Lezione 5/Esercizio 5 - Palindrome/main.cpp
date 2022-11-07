#include "Palindrome.h"

int main(){
    string p;
    cout<<"Inserire parola: ";
    cin>>p;
    Palindrome var{p};
    var.risultato();

    return 0;

}