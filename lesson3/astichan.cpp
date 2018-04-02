#include <iostream>
double power(double num, unsigned int extent) {
    if(extent > 0) {
        return num*power(num,--extent);
    } else {
        return 1;
    }
}

int main() {
    double num;
    unsigned int extent;
    std::cout << "Input number : ";
    std::cin >> num;
    std::cout << "Input extent : ";
    std::cin >> extent;
    std::cout << num << '^' << extent << '=' << power(num, extent) << '\n';
}
