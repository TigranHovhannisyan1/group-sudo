#include <iostream>
#include <string>
#include <math.h>
bool parz(int num, int i=2) {
    if(i<=sqrt(num)) {
        if (num % i != 0) {
            parz(num,++i);
        } else {
            return false;
        }
    }else {
        return true;
    }
}

int main() {
    unsigned int num;
    std::cout << "Input number : ";
    std::cin >> num;
    if (num > 0) {
        if (parz (num)) {
            std::cout << "parz e\n";
        } else {
            std::cout << "parz che\n";
        }
    } else {
        std::cout << "Input unsigned integer number !! \n";
    }
}
