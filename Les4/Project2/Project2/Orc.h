#pragma once
#include "Character.h"
class Orc : public Character
{
public:
	Orc();
	~Orc();

	void render()
	{
		std::cout << name << std::endl;
	}

};

