#ifndef CNODE_H
#define CNODE_H
#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::runtime_error;
using std::ostringstream;

template <typename T> class CircleList;
template <typename T>

class CNode{
    private:
        T elem;
        CNode* next;
        friend class CircleList<T>;
};




#endif