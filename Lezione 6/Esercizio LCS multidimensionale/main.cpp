#include <iostream>
#include <cstring>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Calcolo del valore massimo
int max(int a, int b){
    return(a > b) ? a:b;
}

int LCS(string a, string b){
    int l1=a.size();
    int l2=b.size();
    int matrice[l1+1][l2+1];
    for(int i=0; i<=l1; i++){
        for(int j=0; j<=l2; j++){
            if(i==0 || j==0)        //Se riga o colonna = 0
                matrice[i][j]=0;    //Perché riga e colonna devono essere tutti 0
            else if(a[l1-i]==b[l2-j]){  //Se i caratteri sono uguali
                matrice[i][j]=1+matrice[i-1][j-1];  //1+elemento in alto a sinistra della matrice (rispetto a dove siamo)
            }
            else{   //Se i caratteri sono diversi devi trovare il massimo fra i 3 valori "intorno"
                int x=matrice[i-1][j];
                int y=matrice[i][j-1];
                int z=matrice[i-1][j-1];
                matrice[i][j]=max(x, max(y,z));
            }
        }
    }
    //Stampa matrice
    cout<<"\nMatrice:\n";
    for(int i=0; i<=l1; i++){
        for(int j=0; j<=l2; j++){
            cout<<matrice[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
    return matrice[l1][l2];
}

int main(){
    string a, b;
    cout<<"Inserire prima parola: ";
    cin>>a;
    cout<<"Inserire seconda parola: ";
    cin>>b;

    cout<<"La sottosequenza piu' lunga fra "<<a<<" e "<<b<<" ha dimensione "<<LCS(a,b)<<endl;

    return 0;
}