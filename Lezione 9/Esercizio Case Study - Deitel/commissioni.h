#ifndef COMMISSIONI_H
#define COMMISSIONI_H
#include "dipendenti.h"
class Commissioni : public Dipendenti{
    public:
        Commissioni(const string& nome=" ", const string& cognome=" ", const string& codice=" ", double vendite=0.0, double tasso=0.0);
        virtual ~Commissioni()=default;
        //Funzione per settare il tasso di commissione
        void setCommissione(double);
        double getCommissione() const;
        //Funzione per settare l'importo lordo di vendita
        void setImportoLordoVendita(double);
        double getImportoLordoVendita() const;

        //Funzione della classe dipendenti su cui dovremo fare override
        virtual double guadagni() const override;
        virtual string stampa() const override;
    
    private:
        double com, impVend;
};




#endif