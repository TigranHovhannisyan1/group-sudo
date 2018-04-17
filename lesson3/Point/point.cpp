#ifndef point
#define point

#include <iostream>
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
        void print() {
            std::cout << "Point (" << x << ',' << y << ")\n";
        }
};

#endif
