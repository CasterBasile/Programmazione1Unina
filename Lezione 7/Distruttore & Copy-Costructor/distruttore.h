#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class CreaEDistruggi{
    public:
        explicit CreaEDistruggi(int=1, string="NoName");
        void Stampa();
        ~CreaEDistruggi();
    private:
        int anni;
        string nome;
};