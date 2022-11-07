#include "BST.h"

int main(){

    //Alloco il vettore di elementi che faranno parte del mio albero
	vector<int> keys = {15, 10, 20, 8, 12, 16, 25};
    cout<<"[";
    for(int i=0; i<keys.size(); ++i){
        if(i<keys.size()-1)
            cout<<keys[i]<<"|";
        else
            cout<<keys[i];
    }
    cout<<"]";
    //Creo la radice e da qui creo l'albero
	Node* root = constructBST(keys);


    cout<<endl;

    //Ricerca
    int x;
    cout<<"Inserire numero da cercare: ";
    cin>>x;
    if(searchIterative(root, x))
        cout<<"Trovato.\n";
    else
        cout<<"Non trovato.\n";

    //Mostro l'albero con la funzione Preoder
    cout<<"\nAttraversamento Preorder: ";
	Preorder(root);
    //Mostro l'albero con la funzione Inorder
    cout<<"\nAttraversamento Inorder: ";
	Inorder(root);
    //Mostro l'albero con la funzione Postorder
    cout<<"\nAttraversamento Postorder: ";
    Postorder(root);
    cout<<endl;


	return 0;
}