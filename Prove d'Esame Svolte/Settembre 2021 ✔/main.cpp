#include <iostream>
#include <vector>
#include "Pagina.h"
#include "lista_finale12.h"

#define DELTA 4
using std::cout;
using std::endl;
using std::vector;
int rank_update(vector<Pagina> v)
{
int ris=0;
int NewPeso;
for(int i=0;i<v.size();i++)
{
	ris=ris+(v[i].get_link()/v[i].get_peso());
}
NewPeso=(1-DELTA)/N+DELTA*ris;
return NewPeso;



	
}
int main()
{
	int newRank=0;
	//sto creando il vettore v1 che contiene l'insieme delle pagine usando la libreria vector
	Pagina a(2,8,2);  
	Pagina b(1,18,10);
	Pagina c(2,7,9);
	Pagina d(3,11,12);
	Pagina e(4,5,9);
	Pagina f(5,4,5);
	Pagina g(2,7,6);
	vector<Pagina> v1;
    v1.push_back(a); //aggiungo gli elementi al vettore 
    v1.push_back(b);
    v1.push_back(c);
    v1.push_back(d);
    v1.push_back(e);
    v1.push_back(f);
    v1.push_back(g);
    for(int i=0;i<v1.size();i++) //stampo il vettore
    {
    	cout<<v1[i]<<endl;
	}
	cout<<"NUOVO PESO:"<<rank_update(v1)<<endl; //stampo il nuovo peso
	vector<LinkedList<int>> Web; //inizializzo il vettore di liste
	LinkedList<int> idlist1;
	idlist1.add(a.get_id()); // aggiungo le liste al vettore
    idlist1.add(b.get_id());
	idlist1.add(c.get_id());
	LinkedList<int> idlist2;
	idlist2.add(d.get_id());
	idlist2.add(e.get_id());
	LinkedList<int> idlist3;
	idlist3.add(f.get_id());
	idlist3.add(g.get_id());
	Web.push_back(idlist1);
	Web.push_back(idlist2);
	Web.push_back(idlist3);
    
	for(int i=0;i<N;i++) //stampo il vettore di liste 
    {
    	cout<<Web[i].toString()<<endl;
	}
	return 0;
	
	
}