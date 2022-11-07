#ifndef BISCOTTI_H
#define BISCOTTI_H
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using std::vector;
using std::string;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;

class Biscotti{
    public:
        Biscotti(int ident, string n, string p, vector<float> c) : ID{ident}, nome{n}, produttore{p}, caratteristiche{c} {}
        void toString(); 
        vector<float> getCaratteristiche();
    private:
        int ID;
        string nome, produttore;
        vector<float> caratteristiche;
        vector<float> tmp1;
        vector<float> tmp2;
};

#endif