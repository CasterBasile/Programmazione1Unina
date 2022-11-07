#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "commissioni.h"


class BasePlus : public Commissioni{
    public:
        BasePlus(const string&, const string&, const string& , double, double, double);
        virtual ~BasePlus()=default;

        void setSalarioBase(double);
        double getSalarioBase() const;

        //Funzioni con override
        virtual double guadagni() const override;
        virtual string stampa() const override;
    
    private:
        double salBase;
};




#endif