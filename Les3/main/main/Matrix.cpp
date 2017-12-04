#include "Matrix.h"

Matrix::Matrix()
{
}


Matrix::~Matrix()
{
}

void Matrix::fillMatrix()
{
	//create the rows for the horizontal length of the grid
	for (int i = 0; i < matrixSize; i++)
	{
		std::vector<Cell> row;
		for (int j = 0; j < matrixSize; j++)
		{
			//add cells to the row
			row.push_back(Cell(i,j));
		}
		//add the rows to the table
		table.push_back(row);
	}
}

bool Matrix::calcMatrix()
{
	for (int y = 0; y < matrixSize; y++)
	{
		//for all cells in the rows check for amount of neighbours
		for (int x = 0; x < matrixSize; x++)
		{
			//total amount of neighbours of this cell
			int returnValue = 0;
			//an array of all the combinations of coordinate differences
			int allValues[16] = { 1,1,0,1,1,0,-1,-1,-1,0,0,-1,-1,1,1,-1 };
			//for all these values check if they are within range of the vector
			for (int i = 0; i < 16; i += 2)
			{
				bool outOfRange = false;
				int yValue = y + allValues[i];
				int xValue = x + allValues[i + 1];
				//Check for the range of the vectors
				if (yValue > (matrixSize - 1) || yValue < 0 || xValue >(matrixSize - 1) || xValue < 0)
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
			table[y][x].neighbourAmount = returnValue;
		}
	}
	return true;
}

void Matrix::updateMatrix(int ruleset)
{
	//use the behaviour defined in the usebehaviour function
	CellBehaviour* behaviour = useBehaviour(ruleset);
	std::string print;
	//for the y size of the matrix define the rows
	for (int y = 0; y < matrixSize; y++)
	{
		//for the rows check for statechanges conform the behaviour
		for (int x = 0; x < matrixSize; x++)
		{
			table[y][x].changeState(behaviour);
			print += table[y][x].returnState();
		}
		//print all
		std::cout << print << std::endl;
		print = "";
	}
}

CellBehaviour* Matrix::useBehaviour(int rulesetN) {

	switch (rulesetN)
	{
	case 1:
		return new Ruleset_1();
		break;
	case 2: 
		return new Ruleset_2();
		break;
	case 3:
		return new Ruleset_3();
		break;
	default:
		//default ruleset is 1
		return new Ruleset_1();
		break;
	}
}