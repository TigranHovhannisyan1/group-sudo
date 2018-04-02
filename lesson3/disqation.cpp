#include <iostream>
#include "string"
std::string patasxan;
void barev_ha() {
        std::string name;
        std::cout << "maladec lavel duxav axchiks. Anunt hincha?";
        std::cin >> name;
        canotutsyn(name);
}

void barev() {
	std::cout << "Privet devushka karinq canotananq?\t:";
	std::cin >> patasxan;
	if (patasxan == "ha") {
		barev_ha();
	} else if (patasxan == "che") {
		barev_che();
	} else {
		std::cout << "matax inim harcum tval konkret patasxane\n";
		barev();
	}
}

void hajox() {
	std::cout << " lav hajox lav kac. paka evel pakas kneres. *_* \n";
}

void sovorel() {
	std::cout << "Vrdexs sverum? \t :";
	std ::cin >> patasxan;
	std::cout << "Maladec ashkis lavel xelunqs. :-) \n patar zbavacum e..";
	hajox();
	std::cout << " urugu kxosenq. *_* \n";
}

void shpum() {
	std::cout << "hinger ones? \t: ";
	std::cin >> patasxan;
	if (patasxan == "ha") {
		hajox();
	} else if (patasxan == "che") {
		sovorel();
	} else {
		std::cout << "matax inim harcum tval konkret patasxane\n";
		shpum();
	}
}

void canotutyun(std::string name)
	std::cout << "shat xashang anun ones " << name << ". shat hachelia. Anuns Valoda karch Lyovayn asum.\n";
	std::cout << "qani tarekans?\t:";
	int age;
	std::cin >> age;
	if (age < 18 && age >=35) {
		hajox();
	} else {
		shpum();
	}
		
}

void barev_che() {
	std::cout << "xe tu ancanotnerin net canotanum chs\t?";


int main() {
	int a=10;
	barev();
	return 0;
}
