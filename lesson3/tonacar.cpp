#include <iostream>
int main() {
    int m = 111111111111111111111111111111, k = 11;
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 22; j++) {
            if (j >= m && j <= k) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        m--;
        k++;
        std::cout <<'\n';
    }
    return 0;
}
