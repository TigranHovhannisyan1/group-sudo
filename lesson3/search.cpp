#include <iostream>
#include <stdlib.h>
int main() {
    int size, tiv;
    std::cout << "Nermuceq zangvaci chapy : ";
    std::cin >> size;
    int a[size];
    for (int i = 0; i < size; i++) {
        a[i] = rand() % 101 + 1;
        std::cout << "a[" << i+1 << "] = " << a[i] << '\n';
    }
    std::cout << "\nNermuceq voreve tiv : ";
    std::cin >> tiv;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] == tiv) {
            count++;
            std::cout << "a[" << i+1 << "] = " << a[i] << '\n';
        }
    }
    if (count > 0) {
        std::cout << "Zangvacum ka " << count << " hat " << tiv <<'\n';
    } else {
        std::cout << "Zangvacum chka dzer nervucac elementy!\n";
    }
    return 0;
}
