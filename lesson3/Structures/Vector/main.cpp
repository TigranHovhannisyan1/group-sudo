#include <iostream>
#include "vector.h"
int main () {
    Vector v;
    v[0] = 12;
    v[1] = 45;
    v[3] = 2;
    v.insert(2,56);
    std::cout << "v.length = " << v.getLength() <<'\n';
    v.print();
    std::cout << "Index of 45 = " << ' ' << v.find(45) << std::endl;
    v.resize(12);
    v.insert(4,78);
    v.print();
    v.remove(3);
    v.print();
    std::cout << "v.length = " << v.getLength() <<'\n';
    std::cout << v[0] << ' ' << v[1] << ' ' <<v[2];
    Vector k = v;
    std::cout << k[1];
    // Vector m = k;
    return 0;
}
