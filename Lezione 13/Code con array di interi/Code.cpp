#include "Code.h"

Code::Code(int dimensione){
    n[dimensione]=0;
    dim=dimensione;
    head=0;
    tail=0;
}

void Code::enqueue(int var){
    if(!full()){
        n[tail]=var;
        tail++;
        cout<<"Tail: "<<tail<<"     Head: "<<head<<endl;
    }else{
        throw domain_error("Array pieno.");
    }
}

void Code::dequeue(){
    if(!empty()){
        n[head]=0;
        head++;
        cout<<"Tail: "<<tail<<"Head: "<<head<<endl;

    }else{
        throw domain_error("Non ci sono valori nell'array.");
    }
}

int Code::front() const{
    return n[tail];
}

int Code::size() const{
    return dim;
}

bool Code::empty() const{
    return head==tail;
}

bool Code::full() const{
    return (head==(tail+1%dim) || tail==dim);
}





