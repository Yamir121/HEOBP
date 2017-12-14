#include <iostream>
#include <string>
#include <vector>
#include "Bankrekening.h"

int main() {
	//construct the bankaccount
	Bankrekening rekening = Bankrekening();
	rekening += Transactie("+", 100, "14-12-2017");
	rekening -= Transactie("-", 19.95f, "14-12-2017");
	rekening -= Transactie("-", 7.50f, "14-12-2017");

	std::cout << rekening << std::endl;

	char c;
	std::cin >> c;
	return 0;
}