#include "stdafx.h"
#include "Dinosaur.h"


Dinosaur::Dinosaur()
{
}

Dinosaur::Dinosaur(std::string name)
{
	//renames this Dinosaur the parameter string
	this->name = name;
}

std::string Dinosaur::getName()
{
	//returns the name of this Dinosaur
	return name;
}
