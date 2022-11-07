#include "LCS.h"

int main(){
    string a="";
    string b="";
    LCS var;
    cout<<"Inserire prima stringa: ";
    cin>>a;
    cout<<"Inserire seconda stringa: ";
    cin>>b;

    cout<<"La lunghezza dell'LCS e' "<<var.longestCommon(a, b, a.length(), b.length())<<endl;
    return 0;
}