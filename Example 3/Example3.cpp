// Loop controlled iteration
#include <iostream>
using namespace std;

int main()
{
	/*
	unsigned int counter = 1;	// Initializing the control variable

	while (counter <= 10) // Loop-continuation condition
	{
		cout << counter << " ";
		++counter;	// Increment the control variable
	}
	*/

	/*
	unsigned int i = 1;

	for ( ;i <= 100000 ; i *= 2)
	{
		cout << i << " ";
	}

	*/

	unsigned int i = 1;

	do
	{
		cout << i << " ";
		i++;
	} while (i <= 10);

	cout << endl;

	return 0;
}
