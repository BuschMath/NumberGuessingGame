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

// Preconditions:	Included iostream and winning condition has been met.
// Postconditions:	Winning message is outputed to standard output device and end line is 
//					executed. 
void won();

int main()
{
	// seed random number generator
	srand(unsigned int(time(NULL)));

	// output to screen random number between 1 and 10
	int randomNumber = rand() % 10 + 1;

	int userInput;
	int guesses = 1;

	cout << "Welcome to the number guessing game!\n\nYou will have three guesses. ";
	
	while (guesses <= 3)
	{
		cout << "Please guess a number between 1 and 10 then press enter : ";

		cin >> userInput;

		if (randomNumber == userInput)
		{
			won();
			guesses = 4;
		}
		else
		{
			cout << "Your " << guesses++ << " is incorrect." << endl;

			if (guesses >= 4)
				cout << "You lost." << endl;
		}
	}

	return 0;
}

void won()
{
	cout << "Congrats! You won!" << endl;
}