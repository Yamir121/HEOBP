// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Docent.h"
#include <iostream>
#include <vector>
#include "Module.h"
#include <algorithm>

void printStudentlijst(std::vector<Student*> studentenLijst);
void moduleToewijzen(std::vector<Student*> studentenLijst, Module* modules[]);
void printModulelijst(Module* modules[]);

int main()
{
	//create module array and modules
	Module* modules[3] = {
		new Module("Project Context",5),
		new Module("Heavy Object Oriented Programming", 2),
		new Module("Kernvak Game Design", 4)
	};
	//creates the list for all the students
	std::vector<Student*> studentenLijst;
	//create students
	studentenLijst.push_back(new Student("Bert Baas"));
	studentenLijst.push_back(new Student("Frans Froque"));
	studentenLijst.push_back(new Student("Dirk Doofus"));
	studentenLijst.push_back(new Student("Ollie Ober"));
	studentenLijst.push_back(new Student("Sarah Sievert"));
	studentenLijst.push_back(new Student("Merel Mozart"));
	studentenLijst.push_back(new Student("Wanda Warrig"));
	studentenLijst.push_back(new Student("Gerard Groen"));
	studentenLijst.push_back(new Student("Evert Elerfort"));
	studentenLijst.push_back(new Student("Hannah Hoeder"));
	//create docenten and assign them to a module
	modules[0]->docent = new Docent("Harold Hardie");
	modules[1]->docent = new Docent("Vera Vlinderbes");
	modules[2]->docent = new Docent("Erica Ederveer");

	//assign all students into random modules
	moduleToewijzen(studentenLijst, modules);
	//print the modulelist with docent, studentlist and EC of that class
	printModulelijst(modules);
	//print a list of all students with their total EC
	printStudentlijst(studentenLijst);
	//modules[0]->EC = 4;
	//printStudentlijst(studentenLijst);
	//remove student based on index of the list
	modules[0]->klassenLijst.erase(modules[0]->klassenLijst.begin() + 4);
	//print the list of all modules again
	printModulelijst(modules);
	//to make the console stay open
	char c;
	std::cin >> c;
    return 0;
}

void printModulelijst(Module* modules[])
{
	for (int j = 0; j < 3; j++)
	{
		Module* m = modules[j];
		std::cout << " " << std::endl;
		std::cout << m->getName() + ", EC: " + std::to_string(m->EC) << std::endl;
		std::cout << m->docent->getName() << std::endl;
		std::cout << "------------------" << std::endl;

		std::vector<Student*> lijst = m->klassenLijst;
		std::vector<Student*>::iterator i = lijst.begin();
		while (i != lijst.end())
		{
			std::cout << (*i)->getName() << std::endl;
			i++;
		}
		std::cout << "------------------" << std::endl;
	}
}

void printStudentlijst(std::vector<Student*> studentenLijst)
{
	std::cout << "------------------" << std::endl;
	std::vector<Student*>::iterator i = studentenLijst.begin();

	while (i != studentenLijst.end())
	{
		std::cout << (*i)->getName() << std::endl;
		std::cout << "Totaal EC: " + std::to_string((*i)->getEC()) << std::endl;
		std::cout << "------------------" << std::endl;
		i++;
	}
}

void moduleToewijzen(std::vector<Student*> studentenLijst, Module* modules[])
{
	std::vector<Student*>::iterator i = studentenLijst.begin();
	while (i != studentenLijst.end())
	{
		//for all students in the studentlist get a random amount of modules
		int randAmount = rand() % 3+1;
		for (int j = 0; j < randAmount; j++)
		{
			//get a random module index number
			int randModule = rand() % 3;
			std::vector<Student*> lijst = modules[randModule]->klassenLijst;
			//check if student isn't in list already
			if (std::find(lijst.begin(), lijst.end(), (*i)) != lijst.end()) {
				//student already in list
			}
			else {
				//add student to this random module
				modules[randModule]->klassenLijst.push_back(*i);
				(*i)->totaalEC += modules[randModule]->EC;
			}
		}
		i++;
	}
}