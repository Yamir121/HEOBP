#pragma once
#include <stdlib.h>

class CellBehaviour
{
public:
	CellBehaviour();
	~CellBehaviour();

	virtual int useRules(int neighbourAmount) = 0;
};

