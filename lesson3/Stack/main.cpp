#include <iostream>
#include "stack.cpp"
int main() {
    int n;
    std::cout << "Input size : ";
    std::cin >> n;
    Stack S(n);
    double x;
    while (!S.isFull()) {
        std::cin >> x;
        S.push(x);
    }
    S.print();
    //S.push(15);
    while (!S.isEmpty()) {
        std::cout << S.pop() << ' ';
    }
    //std::cout << S.pop();
    return 0;
}
