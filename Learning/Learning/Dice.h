#pragma once

class Dice
{
public:
	Dice(int side);
	int Roll();
	int GetRolls();
	int GetSides();
private:
	int sides;
};

