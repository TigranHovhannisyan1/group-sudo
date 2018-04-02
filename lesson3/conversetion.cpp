#include <iostream>
#include <string>
int main() {
<<<<<<< HEAD
    std :: string your_name, pair_name;
    int your_age, pair_age;
    std :: cout << "Hello!" << std :: endl;
    std :: cout << "What is your name?: ";
    std :: cin >> your_name;
    std :: cout << "How old are you?: ";
    std :: cin >> your_age;
    std :: cout << "Enough told about you!" << std :: endl;
    std :: cout << "What is name of your pair?: ";
    std :: cin >> pair_name;
    std :: cout << "How old is your pair?: ";
    std :: cin >> pair_age;
    if (your_age > pair_age) {
        std :: cout << your_name << " you are older, than " << pair_name << std :: endl;
    } else if (your_age == pair_age) {
        std :: cout << your_name << " is the same age as " << pair_name << std :: endl;
    } else { 
        std :: cout << pair_name << " you are older, than " << your_name << std :: endl;
=======
    std::string your_name, pair_name;
    int your_age, pair_age;
    std::cout << "Hello!" << std::endl;
    std::cout << "What is your name?: ";
    std::cin >> your_name;
    std::cout << "How old are you?: ";
    std::cin >> your_age;
    std::cout << "Enough told about you!" << std::endl;
    std::cout << "What is name of your pair?: ";
    std::cin >> pair_name;
    std::cout << "How old is your pair?: ";
    std::cin >> pair_age;
    if (your_age > pair_age) {
        std::cout << your_name << " you are older, than " << pair_name << std::endl;
    } else if (your_age == pair_age) {
        std::cout << your_name << " is the same age as " << pair_name << std::endl;
    } else { 
        std::cout << pair_name << " you are older, than " << your_name << std::endl;
>>>>>>> 78f4fe955a8c56cb10fbe2356c8ea8b949f5eab3
    }
    return 0;
}
