#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <stdexcept>
#include <string>
using std::runtime_error;
using std::cout;
using std::cin;
using std::endl;
using std::string;

template <typename T>
class ArrayStack{
        static const int DEF_CAPACITY=10;  
    public:
        ArrayStack(int cap=DEF_CAPACITY){
            S=new T[cap];
            capacity=cap;
            t=-1;
        }
        const int size(){
            return t+1;
        }                   
        bool empty() const{
            return (t<0);
        }                
        const T& top() const{
            if(empty()) throw runtime_error("Lo stack e' vuoto.");
            return S[t];
        }
        void pop(){
            if(empty()) throw runtime_error("Lo Stack e' vuoto.");
            --t;
        }     
        void push(const T& e){
            if(size()==capacity) throw runtime_error("Lo Stack e' pieno.");
            S[++t]=e;
        }                   

    private:
        T* S;
        int capacity;                       
        int t;                             
};



#endif