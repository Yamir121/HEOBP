#pragma once


#include "Dinosaur.h";
class Park{
public:
	Park();

	void add(Dinosaur d);
	void list();
	void openGate();

private:
	Dinosaur dinosaurs[5];
	int count = 0;
};

