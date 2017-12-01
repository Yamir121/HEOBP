#pragma once
#include <string>
#include "CellBehaviour.h"

class Cell
{
public:
	Cell(int y, int x);
	~Cell();
	std::string returnState();

	void changeState(CellBehaviour* behaviour);
	int returnNeighbours();

public:
	int y_index;
	int x_index;
	std::string state = " X ";
};