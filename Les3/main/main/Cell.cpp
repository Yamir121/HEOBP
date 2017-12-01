#include "Cell.h"

Cell::Cell(int y, int x)
{
	y_index = y;
	x_index = x;

	//bad code, change this
	std::string beginState;
	int random = rand() % 2;
	if (random == 1)
	{
		beginState = " . ";
	}
	else
	{
		beginState = " X ";
	}
	//end bad code

	//this->state = beginState;
}

Cell::~Cell()
{
}

std::string Cell::returnState()
{
	return this->state;
}

void Cell::changeState(CellBehaviour* behaviour, std::vector<std::vector<Cell>> table)
{
	int neighbourAmount = returnNeighbours(table);
	//change var name 2 means revive, 1 means kill
	int f = behaviour->useRules(neighbourAmount);
	if ( f == 2)
	{
		this->state = " X ";
	}
	else if (f == 1)
	{
		this->state = "   ";
	}
	else 
	{
		this->state = " F ";
	}
}

int Cell::returnNeighbours(std::vector<std::vector<Cell>> table)
{
	//total amount of neighbours of this cell
	int returnValue = 0;
	//an array of all the combinations of coordinate differences
	int allValues[16] = {1,1,0,1,1,0,-1,-1,-1,0,0,-1,-1,1,1,-1};
	//for all these values check if they are within range of the vector
	for (int i = 0; i < 16; i+=2)
	{
		bool outOfRange = false;
		int yValue = y_index + allValues[i];
		int xValue = x_index + allValues[i+1];
		//hardcoded, fix this
		if (yValue > 9 || yValue < 0 || xValue > 9 || xValue < 0)
		{
			outOfRange = true;
		}
		if (outOfRange == false)
		{
			//add 1 to the neighbour count if the state is alive
			if (table[yValue][xValue].state == " X ")
			{
				returnValue += 1;
			}
		}
	}
	return returnValue;
}