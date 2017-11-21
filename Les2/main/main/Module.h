#pragma once
#include "Student.h"
#include <string>
#include <vector>

class Module
{
public:
	~Module();
	Module(std::string name, int punten);
	std::string getName();
	int EC;
	std::vector<Student*> klassenLijst;

private:
	std::string name;

};

