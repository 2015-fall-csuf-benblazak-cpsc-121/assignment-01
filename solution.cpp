/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Thomas Collins <thomas_collins@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Program that converts user inputted integers into Roman Numerals.
*/

#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include <string>
using std::string;

string intToRoman(int i);

// ----------------------------------------------------------------------------

int main()
{
	int i;
	string s = "";
	string repeat = "ayy lmao";

	cout << "Welcome! This program converts integer numbers between 0 and\n4000 to Roman numerals." << endl;

	while (repeat != "n" && repeat != "N")
	{
		
		cout << "\nPlease enter the integer you would like to convert." << endl; // max of 4000
		cin >> i;

		if (i < 0 || i >= 4000)
			cout << "\nInvalid input, please enter number between 0 and 4000." << endl;
		else
			cout << intToRoman(i) << endl;

		cout << "\nWould you like to convert another integer to a Roman numeral? Enter anything to\nrepeat, or enter n to close." << endl;
		cin >> repeat;

	}

	return 0;  // success
}

// ----------------------------------------------------------------------------

string intToRoman(int i) // fat function that could likely be waayyy more streamlined.
{
	string s = "";
	while (i >= 1000)
	{
		s += "M";
		i -= 1000;
	}
	while (i >= 900)
	{
		s += "CM";
		i -= 900;
	}
	while (i >= 500)
	{
		s += "D";
		i -= 500;
	}
	while (i >= 400)
	{
		s += "CD";
		i -= 400;
	}
	while (i >= 100)
	{
		s += "C";
		i -= 100;
	}
	while (i >= 90)
	{
		s += "XC";
		i -= 90;
	}
	while (i >= 50)
	{
		s += "L";
		i -= 50;
	}
	while (i >= 40)
	{
		s += "XL";
		i -= 40;
	}
	while (i >= 10)
	{
		s += "X";
		i -= 10;
	}
	while (i >= 9)
	{
		s += "IX";
		i -= 9;
	}
	while (i >= 5)
	{
		s += "V";
		i -= 5;
	}
	while (i >= 4)
	{
		s += "IV";
		i -= 4;
	}
	while (i >= 1)
	{
		s += "I";
		i -= 1;
	}
	return s;
}

