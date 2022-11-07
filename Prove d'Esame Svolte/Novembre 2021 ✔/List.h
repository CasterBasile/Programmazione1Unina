#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <stdexcept>
#include <exception>
#include "Nodo.h"

using std::cout;
using std::endl;
using std::invalid_argument;
using std::runtime_error;

class List{
    public:
        List();
        ~List();
        bool empty() const;
        void addTask(Task&, List&);
        void removeFront();
        const Task front() const;
        int size();
        Task operator[] (int);
        int workloadDeveloper(Programmatore&, List&);
    private:
        Nodo* head;
};


#endif