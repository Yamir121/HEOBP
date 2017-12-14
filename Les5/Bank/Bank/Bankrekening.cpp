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

std::ostream& operator<<(std::ostream& os, const Bankrekening& r)
{
	os << "$" << r.saldo << std::endl;
	os << "___" << std::endl;
	os << "   " << std::endl;
	for (auto i : r.transactieHistory)
	{
		os << i.getafOfBij() << i.getHoeveelheid() << std::endl;
		os << i.getDatum() << std::endl;
		os << "---" << std::endl;
	}

	return os;
}