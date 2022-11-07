#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>
using namespace std;

//Classe nodo, per ogni nodo conserviamo l'elemento e l'indicazione per il nodo sx o dx (se presente, sennò nullptr);
class Node{
	public:	
		int data;
		Node* left = nullptr;
        Node *right = nullptr;
		Node *parent = nullptr;

		Node() {}
		Node(int data): data(data) {}
};

#endif
