#include <iostream>
#include "line.cpp"
#include <math.h>
class Rectangle: public Point {
    private:
        float a, b;
        Point m;
        Point n;
        Point k;
        Point q;
    public:
        Rectangle(float a = 5, float b = 5)
        : a(a)
        , b(b) 
        , m(0, 0)
        , n(a, 0)
        , k(a, b)
        , q(0, b)
        {}
            ~Rectangle() {}
        void setA(float a) {
            this->a = a;
        }
        float getA() {
            return a;
        }
        void setB(float b) {
            this->b = b;
        }
        float getB() {
            return b;
        }
        float Rec_Par(float a, float b) {
            return 2 * (a + b);
        }
        float Rec_Area(float a, float b) {
            return a * b;
        }
        void print() {
            std::cout << "Rectangle \n";
            m.print();
            n.print();
            k.print();
            q.print();
        }
        void view() {
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
};
