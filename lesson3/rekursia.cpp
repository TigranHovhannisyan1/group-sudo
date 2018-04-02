#include <iostream>
int foo(int n,int i=1) {
    if (i <= n) {
        std::cout << i << '\n';
        foo(n,++i);
    } else {
        return 0;
    }
}

int main() {
    std::cout << "Input number : ";
    int num;
    std::cin >> num;
    if (num > 0) {
        foo(num);
    } else {
        std::cout << "Error!\n";
    }
    return 0;
}

