/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 (Paul Lindberg) <(ryaib@csu.fullerton.edu)>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* This program will take an integer from the user. It will then print out the corresponding number(s) as Roman Numerals.
*/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
void convert(int a);
// ----------------------------------------------------------------------------

int main()
{
	int user;
	bool result;
	char input;

	do{

		result = false;
		cout << "Enter a number to be converted (1-4000)." << endl;
		cin >> user;

		if (user > 0 && user <= 4000)
		{
			convert(user);
			cout << endl;
		}
		else
		{
			cout << "Entered number is invalid. Number must be (1-4000). " << endl;
		}

		cout << "Do you want to try again? (Y/N) ";
		cin >> input;
		if (input == 'Y' || input == 'y')
		{
			result = true;
		}
		else if (input == 'N' || input == 'n')
		{
			result = false;
		}
		else
		{
			result = true;
			cout << "(Y)es or (N)o only please. " << endl;
		}
	} while (result == true);

	return 0;  // success
}

// ----------------------------------------------------------------------------

void convert(int a)
{
	string ones[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
	string tens[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
	string hund[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
	string thous[5] = { "", "M", "MM", "MMM", "MMMM" };

	int onesub[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int tensub[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int hundsub[10] = { 0, 100, 200, 300, 400, 500, 600, 700, 800, 900 };
	int thoussub[5] = { 0, 1000, 2000, 3000, 4000 };


	if (a >= 1000)
	{
		for (int count = 4; count != 0; count--)
		{
			if (a == thoussub[count])
			{
				cout << thous[count];
				return;
			}

			if (a < thoussub[count] && a > thoussub[count - 1])
			{
				cout << thous[count - 1];
				a = a - thoussub[count - 1];
			}
		}
	}

	if (a >= 100)
	{

		for (int count = 9; count != 0; count--)
		{
			if (a == hundsub[count])
			{
				cout << hund[count];
				return;
			}
			if (a < hundsub[count] && a > hundsub[count - 1])
			{
				cout << hund[count - 1];
				a = a - hundsub[count - 1];
			}
			else if (a > hundsub[count])
			{
				cout << hund[count];
				a = a - hundsub[count];
			}
		}
	}
	if (a >= 10)
	{
		for (int count = 9; count != 0; count--)
		{
			if (a == tensub[count])
			{
				cout << tens[count];
				return;
			}

			if (a < tensub[count] && a > tensub[count - 1])
			{
				cout << tens[count - 1];
				a = a - tensub[count - 1];
			}
			else if (a > tensub[count])
			{
				cout << tens[count];
				a = a - tensub[count];
			}
		}
	}


	if (a >= 1)
	{
		for (int count = 9; count != 0; count--)
		{
			if (a == onesub[count])
			{
				cout << ones[count];
				return;
			}
		}
	}
}
