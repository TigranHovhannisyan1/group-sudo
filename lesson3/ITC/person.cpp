#include <iostream>
#include <string.h>

struct person {
    std::string name;
    std::string lastName;
    short age;
    char gender;
    bool student;
    int familyStatus;  // single = 1; married =2;
    void add(std::string Name, std::string LastName, short Age, char Gender, bool Student, int FamilyStatus = 1) {
        name = Name;
        lastName = LastName;
        age = Age;
        gender = Gender;
        student = Student;
        familyStatus = FamilyStatus;
    }
    void info() {
        if (gender == 'm') {
            std::cout << "Mr. ";
        } else if (gender == 'f' && familyStatus == 1) {
            std::cout << "Miss ";
        } else if (gender == 'f' && familyStatus == 2) {
            std::cout << "Mrs. ";
        }
        std::cout << name << ' ' << lastName << ' ' << age << " years old ";
        if (student) {
            std::cout << " student\n";
        } else {
            std::cout << " no student\n";
        }
    }
};

void init(person * itc) {
    std::cout << "Tigran, Nvard, Mariam, Edgar, Lilit, Hrach, Armen, Arpine, Ani, Artur, Michael, Sasha, Nona\n";
    person &Tigran = itc[0];
    person &Nvard = itc[1], &Mariam = itc[2], &Edgar = itc[3], &Lilit = itc[4];
    person &Hrach = itc[5], &Armen = itc[6], &Arpine = itc[7], &Ani = itc[8];
    person &Artur =itc[9], &Michael = itc[10], &Sasha = itc[11], &Nona = itc[12];
    Tigran.add("Tigran", "Hovhannisyan", 20, 'm',true);
    Nvard.add("Nvard","Harutyunyan", 19, 'f', true);
    Mariam.add("Mariam","Karapetyan", 21, 'f', true);
    Edgar.add("Edgar","Grigoryan", 17, 'm', false);
    Lilit.add("Lilit","Melqumyan", 18, 'f', true);
    Hrach.add("Hrach","Gevorgyan", 21, 'm', true);
    Armen.add("Armen","Abrahamyan", 19, 'm', true);
    Arpine.add("Arpine","Harutyunyan", 23, 'f', false);
    Ani.add("Ani","Hakobyan", 19, 'f', true);
    Artur.add("Artur","Gasparyan", 24, 'm', false);
    Michael.add("Michael","Sargsyan", 17, 'm', true);
    Sasha.add("Sasha","Avagyan", 18, 'm', true);
    Nona.add("Nona","Musaelyan", 18, 'f', true);
}

int search(person *ptr, std::string search, int size) {
    for (int i = 0; i < size; i++) {
        if (search == ptr[i].name) {
            ptr[i].info();
            return i;
        }
    }
    std::cout << "Error!!!\n";
    return 0;
}
