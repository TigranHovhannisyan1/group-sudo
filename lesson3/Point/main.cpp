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
    std::cout << "\nParagic = " << w.getP() << "\nMakeres = " << w.getS() << std::endl;
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
    c.shape();
    std::cout << "p say.- " << p.shape();
    std::cout << "b say.- " << b->shape();
    std::cout << "l say.- " << l.shape();
    std::cout << "tr say.- " <<tr.shape();
    std::cout << "w say.- " << w.shape();
    std::cout << "pi say.- " << pi->shape();
    std::cout << "____________\n";
    std::cout << "Rectangle S = " << r->getS() <<'\n';
    std::cout << "Rectangle S = ";
    printS(r);
    std::cout << "Triangle S = " << tr.getS() <<'\n';
    std::cout << "Triangle S = ";
    printS(&tr);
    p.foo();
    b->boo();
    printS(&l);
    std::cout << "Triangle P = " << tr.getP() << std::endl;
    return 0;
}
