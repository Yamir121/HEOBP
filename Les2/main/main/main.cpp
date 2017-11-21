// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include "Module.h"


void printStudentlijst(std::vector<Student*> studentenLijst);

int main()
{
	//creates the list for all the students
	std::vector<Student*> studentenLijst;
	//create student *make this a list*
	Student* student1 = new Student("Bert Baas");
	Student* student2 = new Student("Frans Froque");
	Student* student3 = new Student("Dirk Doofus");
	Module* module1 = new Module("Project Context",5);



	studentenLijst.push_back(student1);
	studentenLijst.push_back(student2);
	studentenLijst.push_back(student3);
	
	printStudentlijst(studentenLijst);

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
		std::cout << (*i)->getEC() << std::endl;
		std::cout << "------------------" << std::endl;
		i++;

	}

}
