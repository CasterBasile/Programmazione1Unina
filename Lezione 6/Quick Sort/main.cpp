#include "quickSort.h"

int main(){
    vector<int> A{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int dim=A.size();

    cout<<"Il vettore e' "<<endl;
    for(int i=0; i<dim; i++){
        cout<<A[i]<<" ";
    }
    
    quickSort(A, 0, dim-1);

    cout<<"\nIl vettore ordinato e' "<<endl;
    for(int i=0; i<dim; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}