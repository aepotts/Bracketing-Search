#pragma once
#include <cstdlib>
#include <stdio.h>
#include <ctime>
using namespace std;

//Calling this class "Game" because it's keeping track of one session of this guessing game
class Game
{
public:
	Game(int, int); //constructor
	int compareVal(); // Compare the values of guess and target, output an int based on the case. See ReadMe for case values.
	int userVal; // probs doesn't need to be here?
	int targetVal; // random value the user is trying to guess - move back to private after testing
private:

};

