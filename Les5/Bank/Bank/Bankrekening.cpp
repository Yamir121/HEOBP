#include "Bankrekening.h"



Bankrekening::Bankrekening(float saldo)
{
}


Bankrekening::~Bankrekening()
{
}

Bankrekening Bankrekening::operator+=(const Transactie& t)
{
	if (t.getafOfBij() == "+")
	{
		saldo += t.getHoeveelheid();
		transactieHistory.push_back(t);
	}
	return *this;
}

Bankrekening Bankrekening::operator-=(const Transactie& t)
{
	if (t.getafOfBij() == "-")
	{
		saldo -= t.getHoeveelheid();
		transactieHistory.push_back(t);
	}
	return *this;
}