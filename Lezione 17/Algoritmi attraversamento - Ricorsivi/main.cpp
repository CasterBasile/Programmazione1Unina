#include "funzioni.h"
#include <vector>

int main() {
	BstNode* root = NULL;  //Creiamo un albero vuoto
	cout<<endl;
	vector<int> v{13, 2, 7, 5, 80, 6, 20, 15, 17, 3, 0};		//Creo un vettore di interi...
	
	//Mostro il vettore
	cout<<"Vettore: ";
	cout<<"[";
	for(int i=0; i<v.size(); ++i){
		if(i<v.size()-1)
			cout<<v[i]<<"|";		
		else
			cout<<v[i]<<"]"<<endl;
	}

	cout<<"\nInserisco gli elementi del vettore nel Binary Search Tree."<<endl;
	for(int i=0; i<v.size(); ++i) root = Insert(root,v[i]);	//...creo il BST composto dagli elementi del vettore
	cout<<"Fatto!"<<endl;

	int n;
	cout<<"\nInserire numero da cercare:\n";
	cin>>n;
	//Se il numero viene trovato allora viene mostrato il messaggio "Trovato"
	if(Search(root,n)) cout<<"Trovato.\n";
	else cout<<"Non trovato.\n";

	cout<<"\nAttraversamento Preorder: ";
	Preorder(root);
	cout<<"\nAttraversamento Inorder: ";
	Inorder(root);
	cout<<"\nAttraversamento Postorder: ";
	Postorder(root);

	return 0;
}