#include "Ruleset_1.h"



Ruleset_1::Ruleset_1()
{
}


Ruleset_1::~Ruleset_1()
{
}

int Ruleset_1::useRules(int neighbourAmount)
{
	if (neighbourAmount == 0)
	{
		int v1 = rand() % 2;
		return v1;
	}
	else if (neighbourAmount == 1)
	{
		int v1 = rand() % 1;
		return v1;
	}
	return -1;
}