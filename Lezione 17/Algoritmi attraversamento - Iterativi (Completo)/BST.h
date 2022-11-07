#include "Node.h"
#include <stack>

void Preorder(Node* root){
	if(root==nullptr) return;	//Se l'albero è vuoto termina la funzione
	
	stack<Node*> s;	//Utilizziamo lo stack per accedere agli indirizzi
	s.push(root);	//Inserisci la radice nello stack
	while(!s.empty()){	//Finché lo stack non è vuoto
		Node* curr = s.top();	//estrai un nodo dallo stack e stampalo
		s.pop();
		cout<<curr->data<<" ";
		if(curr->right)	//Inserisce nello stack il figlio destro del nodo
			s.push(curr->right);
		if(curr->left)	//Inserisce nello stack il figlio sinistro del nodo
			s.push(curr->left);
	}
}

void Inorder(Node* root){
	stack<Node*> s;	//Anche in questo caso utilizziamo uno stack
	Node *curr = root;	//Settiamo il nodo "cursore" alla radice
	while(curr != nullptr || !s.empty()){	//Ripeti questo ciclo finché il nodo "cursore" non è nullo e lo stack non è vuoto
		while(curr != nullptr){	//Finché il cursore non è vuoto...
			s.push(curr);	//...posiziona il puntatore a un nodo dell'albero sullo stack prima di attraversare il sottoalbero sinistro del nodo
			curr=curr->left;
		}
		//A questo punto il cursore deve essere nullo
		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		//Abbiamo visitato il nodo e il suo sottoalbero sinistro, adesso visitiamo il destro
		curr=curr->right;
	}
}

//In questo caso useremo 2 stack
void Postorder(Node* root){
	if(root==nullptr) return; //Termina se l'albero è vuoto

	//Crea uno stack vuoto e inserisci il nodo radice
	stack<Node*> s;
	s.push(root);
	//Creiamo un altro stack per memorizzare l'attraversamento
	stack<int> out;

	while(!s.empty()){	//Ripeti finché lo stack non è vuoto
		//Estrai un nodo dallo stack e inserisci i dati nello stack di output
		Node* curr = s.top();	
		s.pop();
		out.push(curr->data);
		//Inserisci il "figlio" sinistro e destro del nodo nello stack
		if(curr->left)
			s.push(curr->left);
		if(curr->right)
			s.push(curr->right);
	}
	//Stampiamo l'attraversamento
	while(!out.empty()){
		cout<<out.top()<<" ";
		out.pop();
	}
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

//Ricerca del massimo
int maximum(Node* root){
	Node* current = root;
	while(current->right!= nullptr)
		current=current->right;
	
	return (current->data);
}

//Ricerca del minimo
int minimum(Node* root){
	Node* current = root;
	while(current->left!= nullptr)
		current=current->left;
	
	return (current->data);
}

//Ricerca del nodo che contiene il valore massimo
Node* maximumNode(Node* root){
	Node* current = root;
	while(current->right!= nullptr)
		current=current->right;
	
	return current;
}

//Ricerca del nodo che contiene il nodo minimo
Node* minimumNode(Node* root){
	Node* current = root;
	while(current->left!= nullptr)
		current=current->left;
	
	return current;
}

//Ricerca del predecessore
Node* predecessore(Node* x){
	Node* prev=nullptr;
	if(x->left){
		prev=maximumNode(x->left);
	}else{
		prev=x->parent;
		while(prev->left==x){
			x=prev;
			prev=x->parent;
		}
	}
	return prev;
}

//Ricerca del successore
Node* successore(Node* x){
	Node* succ=nullptr;
	if(x->right){
		succ=minimumNode(x->right);
	}else{
		succ=x->parent;
		while(succ->right==x){
			x=succ;
			succ=x->parent;
		}
	}
	return succ;
}