#include "Transactie.h"



Transactie::Transactie(std::string afOfBij, float hoeveelheid, std::string datum)
{
	this->afOfBij = afOfBij;
	this->hoeveelheid = hoeveelheid;
	this->datum = datum;
}


Transactie::~Transactie()
{
}

float Transactie::getHoeveelheid() const
{
	return hoeveelheid;
}

std::string Transactie::getafOfBij() const
{
	return afOfBij;
}

std::string Transactie::getDatum() const
{
	return datum;
}