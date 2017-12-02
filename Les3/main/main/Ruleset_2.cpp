#include "Ruleset_2.h"



Ruleset_2::Ruleset_2()
{
}


Ruleset_2::~Ruleset_2()
{
}

int Ruleset_2::useRules(int neighbourAmount)
{
	if (neighbourAmount >= 6)
	{
		return 1;
	}
	if (neighbourAmount < 2)
	{
		return 2;
	}
	if (neighbourAmount >= 2 && neighbourAmount < 6)
	{
		return 1;
	}
	return -1;
}