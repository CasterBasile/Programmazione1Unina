#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int binarySearch(vector<int> &A, int sx, int dx, int num){

    if(sx>dx || num<A[sx] || num>A[dx]){
        cout<<"Il numero non e' presente nel vettore. "<<endl;
        return -1;
    }
    int mid=(sx+dx)/2;
    if(A[mid]==num){
        cout<<"Il numero si trova in posizione "<<mid<<endl;
        return mid;
    }
    if(A[mid]>num)
        return binarySearch(A, sx, dx, num);
    else
        return binarySearch(A, mid+1, dx, num);
        
}