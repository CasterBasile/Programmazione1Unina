#include "collegamentoLista.h"

using std::string;

int main(){
    collegamentoLista<int> L;
    L.addFront(1);
    L.addFront(2);
    L.addFront(3);
    cout<<L.front()<<"\n";
    L.removeFront();
    cout<<L.front()<<endl;
    cout<<"La dimensione e' "<<L.getSize()<<endl;


    return 0;
}