#include "SalarioDipendente.h"

SalarioDipendente::SalarioDipendente(const string& nome, const string& cognome, const string& codice, double salario){
    Dipendenti(nome, cognome, codice);
    setSalario(salario);
}

void SalarioDipendente::setSalario(double salario){
    if(salario>0)
        salSett=salario;
    else
        throw invalid_argument("Il salario deve essere maggiore di 0.");
}

double SalarioDipendente::getSalario() const{
    return salSett;
}

double SalarioDipendente::guadagni() const{
    getSalario();
}

string SalarioDipendente::stampa() const{
    ostringstream s;
    s<<"Salario dipendente: "<<Dipendenti::stampa()<<"\n"<<" Stipendio settimanale: "<<getSalario()<<"\n";

    return s.str();
}