#include "BST.h"

int main(){
    //Alloco il vettore di elementi che faranno parte del mio albero
	vector<int> keys = {15, 10, 20, 8, 12, 16, 25};
    //Creo la radice e da qui creo l'albero
	Node* root = constructBST(keys);
    //Mostro l'albero con la funzione Inorder
    cout<<"Vettore: ";
	inorder(root);
    cout<<endl;

    //Ricerca
    int x;
    cout<<"Inserire numero da cercare: ";
    cin>>x;
    if(searchIterative(root, x))
        cout<<"Trovato.\n";
    else
        cout<<"Non trovato.\n";


	return 0;
}