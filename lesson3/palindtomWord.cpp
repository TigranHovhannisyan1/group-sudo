#include <iostream>
#include <string>
bool palindrom(std::string word, int len, int i=0) {
    if (i<=len) {
        if (word[i] ==word[len]) {
            palindrom(word, --len,++i);
        } else {
            return false;
        }
    } else {
        return true;
    }
}

int main() {
    std::string word;
    std::cout << "Input word : ";
    std::cin >> word;
    int len = word.length();
    if (palindrom (word, --len)) {
        std::cout << "palindrom e\n";
    } else {
        std::cout << "palindrom che\n";
    }
}
