// Calculate compound interest
#include <iostream>
#include <iomanip>	// Manipulate I/O
#include <cmath>	// Math functions
using namespace std;

int main()
{
	// Set our floating point values to 2 decimal places
	cout << fixed << setprecision(2);

	double principal = 1000;
	double rate = 0.05;

	cout << "Initial principal: " << principal << endl;
	cout << "Interest Rate: " << rate << endl;

	cout << "\nYear" << setw(20) << "Amount on deposit" << endl;

	for (unsigned int year = 1; year <= 10; year++)
	{
		double amount = principal * pow(1.0 + rate, year);

		cout << setw(4) << year << setw(20) << amount << endl;
	}

	return 0;
}