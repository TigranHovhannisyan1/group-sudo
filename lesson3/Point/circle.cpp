#ifndef CIRCLE
#define CIRCLE

#include <iostream>
#include "point.cpp"
#include <math.h>
class Circle : public Point {
    private:
        float r;
    public:
        Circle(float x, float y, float r)
            :Point(x,y)
            ,r(r)
            {}
        void setR(float r) {
            this->r = r;
        }
        float getR() {
            return r;
        }
        float getL() {
            return 2 * M_PI * r;
        }
        float getS() {
            return M_PI * r * r;
        }
        void print() {
            std::cout << "Circle (" << getX() << "," << getY() << ')' << "  r = " << r << std::endl;
        }
};

#endif
