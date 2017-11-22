#include "stdafx.h"
#include "Docent.h"
#include <string>
#include <vector>

Docent::Docent(std::string name)
{
	//name of this instance is variable name
	this->name = name;
}

std::string Docent::getName()
{
	//returns the name of this student
	return name;
}

Docent::~Docent()
{
}