#include "Farmer.h"
#include <iostream>


Farmer::Farmer(Character* c) : Decorator(c) {
}


Farmer::~Farmer()
{
}

void Farmer::render() {
	Decorator::render();
	std::cout << "- Farmer" << std::endl;
}