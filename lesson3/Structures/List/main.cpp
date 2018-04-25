#include <iostream>
#include "list.h"
int main() {
    List l;
    l.insert(10, 0);
    for(int i = 1; i < 6; ++i) {
        l.addFront(3*i);
        l.addEnd(5*i);
        l.insert(7*i, 1);
    }
    l.print();
    l[2] = 15;
    std::cout << "l[" << l.find(35) << "] = 35" <<std::endl;
    std::cout <<l[0] << ' ' << l[1] <<std::endl;
    l.remove(2);
    l.popEnd();
    l.popFront();
    l.print();
    std::cout << "Length = " << l.getLength() << std::endl;
    List li(l);
    std::cout << li[0] << ' '<< li[1] << std::endl;
    std::cout << "Length = " << li.getLength() << std::endl;
    li.print();
}
