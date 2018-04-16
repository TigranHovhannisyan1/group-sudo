#include <iostream>
#include "circle.cpp"
int main() {
    Circle a("Klor", 5, 3, 4);
    a.print();
    std::cout << "Erkarutyunn e " << a.getL() << "\nMakeresn e " << a.getS() << "\nTramagicn e " << a.getD() << '\n';
    std::cout << a*5 << std::endl;
    return 0;
}
