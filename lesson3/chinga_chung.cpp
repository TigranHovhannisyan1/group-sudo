#include <iostream>
#include "string"
#include "cstdlib"
std::string mode;
void info_single() {
    std::cout << "XAXI KANONNER\n Ays rejimum duq xaxum eq hamakargchi het \n Anhrajasht e nermucel tvanshan \n Qar=3 \n Mkrat=2 \n Tuxt=1\n Maxtum em hajoxutyun\n USER \t|\t COMP \t";
}

void info_multiplayer() {
        std::cout << "XAXI KANONNER\n Ays rejimum duq xaxum eq dzer ynkeroj het \n Anhrajasht e nermucel tvanshan \n Qar=3 \n Mkrat=2 \n Tuxt=1\n Maxtum em hajoxutyun\n";
}

std::string game(int player1, int player2) {
    if (player1 == player2)    {
    return "null";
    } else {
        if (player1 != 1) {
            if (player1 > player2) {
                return "player1";
            } else {
                return "player2";
            }
        } else { 
            if (player2 == 3) {
                return "player1";
            } else {
                return "player2";
            }
        }
    }
}

void single() {
    int comp, user, user_sum = 0, comp_sum = 0;
    for (int i = 1; i <= 5; i++) {
        comp = std::rand() % 3 + 1;
        std::cout << "Xax " << i << ':';
        std::cin >> user;
        if (user >= 1 && user <= 3) {
            if (game(user, comp) == "player1") {
                std::cout << "   " << ++user_sum << "\t|\t   " << comp_sum << '\t';
            } else if (game(user, comp) == "player2") {
                std::cout << "   " << user_sum << "\t|\t   " << ++comp_sum << '\t';
            } else {
                std::cout << "   " << user_sum << "\t|\t   " << comp_sum << '\t';
            }
        } else {
            std::cout << "   *\t|\t   *\t";            
        }
    }
    std::cout << std::endl;
    if (user_sum > comp_sum) {
        std::cout << '\n' << " duq haxteciq\n";
    } else if (user_sum < comp_sum) {
        std::cout << '\n' << " duq partveciq\n";
    } else {
        std::cout << "Voch voqi\n";
    }
}

void multiplayer() {
    int pair, user, user_sum = 0, pair_sum = 0;
    std::string user_name, pair_name;
    std::cout << "Inchpes e dzer anuny? :";
    std::cin >> user_name;
    std::cout << "Inchpes e dzer ynkeroj anuny? :";
    std::cin >> pair_name;
    std::cout << user_name << "\t|\t" << pair_name << '\t';
    for (int i = 1; i <= 5; i++) {
        std::cout << "Xax " << i << ' ' << user_name << ":\t";
        std::cin >> user;
        std::cout << "\t|\t\tXax " << i<< ' ' << pair_name << ":\t";
        std::cin >> pair;
        if ((user >= 1 && user <= 3) && (pair >= 1 && pair <= 3)) {
            if (game(user, pair) == "player1") {
                std::cout << "   " << ++user_sum << "\t|\t   " << pair_sum << '\t';
            } else if (game(user, pair) == "player2") {
                std::cout << "   " << user_sum << "\t|\t   " << ++pair_sum << '\t';
            } else {
                std::cout << "   " << user_sum << "\t|\t   " << pair_sum << '\t';
            }
        } else {
            std::cout << "   *\t|\t   *\t";
        }
    }
    std::cout << std::endl;
    if (user_sum > pair_sum) {
        std::cout << '\n' << user_name << " duq haxteciq\n";
    } else if (user_sum < pair_sum) {
        std::cout << '\n' << pair_name << " duq haxteciq\n";
    } else {
        std::cout << "Voch voqi\n";
    }
}

std::string welcome() {
    std::cout << "CHINGA CHUNG \n yntreq xaxi rejimy (single kam multiplayer ) : ";
    std::cin >> mode;
    return mode;
}

int main() {
    std::string mode = welcome(); 
    if (mode == "single") {
        info_single();
        single();
    } else if(mode == "multiplayer") {
        info_multiplayer();
        multiplayer();
    } else {
        std::cout << "nermuceq single kam multiplayer!!!";
    }
    return 0;
}
