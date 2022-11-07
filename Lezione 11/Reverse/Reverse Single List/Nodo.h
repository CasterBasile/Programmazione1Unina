#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::runtime_error;
using std::invalid_argument;

template <typename TipoNodo> class collegamentoLista;

template <typename TipoNodo>
class Nodo{
    private:
        TipoNodo elem;
        Nodo<TipoNodo>* next;

        friend class collegamentoLista<TipoNodo>;
        
};

#endif