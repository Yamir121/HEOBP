#include "Soldier.h"
#include <iostream>


Soldier::Soldier(Character* c) : Decorator(c) {
}


Soldier::~Soldier()
{
}

void Soldier::render() {
	//call render fuction from decorator which calls the original render fuction
	Decorator::render();
	//add the class of the character
	std::cout << "- Soldier" << std::endl;
}