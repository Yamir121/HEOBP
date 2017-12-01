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
	behaviour->change();
	//testing stuff
	if 
	//if cell is dead, revive cell
	if (this->state == "   ")
	{
		this->state = " X ";
	}
	//if cell is alive, kill cell
	else if (this->state == " X ")
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