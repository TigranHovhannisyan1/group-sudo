#ifndef LINE
#define LINE

#include <iostream>
#include "point.cpp"
#include <math.h>
class Line : public Point {
    private:
        Point a;
        Point b;
    public:
        Line(Point a, Point b)
            :a(a)
            ,b(b)
            {}
        ~Line() {}
        void print() {
            std::cout << "Line______\n";
            a.print();
            b.print();
            std::cout << "__________\n";
        }
	void setA(Point a) {
            this->a = a;
        }
        void setB(Point b) {
            this->b = b;
        }
        Point getA() {
            return a;
        }
        Point setB() {
            return b;
        }
        float getLength() {
            return sqrt(pow((b.getX() - a.getX()), 2) + pow((b.getY() - a.getY()), 2));
        }
};
#endif
