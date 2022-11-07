#include <iostream>
#include <string>
#include <cmath> //La includo anche se non so se mi serve

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Invoice{

    public:
        Invoice(string cod, string des, int quan, int prezzo){
             
            setCodId(cod, des);
            setDescr(des);
            setQta(quan);
            setPrz(prezzo);
            //L'esercizio ci chiede di non impostare come "variabili" i seguenti due parametri:
            IVA=0.2;
            sconto=0;

        }  

        void setCodId(string cod, string des){
            if(cod.empty())
                cout<<"Codice Identificativo non valido per il prodotto con la seguente descrizione: "<<des<<endl;
            else
                codID=cod;

        }

        string getCodId() const{
            return codID;
        }

        void setDescr(string des){
            if(des.empty())
                descr="Nessuna descrizione";    
            else
                descr=des;    
        }

        string getDescr() const{
            return descr;
        }

        void setQta(int quan){
            if(quan>0)
                qta=quan;
            else
                qta=0;   
        }

        int getQta() const{
            return qta;
        }

        void setPrz(int prezzo){
            if(prz>0)
                prz=prezzo;
            else
                prz=0;
        }

        double getPrz() const{
            return prz;
        }

        double getInvoiceAmount() const{
            double importoFinale=qta*prz +IVA*(qta*prz)-sconto*(qta*prz); //Quantita' articoli acquistata*prezzo + 20% IVA - 0% sconto (Nel nostro caso)
            return importoFinale;
        }

    private:
        string codID, descr;
        int qta{0}, prz;
        double IVA{0.2}, sconto{0}; 
};