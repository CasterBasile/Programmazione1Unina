#include "this.h"

int main(){
    int a;
    This var;
    cout<<"Inserire numero: ";
    cin>>a;
    var.setAnni(a);
    var.mostraAnni();

    return 0;
}