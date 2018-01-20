#pragma once
#include <string>
#include <iostream>


class Character
{
public:
	virtual void render() = 0;
	static Character* createCharacter(std::string type, std::string job);
	std::string name;
};

