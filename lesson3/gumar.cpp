#include <iostream>
int sum(int num) {
    if(num > 0) {
        return num+sum(num-2);
    } else {
        return 0;
    }
}

int main() {
    int num;
    std::cout << "Nermuceq tivy : ";
    std::cin >> num;
    if (num % 2 ==0) {
        std::cout << "1-ic " << num << " zuyg tveri gumary havasar e " << sum(num) << '\n';
        std::cout << "1-ic " << num << " kent tveri gumary havasar e " << sum(num-1) << '\n';
    } else {
        std::cout << "1-ic " << num << " kent tveri gumary havasar e " << sum(num) << '\n';
        std::cout << "1-ic " << num << " zuyg tveri gumary havasar e " << sum(num-1) << '\n';
    }
}
