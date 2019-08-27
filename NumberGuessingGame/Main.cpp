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
	cout << rand() % 10 + 1 << endl;

	return 0;
}