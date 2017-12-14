#pragma once
#include <vector>
#include <string>
#include <iostream>

class Transactie
{
public:
	Transactie(std::string afOfBij, float hoeveelheid, std::string datum);
	~Transactie();
	float getHoeveelheid() const;
	std::string getafOfBij() const;
	std::string getDatum() const;
private:
	std::string afOfBij = "";
	float hoeveelheid = 0.0f;
	std::string datum = "";
};

