#pragma once
#include "Transactie.h"

class Bankrekening
{
public:
	Bankrekening(float saldo = 0.0f);
	~Bankrekening();
	Bankrekening operator+=(const Transactie& t);
	Bankrekening operator-=(const Transactie& t);
//private:
	float saldo;
	std::vector<Transactie> transactieHistory;
};

