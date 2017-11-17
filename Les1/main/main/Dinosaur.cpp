#include "stdafx.h"
#include "Dinosaur.h"


Dinosaur::Dinosaur()
{
}

Dinosaur::Dinosaur(std::string name)
{
	this->name = name;
}

std::string Dinosaur::getName()
{
	return name;
}
