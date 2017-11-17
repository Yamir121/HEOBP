#include "stdafx.h"
#include "Park.h"
#include<iostream>
#include <vector>;

Park::Park()
{
}

void Park::add(Dinosaur d) {
	//adds the dinosaur given in the parameter to the list
	dinosaurs.push_back(d);
}
void Park::list() {
	//creates a integer for the length of the list
	int index = dinosaurs.size();
	//loops though the list and prints them on the console.
	for (int i = 0; i < index; ++i) {
		std::cout << dinosaurs[i].getName() << std::endl;
	}
	std::cout << "------------------" << std::endl;
}
void Park::openGate() {
	//removes last dinosaur from the list (when gate opens the dinosaur escapes)
	dinosaurs.pop_back();
}
