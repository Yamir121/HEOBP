#pragma once
#include <vector>
#include "Cell.h"
#include <iostream>
#include "Cellbehaviour.h"
#include "Ruleset_1.h"


class Matrix
{
public:
	Matrix();
	~Matrix();
	void fillMatrix();
	void updateMatrix();
	CellBehaviour* useBehaviour();
	std::vector<std::vector<Cell>> table;
	int matrixSize;
};

