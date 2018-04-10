#include <iostream>
#include <string.h>
struct people {
    std::string name;
    std::string lastName;
    int age;
    std::string gender;
    bool student;
    void add(std::string Name, std::string LastName, int Age, std::string Gender, bool Student) {
        name = Name;
        lastName = LastName;
        age = Age;
        gender = Gender;
        student = Student;
    }
    void info() {
        std::cout << name << ' ' << lastName << ' ' << age << " year old " << gender;
        if (student) {
            std::cout << " student\n";
        } else {
            std::cout << " no student\n";
        }
    }
};

int search(people *ptr, std::string search, int size) {
    bool b = false;
    for (int i = 0; i < size - 1; i++) {
        if (search == ptr[i].name) {
            b = true;
            return i;
        }
    }
        return -1;
}
