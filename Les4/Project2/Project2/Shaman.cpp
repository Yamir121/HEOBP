#include "Shaman.h"
#include <iostream>


Shaman::Shaman(Character* c) : Decorator(c) {
}


Shaman::~Shaman()
{
}

void Shaman::render() {
	Decorator::render();
	std::cout << "- Shaman" << std::endl;
}