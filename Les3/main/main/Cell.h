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
	void changeState(CellBehaviour* behaviour, std::vector<std::vector<Cell>> table);
	int returnNeighbours(std::vector<std::vector<Cell>>);

public:
	int y_index;
	int x_index;
	std::string state;

private:
	const std::string alive = "   ";
	const std::string dead = " X ";
};