#pragma once
#include "Decorator.h"
class Farmer : public Decorator
{
public:
	Farmer(Character* c);
	~Farmer();

	void render();
};

