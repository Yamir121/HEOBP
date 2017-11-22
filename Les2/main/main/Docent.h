#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
class Docent
{
public:
	~Docent();
	Docent(std::string name);
	std::string getName();

private:
	std::string name;
};

