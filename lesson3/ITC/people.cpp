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
        std::cout << name << ' ' << lastName << ' ' << age << " years old " << gender;
        if (student) {
            std::cout << " student\n";
        } else {
            std::cout << " no student\n";
        }
    }
};

int search(people *ptr, std::string searchName, int size) {
    for (int i = 0; i < size; i++) {
        if (searchName == ptr[i].name) {
            ptr[i].info();
            return i;
        }
    }
    std::cout << "ERROR!!\n";
    return -1;
}
