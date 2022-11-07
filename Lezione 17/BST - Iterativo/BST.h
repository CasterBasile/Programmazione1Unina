#include "Node.h"

//Funzione inorder per l'attraversamento dell'albero
void inorder(Node* root)
{
	if (root == nullptr) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

//Funzione per l'inserimento di un elemento all'interno dell'albero, in questo caso la funzione è iterativa.
//Passiamo la radice per riferimento.
void insertIterative(Node*& root, int key)
{
	//Partiamo dal nodo radice
	Node *curr = root;

	//Puntatore per memorizzare il genitore del nodo corrente
	Node *parent = nullptr;

	//Se l'albero è vuoto crea un nuovo nodo e impostalo come nodo radice
	if (root == nullptr)
	{
		root = new Node(key);
		return;
	}

	//Attraversa l'albero e trova il nodo genitore dell'elemento da aggiungere
	while (curr != nullptr)	//Ripeti il ciclo finché il cursore è diverso da nullptr
	{
		//Aggiornare il genitore del nodo corrente
		parent = curr;

		// Se l'elemento da aggiungere è minore del nodo corrente allora
		// vai al sottoalbero sinistro; altrimenti, vai al sottoalbero destro.
		if (key < curr->data) {
			curr = curr->left;
		}
		else {
			curr = curr->right;
		}
	}

	//Costruisci un nodo e assegnalo al relativo puntatore genitore
	if (key < parent->data) {
		parent->left = new Node(key);
	}
	else {
		parent->right = new Node(key);
	}
}

//Funzione per la ricerca iterativa, ricerca iterativamente a partire dalla radice
bool searchIterative(Node* root, int key){
	while(root != nullptr){	//Ripeti finché la radice non è nullptr, cioé finché non è vuota
		if(key > root->data)	//Se l'elemento da cercare è maggiore dell'elemento presente nel nodo...
			root = root->right;	//...allora vai a destra.
		else if (key < root->data)	//Se l'elemento da cercare è minore dell'elemento presente nel nodo...
			root = root->left;		//...allora vai a sinistra.
		else
			return true;			//L'ultimo caso è se l'elemento è uguale, in questo caso allora restituisci TRUE
	}
	return false;					//Restituisci FALSE se l'elemento non è stato trovato
}

/*
Questo sarebbe il costruttore, quello che fa è costruire un albero a partire da un vettore.
Praticamente invoca in maniera iterativa la funzione insertIterative per tutti gli elementi 
del vettore.
*/

Node* constructBST(vector<int> const &keys)
{
	Node* root = nullptr;
	for (int key: keys) {
		insertIterative(root, key);
	}
	return root;
}

