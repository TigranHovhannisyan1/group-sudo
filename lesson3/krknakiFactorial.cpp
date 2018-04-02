#include <iostream>
long int doublefactorial(int n) {
    if (n != 0 && n != 1) {
        return n * doublefactorial(n - 2);
    } else {
        return 1;
    }
}

int main() {
    std::cout << "Input number : ";
    int num;
    std::cin >> num;
    if (num >= 0 && num <= 40) {
        std::cout << num << "!! = " << doublefactorial(num) << '\n';
    } else {
        std::cout << "Error\n";
    }
    return 0;
}

