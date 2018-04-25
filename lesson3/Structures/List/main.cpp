#include <iostream>
#include "list.h"
int main() {
    List l;
    for(int i = 1; i < 6; ++i) {
        l.addFront(3*i);
        l.addBack(5*i);
        l.add(2, 7*i);
    }
    l.print();
    l[2] = 15;
    std::cout << l.find(2)->_data <<std::endl;
    std::cout <<l[0] << ' ' << l[1] <<std::endl;
    l.remove(2);
    l.print();
    std::cout << "Length = " << l.getLength() << std::endl;
    List li = l;
    li.print();
}
