#pragma once
#include "Character.h"

class Decorator : public Character {
	Character* theCharacter;
public:
	Decorator(Character* c);

	virtual void render();
};