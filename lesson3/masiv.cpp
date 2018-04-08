#include <iostream>
int main() {
    const int size = 10;
    int mas[size];
    int sumCouple = 0, sumOdd = 0, max, min;
    for (int i = 0; i < size; i ++) {
        std::cout << "mas[" << i << "] = ";
        std::cin >> mas[i];
        if (mas[i] % 2 == 0) {
            sumCouple += mas[i];
        } else {
            sumOdd += mas[i];
        }
    }
    max = min = mas[0];
    for (int i = 1; i < size; i ++) {
        if (mas[i] > max) {
            max = mas[i];
        } else if (mas[i] < min) {
            min = mas[i];
        }
    }
    std::cout << "The sum of couple elements is " << sumCouple << '\n';
    std::cout << "The sum of odd elements is " << sumOdd << '\n';
    std::cout << "The maximal element is " << max << '\n';
    std::cout << "The minimal element is " << min << '\n';
    return 0;
}
