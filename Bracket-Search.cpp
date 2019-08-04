// Bracket-Search.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int actualVal = 0;
	int guessVal = 0;
	int compCase = 5; // picking a number outside of the established case range to initialize

	srand(time(NULL)); //added to make rand() actually random
	actualVal = rand() % 100 + 1; //generating the target value for this round
	
	cout << "Hello! Guess a number between 1 and 100 (or press 0 if you want to quit):\n" << endl;
	Game myGame(actualVal, guessVal); // Creating an object myGame of class Game, setting random value to actualVal, calculated only once per game.

	while (compCase > 1)
	{
		cin >> myGame.userVal;
		compCase = myGame.compareVal(); //compare new guess with target
	}
	cout << "Later!" << endl;
}

