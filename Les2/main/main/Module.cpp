#include "stdafx.h"
#include "Module.h"
#include <vector>

Module::Module(std::string name, int punten)
{

	EC = punten;
	//name of this instance is variable name
	this->name = name;

}

std::string Module::getName()
{
	//returns the name of this student
	return name;
}

Module::~Module()
{
}
