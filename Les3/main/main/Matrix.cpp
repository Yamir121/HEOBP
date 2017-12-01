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

void Matrix::updateMatrix()
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
			table[y][x].changeState(behaviour, table);
			print += table[y][x].returnState();
		}
		//print all
		std::cout << print << std::endl;
		print = "";
	}
}

CellBehaviour* Matrix::useBehaviour(CellBehaviour* ruleset) {
	CellBehaviour* ruleset1 = new Ruleset_1();
	CellBehaviour* ruleset2 = new Ruleset_2();

	return ruleset;
}