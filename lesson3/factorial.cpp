#include <iostream>
long int factorial(int n) {
    if (n!=0) {
        return n*factorial(n-1);
    } else {
        return 1;
    }
}

int main() {
    std::cout << "Input number : ";
    int num;
    std::cin >> num;
    if (num >= 0 && num <= 20) {
        std::cout << factorial(num) << '\n';
    } else {
    std::cout << "Error\n";
    }    
    return 0;
}
