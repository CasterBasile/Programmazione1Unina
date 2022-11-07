#include "function.h"

void setMat1(array<array<int, col>,rig> &mat1){
    cout<<"Riempimento prima matrice..."<<endl;
    for(auto &i: mat1){
        for(auto &j:i){
            cin>>j;
        }
        cout<<endl;
    }
}

void setMat2(array<array<int, col>,rig> &mat2){
    cout<<"Riempimento seconda matrice..."<<endl;
    for(auto &a: mat2){
        for(auto &b:a){
            cin>>b;
        }
        cout<<endl;
    }
}

void getMat(array<array<int, col>,rig> &mat1){
    cout<<"La matrice e'..."<<endl;
    for(auto &i: mat1){
        for(auto &j:i){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    cout<<endl;

}

void getProd(array<array<int, col>,rig> &mat1, array<array<int, col>,rig> &mat2){
    int somma{0}; //Somma prodotti
    int righe{0}, colonne{0};
    array<array<int, col>,rig> mat3;
    for(int i=0; i<rig; i++){ //Con questo scorro le righe della prima matrice
        for(int a=0; a<rig; a++){  //Con questo scorro le righe della seconda matrice
            for(int j=0; j<col; j++){ //Con questo scorro le colonne della prima matrice,non posso scorrere le colonne della seconda matrice sennò non funziona
                somma+=((mat1[i][j])*(mat2[j][a]));
            }
            mat3[righe][colonne]=somma;
            somma=0;
            colonne++;
            if(colonne>col-1){
                righe++;
                colonne=0;
            }
        }
    }
    cout<<"Il prodotto fra le due matrici e' "<<endl;
    getMat(mat3);
}