#include <iostream>
#include "Matrix.h"
#include <stdlib.h>
#include <chrono>
#include <thread>


void print(std::string i);

int main(int argc, char* argv[])
{
	//for the function update
	using namespace std::this_thread;
	using namespace std::chrono;
	//construct the matrix
	Matrix* world = new Matrix();
	world->matrixSize = 10;
	world->fillMatrix();

	world->table[5][4].state = " X ";
	world->table[5][5].state = " X ";
	world->table[5][6].state = " X ";
	world->table[4][6].state = " X ";
	world->table[4][4].state = " X ";

	//update frame every second
	for (int i = 0; i < 400; i++)
	{
		world->updateMatrix();
		sleep_for(nanoseconds(10));
		sleep_until(system_clock::now() + seconds(1));
		system("cls");	
	}

	char c;
	std::cin >> c;
	return 0;
}

void print(std::string i) {
	std::cout << i << std::endl;
}