#include <iostream>
#include "people.cpp"
int main() {
    std::string searchName;
    std::cout << "Tigran, Nvard, Mariam, Edgar, Lilit, Hrach, Armen, Arpine, Ani, Artur, Miqael, Sasha, Nona\n";
    people itc[14];// = {Tigran, Nvard, Mariam, Edgar, Lilit, Hrach, Armen, Arpine, Ani, Artur, Miqael, Sasha, Nona};
    people &Tigran = itc[0];
    people &Nvard = itc[1], &Mariam = itc[2], &Edgar = itc[3], &Lilit = itc[4];
    people &Hrach = itc[5], &Armen = itc[6], &Arpine = itc[7], &Ani = itc[8];
    people &Artur =itc[9], &Miqael = itc[10], &Sasha = itc[11], &Nona = itc[12];
    Tigran.add("Tigran", "Hovhannisyan", 20, "male",true);
    Nvard.add("Nvard","Harutyunyan", 19, "female", true);
    Mariam.add("Mariam","Karapetyan", 21, "female", true);
    Edgar.add("Edgar","Grigoryan", 17, "male", false);
    Lilit.add("Lilit","Melqumyan", 18, "female", true);
    Hrach.add("Hrach","Gevorgyan", 21, "male", true);
    Armen.add("Armen","Abrahamyan", 19, "male", true);
    Arpine.add("Arpine","Harutyunyan", 23, "female", false);
    Ani.add("Ani","Hakobyan", 19, "female", true);
    Artur.add("Artur","Gasparyan", 24, "male", false);
    Miqael.add("Miqael","Sargsyan", 17, "male", true);
    Sasha.add("Sasha","Avagyan", 18, "male", true);
    Nona.add("Nona","Musaelyan", 18, "female", true);
    std::cout << "Input name : ";
    std::cin >> searchName;
    int x = search(itc, searchName, sizeof(itc));
    if (x != -1) {
        itc[x].info();
    } else {
        std::cout << "Error!!!";
    }
}
