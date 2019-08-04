#include "game.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Game::Game(int target) // "target" is the target number to hit. This is randomly generated.

/*need to store "target," "guess,"
need to compare these 2 values. My outline is written comparing in this order: guess ? target
	this function will have 5 possible (int) results:
	0 : quit
	1 : guess = target
	2 : guess > target
	3 : guess < target
	4 : not a valid entry
	*/