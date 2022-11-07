#ifndef INSEGNAMENTO_H
#define INSEGNAMENTO_H
#include <string>
using std::string;
class Insegnamento{
    public:
        Insegnamento(string n, int c, string d){
            nome=n;
            crediti=c;
            docente=d;
        }

        int getCrediti(){return crediti;}
        string getNome(){return nome;}
        string getDocente(){return docente;}

    private:
        string nome, docente;
        int crediti;
};



#endif