// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include "Module.h"


void printStudentlijst(std::vector<Student*> studentenLijst, std::vector<Module*> moduleLijst);
int getEC(std::vector<Module*> moduleLijst, Student* student);

int main()
{
	//creates the list for all the students
	std::vector<Student*> studentenLijst;
	std::vector<Module*> moduleLijst;
	//create student *make this a list*
	Student* student1 = new Student("Bert Baas");
	Student* student2 = new Student("Frans Froque");
	Student* student3 = new Student("Dirk Doofus");
	Module* module1 = new Module("Project Context",5);

	module1->klassenLijst.push_back(student1);
	//getEC(moduleLijst, student1);

	studentenLijst.push_back(student1);
	studentenLijst.push_back(student2);
	studentenLijst.push_back(student3);
	
	printStudentlijst(studentenLijst, moduleLijst);

	char c;
	std::cin >> c;
    return 0;
}

void printStudentlijst(std::vector<Student*> studentenLijst, std::vector<Module*> moduleLijst)
{
	std::cout << "------------------" << std::endl;
	std::vector<Student*>::iterator i = studentenLijst.begin();

	while (i != studentenLijst.end())
	{

		std::cout << (*i)->getName() << std::endl;
		std::cout << getEC(moduleLijst, (*i)) << std::endl;
		std::cout << "------------------" << std::endl;
		i++;

	}

}

int getEC(std::vector<Module*> moduleLijst, Student* student)
{
	int totaalEC = 0;

	std::vector<Module*>::iterator i = moduleLijst.begin();
	while (i != moduleLijst.end())
	{
		std::vector<Student*> klas = (*i)->klassenLijst;
		std::vector<Student*>::iterator i = klas.begin();
		while (i != klas.end())
		{
			if ((*i)->getName() == student->getName())
			{
				return 4;
			}
			i++;
		}
		i++;
	}
	return 0;
}
