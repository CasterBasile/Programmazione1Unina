#include "DLinkedList.h"

int main(){
    DLinkedList<string> L;
    L.addFront("Castrese");
    L.addFront("Basile");
    L.addFront("21 anni");

    cout<<L.toString()<<endl;
}