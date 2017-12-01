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

void Matrix::printMatrix()
{
	updateMatrix();
	//define the printable
	std::string print;
	for (int i = 0; i < matrixSize; i++)
	{
		std::vector<Cell> row = table[i];
		
		for (int j = 0; j < matrixSize; j++)
		{
			print += row[j].returnState();
			
		}
		std::cout << print << std::endl;
		print = "";
	}
}

void Matrix::updateMatrix()
{
	CellBehaviour* behaviour = useBehaviour();

	for (int i = 0; i < matrixSize; i++)
	{
		std::vector<Cell> row = table[i];

		for (int j = 0; j < matrixSize; j++)
		{
			row[j].changeState(behaviour);
		}
	}
}

CellBehaviour* Matrix::useBehaviour() {
	return new Ruleset_1();
}