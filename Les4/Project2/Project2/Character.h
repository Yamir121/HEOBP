#pragma once
#include <string>
#include <iostream>

class Character
{
public:
	virtual void render() = 0;
	std::string name;
};

