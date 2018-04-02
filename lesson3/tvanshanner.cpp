#include <iostream>
#include "string"
int main() {
    int num, a, b, c, d;
    std :: string miavor, tasnavor, haryuravor, hazaravor;
    std :: cout << "Nermuceq [1,9999] mijakayqic voreve tiv: ";
    std :: cin >> num;
    if (num < 1 || num > 9999 ) {
        std::cout << "Error! Nermuceq tiv nshvac mijakayqic\n";
    } else {
        d = num % 10;
        c = (num % 100) / 10;
        b = (num % 1000) / 100;
        a = num / 1000;
        switch (d) {
            case 1 : miavor = "mek"; break;
            case 2 : miavor = "erku"; break;
            case 3 : miavor = "ereq"; break;
            case 4 : miavor = "chors"; break;
            case 5 : miavor = "hing"; break;
            case 6 : miavor = "vec"; break;
            case 7 : miavor = "yot"; break;
            case 8 : miavor = "ut"; break;
            case 9 : miavor = "iny"; break;
            case 0 : miavor = "";  break;
        }
        switch (c) {
            case 1 : tasnavor = "tasn"; break;
            case 2 : tasnavor = "qsan"; break; 
            case 3 : tasnavor = "eresun"; break;
            case 4 : tasnavor = "qarasun"; break;
            case 5 : tasnavor = "hisun"; break;
            case 6 : tasnavor = "vatsun"; break;
            case 7 : tasnavor = "jotanasun"; break;
            case 8 : tasnavor = "utsun"; break;
            case 9 : tasnavor = "innsun"; break;
            case 0 : tasnavor = ""; break;
        }
        switch (b) {
            case 1 :
            case 0 : haryuravor = ""; break;
            case 2 : haryuravor = "erku"; break;
            case 3 : haryuravor = "ereq"; break;
            case 4 : haryuravor = "chors"; break;
            case 5 : haryuravor = "hing"; break;
            case 6 : haryuravor = "vec"; break;
            case 7 : haryuravor = "yot"; break;
            case 8 : haryuravor = "ut"; break;
            case 9 : haryuravor = "iny"; break;
        }
        switch (a) {
            case 1 :
            case 0 : hazaravor = ""; break;
            case 2 : hazaravor = "erku "; break;
            case 3 : hazaravor = "ereq "; break;
            case 4 : hazaravor = "chors "; break;
            case 5 : hazaravor = "hing "; break;
            case 6 : hazaravor = "vec "; break;
            case 7 : hazaravor = "yot "; break;
            case 8 : hazaravor = "ut "; break;
            case 9 : hazaravor = "iny "; break;
        }
        if (d == 0 && c == 1) {
            tasnavor = "tasy";
	}
        std :: cout << hazaravor;
        a ? std :: cout << "hazar " : std :: cout << "";
        std :: cout << haryuravor;
        b ? std :: cout << " haryur " : std :: cout << "";
        std :: cout << tasnavor << miavor << std :: endl;
    }
    return 0;
}
