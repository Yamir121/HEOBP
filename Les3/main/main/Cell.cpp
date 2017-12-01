#include "Cell.h"



Cell::Cell(int y, int x)
{
	y_index = y;
	x_index = x;
}


Cell::~Cell()
{
}

std::string Cell::returnState()
{
	return state;
}

void Cell::changeState(CellBehaviour* behaviour)
{
	int neighbourAmount = returnNeighbours();
	int f = behaviour->useRules(neighbourAmount);
	if ( f == 2)
	{
		std::cout << f << std::endl;
		this->state = " X ";
	}
	else if (f == 1)
	{
		this->state = "   ";
	}
}

int Cell::returnNeighbours()
{
	int returnValue = 0;
	//if (world->table[y_index][x_index])


	return returnValue;
}