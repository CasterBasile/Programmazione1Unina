#include <iostream>
using std::cout;
using std::endl;

int main(){
    int numRighe=5;

    for(int r=numRighe-1; r>=1; r--){
        for(int c=1; c<=numRighe-r; c++){
            cout<<" ";
        }
        for(int a=1; a<=(2*r)-1; a++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int r=1; r<=numRighe; r++){
        for(int c=numRighe-r; c>=1; c--){
            cout<<" ";
        }
        for(int a=1; a<=(2*r)-1; a++){
            cout<<"*";
        }
        cout<<endl;
    }



return 0;

}