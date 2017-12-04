#include <iostream>
#include "Matrix.h"
#include <stdlib.h>
#include <chrono>
#include <thread>

int main(int argc, char* argv[])
{
	//for the function update
	using namespace std::this_thread;
	using namespace std::chrono;
	//construct the matrix
	Matrix* world = new Matrix();
	world->matrixSize = 25;
	world->fillMatrix();
	world->table[1][3].state = " X ";
	world->table[2][3].state = " X ";
	world->table[3][3].state = " X ";
	world->table[4][3].state = " X ";

	//update frame every second
	for (int i = 0; i < 400; i++)
	{
		if (world->calcMatrix())
		{
			world->updateMatrix(1);
		}
		sleep_for(nanoseconds(10));
		sleep_until(system_clock::now() + seconds(1));
		system("cls");	
	}
	//keep the console open
	char c;
	std::cin >> c;
	return 0;
}
