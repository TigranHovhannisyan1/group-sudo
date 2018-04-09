#include <iostream>
#include <stdlib.h>

int sort(int *a, int len) {
    for (int i = 0; i < len; i++) {
        int min = i;
        for (int j = i + 1; j < len; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    return 0;
}

int main() {
    int size, tiv;
    std::cout << "Nermuceq zangvaci chapy : ";
    std::cin >> size;
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100 + 1;
        std::cout << "a[" << i+1 << "] = " << a[i] << '\n';
    }
    std::cout << "\n\n";
    sort(a, size);
    for (int i = 0; i < size; i++) {
        std::cout << "a[" << i + 1 << "] = " << a[i] << '\n';
    }
    return 0;
}
