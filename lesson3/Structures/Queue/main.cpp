#include <iostream>
#include "queue.h"
int main() {
    Queue q(15);
    q.dequeue();
    for (int i = 1; i < 18; i ++) {
        q.enqueue(i);
    }
    std::cout << "Length = " << q.getLength() << std::endl;
    q.print();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.print();
    Queue c = q;
    c.print();
    std::cout << "Length = " << q.getLength() << std::endl;
}
