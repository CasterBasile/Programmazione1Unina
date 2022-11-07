#include "collegamentoLista.h"

using std::string;

int main(){
    collegamentoLista<string> L;
    L.addFront("ciao");
    L.addFront("a");
    L.addFront("tutti!");
    L.print();
    cout<<"\nInverto Ricorsivamente:"<<endl;
    L.Reverse(L.head);
    L.print();
    cout<<"\nInverto Iterativamente:"<<endl;
    L.ReverseIterative();
    L.print();


    return 0;
}