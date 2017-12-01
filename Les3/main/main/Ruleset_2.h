#pragma once
#include "CellBehaviour.h"
class Ruleset_2 : public CellBehaviour
{
public:
	Ruleset_2();
	~Ruleset_2();

	int useRules(int neighbourAmount) override;
};

