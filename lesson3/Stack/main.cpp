#include <iostream>
#include "stack.cpp"
int main() {
    unsigned int n;
    std::cout << "Input size : ";
    std::cin >> n;
    Stack s(n);
    double x;
    while (!s.isFull()) {
        std::cin >> x;
        s.push(x);
    }
    s.print();
    while (!s.isEmpty()) {
        std::cout << s.pop() << ' ';
    }
    return 0;
}
