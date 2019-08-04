// Bracket-Search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "game.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL)); //added to make rand actually random
	int actualVal = 0;
	int guessVal = 0; 
	actualVal = rand() % 100 + 1; //generating the target value for this round
	Game myGame(actualVal, guessVal); // Creating an object myGame of class Game, setting random value to actualVal, calculated only once per game.
	cout << "Created the class. actualVal and guessVal are " << myGame.targetVal << " and " << myGame.userVal << endl;
}

