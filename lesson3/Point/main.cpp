#include <iostream>
#include "circle.cpp"
#include "line.cpp"
#include "rectangle.cpp"
#include "triangle.cpp"
int main() {
    Point p(4,5);
    p.print();
    p.setX(20);
    p.setY(15);
    std::cout << p.getX() << ' ' <<p.getY() << '\n';
    Circle c(1,2,3);
    c.print();
    Point* a = &c;
    Circle* b = (Circle*) a;
    b->setX(12.4);
    b->setY(15.1);
    b->setR(17.2);
    b->print();
    Point k(45,10);
    Line l(k,p);
    Line u = l;
    l.print();
    l.printCordinates();
    std::cout << "The length of line " << l.getLength() << std :: endl;
    Rectangle t(p,k);
    Rectangle w = t;
    std::cout << "\nParagic = " << w.getPerimeter() << "\nMakeres = " << w.getArea() << std::endl;
    w.print();
    Rectangle* r = &t;
    r->view();
    r->print();
    Point po(18, 34);
    Triangle tr(p, k, po);
    tr.print();
    std::cout << "_V_I_R_T_U_A_L_\n";
    Point *pi = &l;
    pi->print();

    return 0;
}
