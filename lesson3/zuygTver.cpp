#include <iostream>
int main() {
    int first, last;
    std::cout << " Input first number : ";
    std::cin >> first;
    std::cout << " Input last number : ";
    std::cin >> last;
    if(first < last) {
        for (int i = first; i <= last; i++) {
            if (i % 2 == 0) {
                std::cout << i << '\n';
            }
        }
    } else {
        std::cout << "Error!!";
    }
    return 0;
}
