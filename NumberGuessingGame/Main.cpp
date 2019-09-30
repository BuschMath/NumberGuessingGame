/*
	David Busch
	C++ Fall 2019
	Due: Dec. 18, 2019
	Lab 42: Number guessing game
	This is a game that allows user to guess random numbers.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void won();

int main()
{
	// seed random number generator
	srand(unsigned int(time(NULL)));

	// output to screen random number between 1 and 10
	int randomNumber = rand() % 10 + 1;

	int userInput;

	cout << "Welcome to the number guessing game!\n\nYou will have three guesses. ";
	cout << "Please guess a number between 1 and 10 then press enter : ";

	cin >> userInput;

	if (randomNumber == userInput)
		won();
	else
	{
		cout << "Your answer is incorrect. This is your second guess: ";
		cin >> userInput;
		if (randomNumber == userInput)
			won();
		else
		{
			cout << "You're still wrong. This is your final guess: ";
			cin >> userInput;
			if (randomNumber == userInput)
				won();
			else
				cout << "You lost, loser!" << endl;
		}
	}

	return 0;
}

void won()
{
	cout << "Congrats! You won!" << endl;
}