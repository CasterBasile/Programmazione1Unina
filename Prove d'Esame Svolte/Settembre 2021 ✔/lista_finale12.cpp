#ifndef LL_CPP
#define LL_CPP
#include "lista_finale12.h"

template <typename tipo_dato>
LinkedList<tipo_dato>::LinkedList()
:head(nullptr)
{

}
template <typename tipo_dato>
LinkedList<tipo_dato>::LinkedList(const LinkedList<tipo_dato>& l)
{
	head = nullptr; //head inizializzato
	tipo_dato* v = new tipo_dato[l.size()];
	Node<tipo_dato>* cursore = l.head;
	// Copio la lista l in un vettore
	int i = 0;
	while( cursore != nullptr)
	{
		v[i] = cursore->elem;
		i++;
		cursore = cursore->next;
	}
	// Scorro il vettore v al contrario e aggiungo ciascun elemento alla testa della lista
	for(i = l.size()-1; i >= 0; i--)
	{
		addFront(v[i]);
	}
	/*
		l = 1 2 3
		v = 1 2 3
		newlist = 1 2 3
		
		
	*/
}


template <typename tipo_dato>
bool LinkedList<tipo_dato>::empty() const
{
	if(head == nullptr)
		return true;
	else
		return false;
		
	// return head == nullptr;
}

template <typename tipo_dato>
void LinkedList<tipo_dato>::addFront(const tipo_dato& e)
{
	Node<tipo_dato>* n = new Node<tipo_dato>;
	n->elem = e;
	n->next = head;
	head = n;
}

template <typename tipo_dato>
const tipo_dato& LinkedList<tipo_dato>::front() const
{
	return head->elem;
}

template <typename tipo_dato>
void LinkedList<tipo_dato>::removeFront()
{
	if(!empty())
	{
		Node<tipo_dato>* old = head;
		head = head->next;
		delete old;
	}
}


template <typename tipo_dato>
LinkedList<tipo_dato>::~LinkedList()
{
	while(!empty())
	{
		removeFront();
	}
}

template <typename tipo_dato>
int LinkedList<tipo_dato>::size() const
{
	int n = 0;
	const Node<tipo_dato>* cursor = head;
	while(cursor != nullptr)
	{
		n++;
		cursor = cursor->next;
	}
	
	return n;
}
template <typename tipo_dato>
void LinkedList<tipo_dato>::add(const tipo_dato& e)
{
	if(head == nullptr || e < head->elem)
	{
		addFront(e);
	}
	else
	{
		// Questa parte potrebbe dover essere modificata in base al tipo di elemento che
		// contiene la lista
		Node<tipo_dato>* nuovo = new Node<tipo_dato>;
		nuovo->elem = e;
		
		// Scorro la lista per trovare il punto in cui inserire il nodo
		Node<tipo_dato>* cursore = head;
		while((cursore->next != nullptr) && (cursore->next->elem<e )) // while((cursore->link != NULL) && (e.get_eta() > cursore->l->e.get_eta()))
			cursore = cursore->next;
		// Al termine del ciclo while ho trovato il nodo (puntato da cursore) dopo il quale inserire il nuovo nodo.
			
		// Inserisco il nodo
		nuovo->next = cursore->next; // Il nuovo nodo punta al nodo successivo a quello puntato dal cursore
		cursore->next = nuovo;	// Il cursore punta al nuovo nodo
	}
}

template <typename tipo_dato>
std::string LinkedList<tipo_dato>::toString() const
{
	std::ostringstream out;
	const Node<tipo_dato>* cursor = head;;
	out << "Header --> ";
	while(cursor != nullptr)
	{
		out << cursor->elem << " --> ";
		cursor = cursor->next;
	}
	out << " NULL ";
	return out.str();
}
template<typename tipo_dato>
tipo_dato LinkedList<tipo_dato>::operator[](int i)
{
  const Node<tipo_dato>* cursor=head;
  for(int j=0;j<i;j++)
  {
  	cursor=cursor->next; //mando il cursore in avanti
  }
  return cursor->elem; //restituisco l'elemento a cui punta il cursore
}
#endif