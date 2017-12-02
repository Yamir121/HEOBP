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
	return this->state;
}

void Cell::changeState(CellBehaviour* behaviour)
{
	//2 means revive, 1 means kill
	int change = behaviour->useRules(neighbourAmount);
	if (change == 2)
	{
		this->state = alive;
	}
	else if (change == 1)
	{
		this->state = dead;
	}
	else 
	{
		//failsave to check if the rules are workings
		this->state = " F ";
	}
	this->neighbourAmount = -1;
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
	//std::cout << returnValue << std::endl;
	return returnValue;
}