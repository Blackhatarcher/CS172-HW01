#include "stdafx.h"
#include "Dice.h"


Dice::Dice(int x)
{
	sides = x;
}

int Dice::Roll()
{
	return sides;
}

