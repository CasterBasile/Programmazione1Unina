// Binary Search Tree - Implementazione in C++
#include "BstNode.h"

//Funzione che crea un nuovo nodo
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;					//Ogni elemento è un nuovo nodo, cioé per ogni elemento aggiunto un nodo
	newNode->left = newNode->right = nullptr;	//Inizialmente non ha elementi né a destra né a sinistra
	return newNode;							//Restituisco il nodo appena creato. A chi? alla funzione Insert.
}

//Inserisce l'elemento all'interno del BST
BstNode* Insert(BstNode* root,int data) {	//Questa funzione richiede la radice dell'albero e l'elemento da aggiungere
	if(root == nullptr) { //Albero vuoto
		root = GetNewNode(data);	//Se l'albero è vuoto allora crea un nuovo nodo con l'elemento
	}
	//Se l'elemento è minore o uguale della radice, inserire l'elemento nel sottoalbero di sinistra
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	//altrimenti, inserisci nel sottoalbero di destra
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}

//Funzione per cercare un elemento nell'albero, ritorna TRUE se il valore e' stato trovato, FALSE se non e' stato trovato.
bool Search(BstNode* root,int data) {
	if(root == nullptr) {	//Se la radice è NULL significa che l'albero è vuoto...
		return false;		//...quindi ritorna FALSE, cioè l'elemento non è stato trovato.
	}
	else if(root->data == data) {	//Se la radice è uguale all'elemento da cercare...
		return true;				//...ritorna TRUE, cioè l'elemento è stato trovato.
	}
	else if(data <= root->data) {		//Se l'elemento è minore o uguale dell'elemento presente nella radice...
		return Search(root->left,data);	//...richiama ricorsivamente la stessa funzione Search con dati di ingresso la radice sinistra e l'elemento da cercare.
	}
	else {
		return Search(root->right,data); //Altrimenti, cioè se l'elemento è maggiore o uguale dell'elemento presente nella radice, richiama ricorsivamente
	}									 //la stessa funzione con dati di ingresso la radice destra e l'elemento da cercare.
}