#include <iostream>
#include "circle.cpp"
#include "line.cpp"
#include "rectangle.cpp"
int main() {
    Point p(4,5);
    p.print();
    p.setX(70);
    p.setY(10);
    std::cout << p.getX() << ' ' <<p.getY() << '\n';
    Circle c(1,2,3);
    c.print();
    Point* a = &c;
    Circle* b = (Circle*) a;
    b->setX(12.4);
    b->setY(15.1);
    b->setR(17.2);
    b->print();
    Point k(20,10);
    Line l(k,p);
    //l.setB(l.getA());
    l.print();
    std::cout << "The length of line " << l.getLength() << std :: endl;
    Rectangle r(11,6);
    r.view();
    r.print();
    return 0;
}
