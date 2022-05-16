// Selection statements
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Pseudocode
	/*
		Prompt the user to enter a number
		Read the number



		Check if the last digit is 0 - 9

		If even...display a message

		If odd...display a message
	*/

	int myNumber = 0;

	cout << "Please enter a number between 0 and 9: ";
	cin >> myNumber;

	// Ternary statement
	string output = (myNumber == 0) ? "Your number is 0" : "Your number is not 0";

	cout << output << endl;

	switch (myNumber)
	{
		case 0:	
		case 1:	
		case 2:	
		case 3:	
		case 4:	
		case 5:	
		case 6:	
		case 7:	
		case 8:	
		case 9:	
			cout << "Your number is between 0 and 9";
			break;
		default: 
			cout << "The number is not between 0 and 9";
			break;
	}

	cout << "Goodbye!\n\n\n";


	return 0;
}