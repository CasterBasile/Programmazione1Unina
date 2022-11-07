#ifndef SALARIODIPENDENTE_H
#define SALARIODIPENDENTE_H
#include "dipendenti.h"

class SalarioDipendente : public dipendenti{
    public:
        SalarioDipendente(const string&, const string&, const string&, double);
        virtual ~SalarioDipendente()=default;

        //Funzione che imposta il salario settimanale
        void setSalario(double);
        //Funzione che ritorna il salario settimanale
        double getSalario() const;

        //Adesso dobbiamo effettuare l'override di due funzioni già definite nella classe base dipendenti
        virtual double guadagni() const override;
        virtual string stampa() const override;

    private:
        double salSett;
};





#endif