#include <iostream>
#include "Matrix.h"


void print(std::string i);

int main()
{

	Matrix* world = new Matrix();
	world->matrixSize = 10;
	world->fillMatrix();
	world->updateMatrix();
	
	//get amount of neighbours per cell
	//implement rules in ruleset 1
	//create an function update
	//do 2 more rulesets

	char c;
	std::cin >> c;
	return 0;
}

void print(std::string i) {
	std::cout << i << std::endl;
}