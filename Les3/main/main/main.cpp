#include <iostream>
#include "Matrix.h"


void print(std::string i);

int main()
{

	Matrix* world = new Matrix();
	world->matrixSize = 10;
	world->fillMatrix();
	world->printMatrix();
	
	char c;
	std::cin >> c;
	return 0;
}

void print(std::string i) {
	std::cout << i << std::endl;
}