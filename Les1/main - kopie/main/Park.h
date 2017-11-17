#pragma once

#include <vector>;
#include "Dinosaur.h";
class Park{
public:
	Park();

	void add(Dinosaur d);
	void list();
	void openGate();

private:
	//Instantiates empty list for all dinosaurs.
	std::vector<Dinosaur> dinosaurs;
};

