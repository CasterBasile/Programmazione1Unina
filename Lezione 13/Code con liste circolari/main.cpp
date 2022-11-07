#include "LinkedQueue.h"
int main(){
    LinkedQueue<int> Q;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    cout<<Q.front()<<endl;
    Q.dequeue();
    cout<<Q.front()<<endl;
    Q.dequeue();
    cout<<Q.front()<<endl;
    Q.dequeue();

    return 0;
}