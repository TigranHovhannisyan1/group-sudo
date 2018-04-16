#include <iostream>
int main()
{
    int n;
    std::cout << "Input size : ";
    std::cin >> n;
    int **a = new int *[n];
    int s = n * n;
    int i = 0, j = 0;
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }
    for (int k = 0; k < n; k++) {
        for (j = j; j < n - i; j++) {
            a[i][j] = s--;
        }
        --j;
        for (i = i + 1; i <= j; i++) {
            a[i][j] = s--;
        }
        --i;
        for (j = j - 1; j >= n - i - 1; j--) {
            a[i][j] = s--;
        }
        j++;
        for (i = i - 1; i > j; i--) {
            a[i][j] = s--;
        }
        ++i;
        ++j;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << a[i][j];
            if (a[i][j] > 9 && a[i][j] < 100) {
                std::cout << "  ";
            }
            else if (a[i][j] < 10) {
                std::cout << "   ";
            }
            else {
                std::cout << ' ';
            }
        }
        std::cout << '|' << '\n';
    }
    return 0;
}
