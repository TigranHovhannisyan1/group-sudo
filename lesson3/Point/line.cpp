#ifndef LINE
#define LINE

#include <iostream>
#include "point.cpp"
#include <math.h>
class Line : public Point {
    private:
        Point b;
    public:
        Line(Point a, Point b)
            :Point(a)
            ,b(b)
            {}
        Line(const Line & l)
            :Point(l) {
                this->b  = b;
                std::cout << "Line Coppy constructor\n";
            }
        ~Line() {}
        void print() {
            std::cout << "Line______\n";
            Point::print();
            b.print();
            std::cout << "__________\n";
        }
        void setA(Point a) {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        void setB(Point b) {
            this->b = b;
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        Point getB() {
            return b;
        }
        float getLength() {
            return sqrt(pow((b.getX() - Point::getX()), 2) + pow((b.getY() - Point::getY()), 2));
        }
        void printCordinates() {
            if (Point::getX() > b.getX()) {
                Point temp(Point::getX(), Point::getY());
                Point::setX(b.getX());
                Point::setY(b.getY());
                b = temp;
            }
            float x1 = Point::getX();
            float y1 = Point::getY();
            float x2 = b.getX();
            float y2 = b.getY();
            float k = (y2 - y1) / (x2 - x1);
            float d = y1 - x1 * k;
            for (float i = 1, x = x1 + 1; x < x2; ++x, ++i) {
                float y = k * x + d;
                std::cout << 'A' << i << " (" << x << ',' << y << ") \n";
            }
        }
        std::string shape() {
            return "I am a Line\n";
        }
        virtual float getS() {
            std::cout << "The Line does not have an area!!!\n";
            return -1;
        }
        virtual float getP() {
            std::cout << "The Line does not have an Perimeter!!!\n";
            return -1;
        }
        virtual void foo() {
            std::cout << "Line foo\n";
        }
        virtual void boo() {
            std::cout << "Line boo\n";
        }

};
#endif
