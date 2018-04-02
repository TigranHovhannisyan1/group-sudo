#include <iostream>
long int palindrom(long int num, long int k) {
    if (num != 0 ) {
        k = k * 10 + (num % 10);
        num /= 10;
        palindrom(num, k);
    } else {
        return k;
    }
}

int main() {
    std::cout << "Input number : ";
    long int num,k=0;
    std::cin >> num;
    if (num == palindrom(num, k)) {
        std::cout << "Palindrom e\n";
    } else {
        std::cout << "Palindrom che\n";
    }
    return 0;
}

