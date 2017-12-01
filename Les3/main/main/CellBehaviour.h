#pragma once
#include <stdlib.h>
#include <iostream>

class CellBehaviour
{
public:
	CellBehaviour();
	~CellBehaviour();

	virtual int useRules(int neighbourAmount) = 0;
};

