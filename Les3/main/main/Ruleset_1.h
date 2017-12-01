#pragma once
#include "CellBehaviour.h"
class Ruleset_1 : public CellBehaviour
{
public:
	Ruleset_1();
	~Ruleset_1();

	int useRules(int neighbourAmount) override;
};

