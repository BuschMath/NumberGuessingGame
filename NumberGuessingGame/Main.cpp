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

int main()
{
	// seed random number generator
	srand(unsigned int(time(NULL)));

	// output to screen random number between 1 and 10
	int randomNumber = rand() % 10 + 1;

	int userInput;

	cout << "Welcome to the number guessing game!\n\nPlease guess a number";
	cout << " between 1 and 10 then press enter : ";

	cin >> userInput;

	cout << "\nYour number is : " << userInput << endl;
	cout << "The random number is: " << randomNumber << endl;

	if (randomNumber == userInput)
		cout << "Congrats! You won!" << endl;
	else
		cout << "You lost, loser!" << endl;

	return 0;
}