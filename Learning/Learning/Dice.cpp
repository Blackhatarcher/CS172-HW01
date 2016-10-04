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
int Dice::GetRolls() {
	return 0;
}
int Dice::GetSides() {
	return 0;
}
