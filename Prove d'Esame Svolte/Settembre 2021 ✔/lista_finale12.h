#ifndef LL_H
#define LL_H
#include <string>
#include <iostream>
#include <sstream>
template <typename tipo_dato> class LinkedList;

template <typename tipo_dato>
class Node
{
	friend class LinkedList<tipo_dato>;
	private:
		tipo_dato elem;
		Node<tipo_dato>* next;
};

template <typename tipo_dato>
class LinkedList
{
	public:
		LinkedList();
	    LinkedList(const LinkedList<tipo_dato>& l);
		~LinkedList();
		bool empty() const;
		void addFront(const tipo_dato& e);
		void removeFront();
		const tipo_dato& front() const;
		int size() const;
		void add(const tipo_dato& e); // Questa funzione deve essere modificata il base al contesto del programma
		std::string toString() const;
		tipo_dato operator[](int i);
	private:
		Node<tipo_dato>* head;	
};
#include "lista_finale12.cpp" // Per evitare errori di compilazione, includere il .cpp nel .h
#endif