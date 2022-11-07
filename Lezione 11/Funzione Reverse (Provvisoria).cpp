//Prototipo della funzione
void reverse();

//Definizione della funzione
template <typename NodoTipo>
void DLinkedList<NodoTipo>::reverse() {
    DLinkedList<NodoTipo> T;
    while(!(this->empty())){
        NodoTipo x=(this->front());
        (this->removeFront());
        T.addFront(x);
    }
    while(!T.empty()){
        NodoTipo x=T.front();
        T.removeFront();
        (this->addBack(x));
    }
}