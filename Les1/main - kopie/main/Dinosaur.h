#pragma once

#include <string>

class Dinosaur
{
public:
	Dinosaur();
	Dinosaur(std::string name);

	std::string getName();

private:
	//Name of the Dinosaur
	std::string name;

};

