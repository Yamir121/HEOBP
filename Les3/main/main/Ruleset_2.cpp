#include "Ruleset_2.h"



Ruleset_2::Ruleset_2()
{
}


Ruleset_2::~Ruleset_2()
{
}

int Ruleset_2::useRules(int neighbourAmount)
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