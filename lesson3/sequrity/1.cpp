#include <iostream>
#include "string"
using namespace std;
int main() {
    int a, age, your_age = 20;
    string name, your_name = "Tigran";
    cout << "What is your name? : ";
    cin >> name;
    cout << "How old are you? : ";
    cin >> age;
    a = (name == your_name && age == your_age) ? 1 : 0;
    cout << a << endl;
    return 0;
}
