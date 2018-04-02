#include <iostream>
#include "math.h"
int main() {
    std :: cout << "Hello world!!!\n";
    int a = 5;
    int b = 7;
    int x = 25;
    std :: cout << "a = " << a << " b = " << b << " x = " << x << '\n';
    x = sqrt (x);
    a = a + b;
    b = a - b;
    a = a - b;
    std :: cout << "a = " << a << " b = " << b << " x = " << x << std :: endl;
    return 0;
}
