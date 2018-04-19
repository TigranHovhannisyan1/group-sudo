#ifndef point
#define point

#include <iostream>
#include <cmath>
class Shape {
    public:
        virtual std::string shape() = 0;
        virtual float getS() = 0;
        virtual float getP() = 0;
        virtual void foo() = 0;
        virtual void boo() = 0;
};

void printS(Shape* object) {
    std::cout << object->getS() << std::endl;
}

void printP(Shape* object) {
    std::cout << object->getP() << std::endl;
}

class Point : public Shape {
    private:
        float x;
        float y;
    public:
        Point(float x = 0, float y = 0) : x(x), y(y) {}
        Point(const Point& p)
            : x(p.x)
            , y(p.y)
            {}
        ~Point() {}
        void setX(float x) {
            this->x = x;
        }
        void setY(float y) {
            this->y = y;
        }
        float getX() {
            return x;
        }
        float getY() {
            return y;
        }
        float distance(Point b) {
            return std::sqrt(pow(b.getX() - this->getX(), 2) + pow(b.getY() - this->getY(), 2));
        }
        virtual void print() {
            std::cout << "Point (" << x << ',' << y << ")\n";
        }
        virtual std::string shape() {
            return "I am a Point !!!\n";
        }
        virtual float getS() {
            std::cout << "The Point does not have an area!!!\n";
            return -1;
        }
        virtual float getP() {
            std::cout << "The Point does not have an Perimeter!!!\n";
            return -1;
        }
        virtual void foo() {
            std::cout << "Point foo\n";
        }
        virtual void boo() {
            std::cout << "Point boo\n";
        }
};

#endif
