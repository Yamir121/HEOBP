#pragma once
#include "Decorator.h"
class Soldier : public Decorator
{
public:
	Soldier(Character* c);
	~Soldier();

	void render();
};

