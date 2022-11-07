#include<iostream>
#ifndef PAGINA_H
#define PAGINA_H
#define N 7
class Pagina
{
	public:
		Pagina(int id=0,int link=0,int peso=1/N);
		friend std::ostream& operator <<(std::ostream& outs,const Pagina& a);
	    void set_id(int id);
		int get_id() const {return id;}
		int get_link() const {return link;}
		int get_peso() const {return peso;}
	private:
		int id;
		int link;
		int peso;
};

#endif