#pragma once
#include "Character.h"
class Elf : public Character
{
public:
	Elf();
	~Elf();

	void render()
	{
		std::cout << name << std::endl;
	}

};

