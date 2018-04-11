#include <iostream>
#include "person.cpp"
int main() {
    std::string searchName;
    person itc[13];
    init(itc);
    //person &Tigran = itc[0];
    std::cout << "Input name : ";
    std::cin >> searchName;
    search(itc, searchName, sizeof(itc)/sizeof(person));
}
