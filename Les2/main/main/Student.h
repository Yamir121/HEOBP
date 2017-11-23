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
	int getEC();
	int totaalEC = 0;

private:	
	std::string name;

};

