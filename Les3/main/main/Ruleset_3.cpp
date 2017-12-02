#include "Ruleset_3.h"



Ruleset_3::Ruleset_3()
{
}


Ruleset_3::~Ruleset_3()
{
}

int Ruleset_3::useRules(int neighbourAmount)
{
	if (neighbourAmount > 6)
	{
		return 1;
	}
	if (neighbourAmount < 2)
	{
		return 1;
	}
	if (neighbourAmount == 3 || neighbourAmount == 4 || neighbourAmount == 5)
	{
		return 2;
	}
	else
	{
		return 2;
	}
	return -1;
}

