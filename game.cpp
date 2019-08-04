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
	// Case 0
	if (userVal == 0)
		return 0;
	// Case 1
	if (userVal == targetVal)
		return 1;
	// Case 2
	if (userVal > targetVal)
		return 2;
	// Case 3
	if (userVal < targetVal)
		return 3;
	//Case 4
	else
		return 4;
}