// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include "Module.h"


void printStudentlijst(std::vector<Student*> studentenLijst);
void moduleToewijzen(std::vector<Student*> studentenLijst, Module* modules[]);

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


	//printStudentlijst(studentenLijst);

	moduleToewijzen(studentenLijst, modules);

	//test - klassenlijst printen van alle modules
	
	for (int j = 0; j < 3; j++)
	{
		Module* m = modules[j];
		std::cout << " " << std::endl;
		std::cout << m->getName() << std::endl;
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
	//test

	char c;
	std::cin >> c;
    return 0;
}

void printStudentlijst(std::vector<Student*> studentenLijst)
{
	std::cout << "------------------" << std::endl;
	std::vector<Student*>::iterator i = studentenLijst.begin();

	while (i != studentenLijst.end())
	{
		std::cout << (*i)->getName() << std::endl;
		std::cout << "------------------" << std::endl;
		i++;

	}

}

void moduleToewijzen(std::vector<Student*> studentenLijst, Module* modules[])
{
	std::vector<Student*>::iterator i = studentenLijst.begin();
	//for all students in the studentlist get a random amount of modules
	while (i != studentenLijst.end())
	{
		int randNum = rand() % 3 + 1;
		//than loop through it and get this number of random modules
		for (int r = 0; r < randNum; r++)
		{
			int j = rand() % 3;
			//add student to this random module

			std::vector<Student*> lijst = modules[j]->klassenLijst;
			std::vector<Student*>::iterator q = lijst.begin();
			while (q != lijst.end())
			{ //stuck on trying to compare the name of this student with the one in the klassenlijst
				if (*i->getName() == *q->getName())
				{
					modules[j]->klassenLijst.push_back(*i);
				}
				q++;
			}

			
		}
		i++;
	}
}