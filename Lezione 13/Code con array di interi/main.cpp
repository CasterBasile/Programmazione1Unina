#include "Code.h"

int main(){
    int dimensione=7;
    Code var{dimensione};
    var.enqueue(1);
    cout<<var.front()<<endl;
    var.enqueue(2);
    cout<<var.front()<<endl;
    var.enqueue(3);
    cout<<var.front()<<endl;
    var.enqueue(4);
    cout<<var.front()<<endl;
    var.enqueue(5);
    cout<<var.front()<<endl;
    var.enqueue(6);
    cout<<var.front()<<endl;
    var.enqueue(7);    


    return 0;
}