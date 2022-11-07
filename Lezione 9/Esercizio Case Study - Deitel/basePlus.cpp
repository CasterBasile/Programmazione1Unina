#include "basePlus.h"


BasePlus::BasePlus(const string& nome, const string& cognome, const string& codice, double vendita, double tasso, double salarioBase){
    Commissioni(nome, cognome, codice, vendita, tasso);
    setSalarioBase(salarioBase);
}

void BasePlus::setSalarioBase(double salarioBase){
    if(salarioBase<0.0)
        throw invalid_argument("Il salario base deve essere maggiore di 0.");
    else
        salBase=salarioBase;
}

double BasePlus::getSalarioBase() const{
    return salBase;
}

double BasePlus::guadagni() const{
    return getSalarioBase() + Commissioni::guadagni();
}

string BasePlus::stampa() const{
    ostringstream s;
    s<<"Salario Base: "<<Commissioni::stampa()<<" Salario Base: "<<getSalarioBase()<<endl;
    return s.str();
}

