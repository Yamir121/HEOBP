#pragma once
#include "Module.h"
#include <string>
#include <vector>

class Student
{
public:
	Student();
	~Student();
	
	Student(std::string name);
	std::string getName();
	std::vector<Module> modules;
	
private:	
	int totaalEC;
	std::string name;
};

