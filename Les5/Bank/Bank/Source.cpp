#include <iostream>
#include <string>
#include <vector>
#include "Bankrekening.h"

int main() {
	//construct the bankaccount
	Bankrekening rekening1 = Bankrekening();
	rekening1 += Transactie("+", 10, "14-12-2017");
	rekening1 += Transactie("+", 20, "14-12-2017");
	rekening1 -= Transactie("-", 5.05f, "14-12-2017");

	float a = rekening1.saldo;
	std::cout << rekening1.saldo << std::endl;
	std::cout << "___" << std::endl;
	std::cout << "   " << std::endl;
	for (auto i : rekening1.transactieHistory)
	{
		std::cout << i.getafOfBij() << i.getHoeveelheid() << std::endl;
		std::cout << i.getDatum() << std::endl;
		std::cout << "---" << std::endl;
	}
	char c;
	std::cin >> c;
	return 0;
}