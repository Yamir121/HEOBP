#include "stdafx.h"
#include "Park.h"
#include<iostream>


Park::Park()
{
}

void Park::add(Dinosaur d) {
	dinosaurs[count] = d;
	count++;
}
void Park::list() {
	for (int i = 0; i < count; ++i) {
		std::cout << dinosaurs[i].getName() << std::endl;
	}
	std::cout << "------------------" << std::endl;
}
void Park::openGate() {
	count--;
}
