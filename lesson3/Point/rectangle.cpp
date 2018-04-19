#include <iostream>
#include "line.cpp"
#include <cmath>
class Rectangle: public Point {
    private:
        Point b;
    public:
        Rectangle(Point a, Point b)
            : Point(a)
            , b(b)
            {}
        Rectangle(const Rectangle& r) 
            :Point(r) {
                this->b = b;
            }
            ~Rectangle() {}
        void setA(Point a) {
            Point::setX(a.getX());
            Point::setY(a.getY());
        }
        Point getA() {
            return Point(Point::getX(), Point::getY());
        }
        void setB(float b) {
            this->b = b;
        }
        Point getB() {
            return b;
        }
        float getLength() {
            return std::abs(Point::getX() - b.getX());
        }
        float getWidth() {
            return std::abs(Point::getY() - b.getY());
        }
        void print() {
            std::cout << "Rectangle \n";
            Point::print();
            b.print();
            std::cout << "___________\n";
        }
        void view() {
            float a = getLength();
            float b = getWidth();
            for (int i=0; i < a; i++) {
                std::cout << '*';
            }
            for(int i = 1; i < b-1; i++) {
                std::cout << std::endl;
                std::cout<<'*';
                for(int j = 1; j <= a-1; j++) {
                    std::cout<<' ';
                }
                std::cout<<'*';
            }
            std::cout << std::endl;
            for(int i = 0; i < a; i++) {
                std::cout << '*';
            }
            std::cout << std::endl;
        }
        std::string shape() {
            return "I am a Rectangle!!!\n";
        }
        virtual float getS() {
            return getLength() * getWidth();
        }
        virtual float getP() {
            return 2 * (getLength() + getWidth());
        }
        virtual void foo() {
            std::cout << "Rectangle foo";
        }
        virtual void boo() {
            std::cout << "Rectangle boo\n";
        }
};
