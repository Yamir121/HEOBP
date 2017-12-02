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

	//update frame every second
	for (int i = 0; i < 400; i++)
	{
		world->updateMatrix(1);
		//testing, amount of neighbours of cell 0,0
		std::cout << world->table[0][0].returnNeighbours(world->table) << std::endl;
		sleep_for(nanoseconds(10));
		sleep_until(system_clock::now() + seconds(1));
		system("cls");	
	}
	//keep the console open
	char c;
	std::cin >> c;
	return 0;
}
