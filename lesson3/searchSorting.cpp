#include <iostream>
#include <stdlib.h>

int search(int *a, int left, int right, int x) {
    int temp = (left + right) / 2;
    if (right - left == 1) {
        return -1;
    } else if (a[temp] == x) {
        return temp;
    } else if (x > a[temp]) {
        return search (a, temp, right, x);
    } else if (x < a[temp]) {
        return search (a, left, temp, x);
    }
}

int main() {
    int size, tiv;
    std::cout << "Nermuceq zangvaci chapy : ";
    std::cin >> size;
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 3 + i*3;
        std::cout << "a[" << i+1 << "] = " << a[i] << '\n';
    }
    std::cout << "\nNermuceq voreve tiv : ";
    std::cin >> tiv;
            int k = search(a, 0, size-1, tiv);
            if (k != -1) {
                std::cout << "a[" << k+1 << "] = " << tiv << '\n';
            } else {
                std::cout << "Zangvacum chka " << tiv << '\n';
            }
    return 0;
}
