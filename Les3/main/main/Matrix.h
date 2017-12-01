#pragma once
#include <vector>
#include "Cell.h"
#include <iostream>
#include "Ruleset_1.h"
#include "Ruleset_2.h"
#include "Ruleset_3.h"


class Matrix
{
public:
	Matrix();
	~Matrix();
	void fillMatrix();
	void updateMatrix();
	CellBehaviour* useBehaviour(CellBehaviour* ruleset);
	std::vector<std::vector<Cell>> table;
	int matrixSize;
};

