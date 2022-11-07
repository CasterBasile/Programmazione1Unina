#include "CLinkedList.h"

int main(){
    CircleList<string> Nomi;
    Nomi.add("Alberto");
    Nomi.add("Bruno");
    Nomi.add("Castrese");
    Nomi.add("Davide");
    cout<<Nomi.toString()<<endl;

    return 0;

}