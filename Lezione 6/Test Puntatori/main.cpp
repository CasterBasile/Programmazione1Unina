#include <iostream>
using std::cout;
using std::endl;

void cubo (int *n){
    *n=*n * *n * *n;
}

int main(){
    int *countPtr{nullptr};
    int count;
    count=7;
    countPtr=&count;
    *countPtr=10;
    cout<<"L'indirizzo di count e' "<<&count<<endl;
    cout<<"Il valore di countPtr e' "<<countPtr<<endl;
    cout<<"Il valore di count e' "<<count<<endl;
    cout<<"Il valore di *countPtr e' "<<*countPtr<<endl;
    cout<<"Calcolo il cubo di count..."<<endl;
    cubo(&count);
    cout<<"Il cubo di count e' "<<count<<endl;
    
    return 0;
}