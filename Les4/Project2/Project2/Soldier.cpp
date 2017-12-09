#include "Soldier.h"
#include <iostream>


Soldier::Soldier(Character* c) : Decorator(c) {
}


Soldier::~Soldier()
{
}

void Soldier::render() {
	Decorator::render();
	std::cout << "- Soldier" << std::endl;
}