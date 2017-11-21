#pragma once


#include "Dinosaur.h";
class Park{
public:
	Park();

	void add(Dinosaur d);
	void list();
	void openGate();
	int count = 0;
	
};

