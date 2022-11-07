#include "Pagina.h"
using std::endl;
using std::cout;
using std::cin;
Pagina::Pagina(int id,int link,int peso)
:link(link),peso(peso)
{
	set_id(id);
}
std::ostream& operator <<(std::ostream& outs,const Pagina& a)
{
	outs<<"id:"<<a.id<<endl;
	outs<<"link:"<<a.link<<endl;
	outs<<"peso:"<<a.peso<<endl;
	return outs;
}
void Pagina::set_id(int id)
{
	if(id<=0||id>=N-1)
	{
		cout<<"Reinserire l'id:"<<endl;
		cin>>id;
	}
	this->id=id;
}