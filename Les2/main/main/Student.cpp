#include "stdafx.h"
#include "Student.h"
#include <string>

Student::Student()
{
}

Student::Student(std::string name)
{
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
