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
	bool calcMatrix();
	void updateMatrix(int ruleset);
	CellBehaviour* useBehaviour(int rulesetN);
	std::vector<std::vector<Cell>> table;
	int matrixSize;
};

