#include "ArrayStack.h"

int main(){
    ArrayStack<string> myStack;
    myStack.push("Ciao");
    myStack.push("Sono");
    cout<<myStack.top()<<endl;
    myStack.pop();
    cout<<myStack.top()<<endl;


    return 0;
}