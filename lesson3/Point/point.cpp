#ifndef point
#define point

#include <iostream>
#include <cmath>
class Point {
    private:
        float x;
        float y;
    public:
        Point(float x = 0, float y = 0) : x(x), y(y) {}
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
        void virtual print() {
            std::cout << "Point (" << x << ',' << y << ")\n";
        }
};

#endif
