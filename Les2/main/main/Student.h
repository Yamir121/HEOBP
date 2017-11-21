#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>

class Student
{
public:
	~Student();
	Student(std::string name);
	std::string getName();

private:	
	int totaalEC;
	std::string name;
};

