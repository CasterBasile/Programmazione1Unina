#include "invoice.h"

int main(){

    Invoice Ferramenta{"cii", "chiodi", 50, 1};
    
    cout<<"FERRAMENTA: "<<endl<<endl;
    cout<<"Codice: "<<Ferramenta.getCodId()<<endl;
    cout<<"Descrizone: "<<Ferramenta.getDescr()<<endl;
    cout<<"Quantita': "<<Ferramenta.getQta()<<endl;
    cout<<"Prezzo per articolo: "<<Ferramenta.getPrz()<<" euro."<<endl;
    cout<<"Prezzo totale: "<<Ferramenta.getInvoiceAmount()<<" euro."<<endl;
    
    return 0;
}