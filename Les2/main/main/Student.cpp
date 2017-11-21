#include "stdafx.h"
#include "Student.h"
#include <string>
#include <vector>

Student::Student(std::string name)
{
	//name of this instance is variable name
	this->name = name;
}

std::string Student::getName()
{
	//returns the name of this student
	return name;
}

Student::~Student()
{
}
