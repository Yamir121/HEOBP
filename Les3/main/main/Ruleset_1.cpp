#include "Ruleset_1.h"



Ruleset_1::Ruleset_1()
{
}


Ruleset_1::~Ruleset_1()
{
}

int Ruleset_1::useRules(int neighbourAmount)
{
	if (neighbourAmount < 2)
	{
		return 1;
	}
	if (neighbourAmount > 3)
	{
		return 1;
	}
	if (neighbourAmount == 3 || neighbourAmount == 2)
	{
		return 2;	
	}
	return -1;
}