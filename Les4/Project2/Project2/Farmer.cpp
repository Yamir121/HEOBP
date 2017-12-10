#include "Farmer.h"
#include <iostream>


Farmer::Farmer(Character* c) : Decorator(c) {
}


Farmer::~Farmer()
{
}

void Farmer::render() {
	//call render fuction from decorator which calls the original render fuction
	Decorator::render();
	//add the class of the character
	std::cout << "- Farmer" << std::endl;
}