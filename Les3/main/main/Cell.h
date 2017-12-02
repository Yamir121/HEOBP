#pragma once
#include <string>
#include "CellBehaviour.h"
#include <iostream>
#include <vector>

class Cell
{
public:
	Cell(int y, int x);
	~Cell();
	std::string returnState();
	void changeState(CellBehaviour* behaviour);
	int returnNeighbours(std::vector<std::vector<Cell>>);

public:
	int y_index;
	int x_index;
	std::string state = "   ";
	int neighbourAmount = -1;

private:
	const std::string alive = " X ";
	const std::string dead = "   ";
};