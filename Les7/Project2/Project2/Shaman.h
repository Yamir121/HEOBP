#pragma once
#include "Decorator.h"
class Shaman : public Decorator
{
public:
	Shaman(Character* c);
	~Shaman();

	void render();
};

