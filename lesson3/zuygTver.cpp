#include <iostream>
int main() {
    int first, last;
    std::cout << " Input first number : ";
    std::cin >> first;
    std::cout << " Input last number : ";
    std::cin >> last;
    int sum = 0;
    if(first < last) {
        for (int i = first; i <= last; i++) {
            if (i % 2 == 0) {
                std::cout << i << '\n';
                sum += i;
            }
        }
        std::cout << "couple numbers sum is " << sum << std::endl;
    } else {
        std::cout << "Error!!\n";
    }
    return 0;
}
