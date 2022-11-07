#include "classi.h"

Data::Data(int giorno, int mese, int anno){

    if(giorno>0 && giorno <32){
        g=giorno;
    }else{
        g=1;
    }
    
    if(mese>0 && mese <32){
        m=mese;
    }else{
        m=1;
    }
    
    if(anno>1915 && anno<2022){
        a=anno;
    }else{
        a=1;
        cout<<"Anno errato: L'anno sara' impostato pari a 1."<<endl;
    }

}


const string Data::stampa(){
    ostringstream s;
    s<<g<<'/'<<m<<'/'<<a;
    return s.str();
} 

Data::~Data(){
    cout<<"Elimino data."<<g<<'/'<<m<<'/'<<a<<endl;
}

Persona::Persona(const string nome, const Data data1){
    n=nome;
    d=data1;
}


const string Persona::stampa(){
    ostringstream s;
    s<<"Nome: "<<n<<" Data di nascita: "<<d.stampa()<<"\n";
    return s.str();
}

Persona::~Persona(){
    cout<<"Elimino informazioni persona."<<endl;
}