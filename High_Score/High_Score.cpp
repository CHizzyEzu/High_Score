// High Score Reading Assignment. March 10, 2024 Junior Ezuma-Ngwu
// Creating a n if/else statement to create different outputs for various statements

#include <iostream> // Output preprocessor
#include <cstdlib> //random number 
#include <ctime> // time function
using namespace std; 

int Score()
{
	//System time and random number generation
	unsigned seed = time(0);
	srand(seed);

	// Player variables
	double randplayer2;

	// Input variable
	int play1Input;

	// Player2 random limitation variables and equation
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 10;

	randplayer2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	// Player 1 Input
	cout << "Want to test your luck player 1?  " << endl;
	cout << "Input a value between 1 - 10  " << endl;
	cin >> play1Input;

	// If/Else statements
	if (play1Input < 1 || play1Input > 10)
	{

		cout << "Hey knock it off those are invalid values! " << endl;
	}
	else if (play1Input > randplayer2)
	{
		// Verify Player 1's answer
		cout << "Player 1 inputted the value:  " << play1Input << endl;
		cin.ignore();

		//Player 2 Input 
		cout << "Player 2 inputted the value:  " << randplayer2 << endl;

		cout << "Congratulations player 1, you won!!  " << endl;
	}
	
	else if (play1Input < randplayer2)
	{
		// Verify Player 1's answer
		cout << "Player 1 inputted the value:  " << play1Input << endl;
		cin.ignore();

		//Player 2 Input 
		cout << "Player 2 inputted the value:  " << randplayer2 << endl;

		cout << "Uh oh you lost player 1, maybe try again?  " << endl;
	}
	else if (play1Input == randplayer2)
	{
		// Verify Player 1's answer
		cout << "Player 1 inputted the value:  " << play1Input << endl;
		cin.ignore();

		//Player 2 Input 
		cout << "Player 2 inputted the value:  " << randplayer2 << endl;

		cout << "Uh....I guess you tied. Try again, I guess.  " << endl;
	}
	else 
	{
		cout << "What are you doing.....  " << endl;
	}
	

	return 0;
}