#include "binary.h"

int main(){
    vector<int> A{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;
    
    cout<<"Inserire numero da cercare: ";
    cin>>num;

    binarySearch(A, num); 

    return 0;
}