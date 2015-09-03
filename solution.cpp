/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 George Calderon <gcald@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* This program converts integers into Roman numerals.
*/

// TODO: `#include`s and function prototypes

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

// ----------------------------------------------------------------------------
string ConRom(int a);
string again, roman;

int main() {
	// TODO
	while (again != "n" && again != "N") // Checks user input to loop
	{
		int a;
		cout << "Please enter an integer:" << endl;
		cin >> a;
		if (a >= 4000 || a <= 0) // Makes sure the integer is within valid range
		{
			cout << "Integer must be from 1 - 3999." << endl;
		}
		else
		{
			cout << "Roman Numeral: " << ConRom(a) << endl;
		}
		cout << endl << "Would you like to convert another integer? (y/n)" << endl << 
		endl; // Multiple endl's to make it prettier.
		cin >> again;
	}
	//system("PAUSE");
	return 0;  // success
}

// ----------------------------------------------------------------------------

// TODO: other functions
string ConRom(int a)
{
	roman = "";
	if (a >= 1000) // Takes care of M
	{
		for (int i = 0; i < a / 1000; i++)
		{
			roman += "M";
		}
		a %= 1000;
	}

	if (a >= 100) // Takes care of C - CM
	{
		if (a / 100 == 9)
			roman += "CM";
		else if (a / 100 >= 5)
		{
			roman += "D";
			for (int i = 0; i < a / 100 - 5; i++)
				roman += "C";
		}
		else if (a / 100 == 4)
			roman += "CD";
		else
		{
			for (int i = 0; i < a / 100; i++)
				roman += "C";
		}
		a = a % 100;
		cout << a << endl;
	}
	
	if (a >= 10) // Takes care of X-XC
	{
		if (a / 10 == 9)
			roman += "XC";
		else if (a / 10 >= 5)
		{
			roman += "L";
			for (int i = 0; i < a / 10 - 5; i++)
				roman += "X";
		}
		else if (a / 10 == 4)
			roman += "XL";
		else
		{
			for (int i = 0; i < a / 10; i++)
				roman += "X";
		}
		a = a % 10;
	}

	if (a >= 1) // Takes care of I-IX
	{
		if (a == 9)
			roman += "IX";
		else if (a >= 5)
		{
			roman += "V";
			for (int i = 0; i < a - 5; i++)
				roman += "I";
		}
		else if (a == 4)
			roman += "IV";
		else
		{
			for (int i = 0; i < a; i++)
				roman += "I";
		}
	}
	return roman;
}
