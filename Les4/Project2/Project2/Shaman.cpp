#include "Shaman.h"
#include <iostream>


Shaman::Shaman(Character* c) : Decorator(c) {
}


Shaman::~Shaman()
{
}

void Shaman::render() {
	//call render fuction from decorator which calls the original render fuction
	Decorator::render();
	//add the class of the character
	std::cout << "- Shaman" << std::endl;
}