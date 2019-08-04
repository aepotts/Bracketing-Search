// game.cpp for class Game in Bracket Search game

#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int target, int guess) // "target" is the target number to hit. This is randomly generated.
{
	targetVal = target;
	userVal = guess;
}

int Game::compareVal() //this could maybe be optimized
{
	// Case 0 invalid character (letters do this)
	if (userVal == 0)
	{
		cout << "It's quittin' time!" << endl;
		return 0;
	}
	// Case 1 user wins
	if (userVal == targetVal)
	{
		cout << "Nailed it!" << endl;
		return 1;
	}
	// Case 2 user's guess was so high it failed a drug test
	if (userVal > targetVal)
	{
		cout << "Too high!" << endl;
		return 2;
	}
	// Case 3
	if (userVal < targetVal)
	{
		cout << "Too low!" << endl;
		return 3;
	}
	//Case 4
	else //this was supposed to be for letters but they show up as 0
	{
		cout << "Try again, ding dong!" << endl;
		return 4;
	}
}