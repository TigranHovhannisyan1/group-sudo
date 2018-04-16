#include <iostream>
#include <stdlib.h>
int main() {
    int size;
    std::cout << "Nermuceq zangvaci chapy : ";
    std::cin >> size;
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 21 - 10;
        std::cout << a[i] << ", ";
    }
    int sum= a[0];
    int dzax = 0;
    int aj = 0;
    int cur = 0;
    int minus = -1;
    for (int i=0; i < size; ++i) {
        cur += a[i];
        if (cur > sum) {
            sum = cur;
            dzax = minus + 1;
            aj = i;
        }
        if (sum < 0) {
            sum = 0;
            minus = i;
        }
    }
    std::cout << "\n" << dzax  << "-ic" << aj  << " exac elementneri gumary maximaln e` " << sum << "\n" << minus;
    return 0;
}
