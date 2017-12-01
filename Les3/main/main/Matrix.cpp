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
	CellBehaviour* behaviour = useBehaviour();
	std::string print;
	//for the y size of the matrix define the rows
	for (int i = 0; i < matrixSize; i++)
	{
		std::vector<Cell> row = table[i];
		//for the rows check for statechanges conform the behaviour
		for (int j = 0; j < matrixSize; j++)
		{
			row[j].changeState(behaviour);
			print += row[j].returnState();
		}
		//print all
		std::cout << print << std::endl;
		print = "";
	}
}

CellBehaviour* Matrix::useBehaviour() {
	return new Ruleset_1();
}