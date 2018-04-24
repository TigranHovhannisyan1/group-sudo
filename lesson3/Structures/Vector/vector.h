#include <iostream>
class Vector {
    private:
        unsigned int _length;
        double *_arr;
    public:
        Vector(unsigned int = 10);
        Vector(const Vector&);
        ~Vector();
        double& operator[](unsigned int);
        int resize(unsigned int);
        unsigned int getLength();
        void insert (unsigned int, double);
        void print();
        int find(double);
        void remove (unsigned int);
};
