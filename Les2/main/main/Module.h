#pragma once
#include "Student.h"
#include <string>
#include <vector>
#include "Docent.h"

class Module
{
public:
	~Module();
	Module(std::string name, int punten);
	std::string getName();
	int EC;
	std::vector<Student*> klassenLijst;
	Docent* docent;

private:
	std::string name;
};

