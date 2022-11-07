#include "LinkedQueue"

template <typename T>
LinkedQueue<T>::LinkedQueue(){
    C{nullptr};
    n=0;
}

template <typename T>
int LinkedQueue<T>::size() const{
    return n;
}

template <typename T>
bool LinkedQueue<T>::empty() const{
    return n==0;
}

template <typename T>
const T& LinkedQueue<T>::front(){
    if(empty())
        throw runtime_error("La coda e' vuota.");
    return C.front();
}

template <typename T>
void LinkedQueue<T>::enqueue(const T& e){
    C.add(e);
    C.advance();
    n++;
}

template <typename T>
void LinkedQueue<T>::dequeue(){
    if(empty())
        throw runtime_error("La coda e' vuota.");
    C.remove();
    n--;
}