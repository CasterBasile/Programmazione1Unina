#ifndef CLINKEDLIST_H
#define CLINKEDLIST_H

#include "CNode.h"

template <typename T>

class CircleList{
    public:
        CircleList();
        virtual ~CircleList() = default;
        bool empty() const;
        const T& front() const;
        const T& back() const;
        void advance();         //Sposta in avanti il cursore
        void add(const T& e);
        void remove();
        string toString();
    private:
        CNode<T>* cursor;
};

#include "CLinkedList.cpp"

#endif