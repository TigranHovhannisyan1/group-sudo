#include <iostream>
#include <stdlib.h>
int main() {
    const int size = 6;
    int mas[size][size];
    int ankyunagcer = 0, glxAnkVerev = 0, glxAnkNerqev = 0, erkrordAnkVerev = 0, erkrordAnkNerqev = 0;
    int verevErankyun = 0, nerqevErankyun = 0, ajErankyun = 0, dzaxErankyun = 0;
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j ++) {
            mas[i][j] = rand() % 20 + 10;
            std::cout << mas[i][j] << ' ';
        }
        std::cout << '\n';
    }
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j ++) {
            if (i == j || i + j == size - 1) {
                ankyunagcer += mas[i][j];
            } else if (i < j) {
                glxAnkVerev += mas[i][j];
            } else if (i > j) {
                glxAnkNerqev += mas[i][j];
            }
            if (i + j <= size -1) {
                erkrordAnkVerev += mas[i][j];
            } else if (i + j >= size -1) {
                erkrordAnkNerqev += mas[i][j];
            }
            if (i < j && i + j <= size - 1) {
                verevErankyun += mas[i][j];
            } else if (i < j && i + j >= size -1) {
                ajErankyun += mas[i][j];
            } else if (i > j && i + j >= size -1) {
                nerqevErankyun += mas[i][j];
            } else if (i > j && i + j <= size -1) {
                dzaxErankyun += mas[i][j];
            }
        }
    }
    std::cout << "Ankyunagceri elementneri gumary havasar e " << ankyunagcer << '\n'; 
    std::cout << "Glxavor ankyunagcic verev elementneri gumary havasar e " << glxAnkVerev << '\n';
    std::cout << "Glxavor ankyunagcic nerqev elementneri gumary havasar e " << glxAnkNerqev << '\n';
    std::cout << "Erkrordnayin ankyunagcic verev elementneri gumary havasar e " << erkrordAnkVerev<< '\n';
    std::cout << "Erkrordnayin ankyunagcic nerqev elementneri gumary havasar e " << erkrordAnkNerqev<< '\n';
    std::cout << "Verevi erankyan elementneri gumary havasar e " << verevErankyun << '\n';
    std::cout << "Aj erankyan elementneri gumary havasar e " << ajErankyun << '\n';
    std::cout << "Nerqevi erankyan elementneri gumary havasar e " << nerqevErankyun << '\n';
    std::cout << "Dzax erankyan elementneri gumary havasar e " << dzaxErankyun << '\n';
    return 0;
}
