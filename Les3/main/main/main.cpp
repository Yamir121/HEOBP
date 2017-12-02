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
	world->matrixSize = 10;
	world->fillMatrix();
	world->table[1][1].state = " X ";
	world->table[2][2].state = " X ";
	world->table[2][1].state = " X ";
	world->table[1][2].state = " X ";

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
