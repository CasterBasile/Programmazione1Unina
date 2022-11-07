#include "polinomio.h"

Polinomio::Polinomio(){
    dim=1;
    coeff=new double[1]{};
}

Polinomio::Polinomio(double coefficienti[], int numero){
    dim=numero;
    coeff=new double[numero];
        for(int i=0; i<dim; i++)
            coeff[i]=coefficienti[i];
}

Polinomio::Polinomio(const Polinomio & sec){
    dim=sec.dim;
    coeff=new double[sec.dim]; 
        for(int i=0; i<dim; i++){
            coeff[i]=sec.coeff[i];
        }
}


//Distruttore
Polinomio::~Polinomio(){
    delete [] coeff;
}

//Overload 
Polinomio & Polinomio::operator=(const Polinomio& sec){
    if(this==&sec){
        return *this;
    }
    else{
        delete [] coeff;
        coeff=new double[sec.dim];
        dim=sec.dim;
        for(int i=0; i<dim; i++){
            coeff[i]=sec.coeff[i];
        }
    }
        return *this;
}

Polinomio & Polinomio::operator+=(const Polinomio & sec){
    int newDim=(sec.dim>dim)? sec.dim : dim;
    double *newCoeff=new double[newDim];

    for(int i=0; i<newDim; i++){
        newCoeff[i]=0;
    }
    for(int i=0; i<sec.dim; i++){
        newCoeff[i]+=sec.coeff[i];
    }
    for(int i=0; i<dim; i++){
        newCoeff[i]+=coeff[i];
    }
    delete [] coeff;
    coeff = newCoeff;
    dim = newDim;
    return *this;
}

Polinomio & Polinomio::operator*=(double sec){
    for(int i=0; i<dim; i++){
        coeff[i]=sec;
    }
    return *this;
}

//Overload di funzioni che non appartengono a nessuna classe, quindi non serve usare l'operatore ::
Polinomio operator+(const Polinomio & prm, const Polinomio & sec){
    Polinomio risposta{prm};
    risposta+=sec;
    return risposta;
}

//Moltiplicazione per uno scalare
Polinomio operator*(const Polinomio & prm, double sec){
    Polinomio risposta{prm};
    risposta *= sec;
    return risposta;
}

Polinomio operator*(double prm, const Polinomio & sec){
    Polinomio risposta{sec};
    risposta*=prm;
    return risposta;
}

string Polinomio::stampa() const{
    ostringstream s;
    if(dim==0){
        s<<"dimensione 0"<<endl;
    }
        
    for(int i=dim-1; i>0; i--){
        s<<coeff[i]<<"x^"<<i<<" + ";
    }
    s<<coeff[0];

    return s.str();
}

bool operator==(const Polinomio & prm, const Polinomio & sec){
    if(prm.dim!=sec.dim){
        return false;
    }
    for(int i=0; i<prm.dim; i++){
        if(prm.coeff[i] != sec.coeff[i]){
            return false;
        }
    }
    return true;
}

