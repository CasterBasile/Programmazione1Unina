#include "binary.h"

int main(){
    vector<int> A{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num, dim=A.size();
    cout<<"Inserire numero da cercare: ";
    cin>>num;
    binarySearch(A, 0, dim-1, num);
    

    return 0;
}