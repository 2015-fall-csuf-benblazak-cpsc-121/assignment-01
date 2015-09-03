/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Sebastian Trece Yarleque <nerd_wizard@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Roman Numerals
	I = 1
	V = 5
	X = 10
	L = 50
	C = 100
	D = 500
	M = 1000
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// ----------------------------------------------------------------------------

int num = 0,
	ones = 0,
	tens = 0,
	fiftys = 0,
	hunds = 0,
	fivehunds = 0,
	thous = 0;
	string Roman_I = "";
	char answer = 'y';

void RomanConver(int num);

int main()
{
	while (answer != 'n')
	{

		cout << "Enter an integer: ";
		cin >> num;
		cin.ignore();
		RomanConver(num);
	}

	return 0;  // success
}

void RomanConver(int num)
{
	if ((num / 1000) >= 1)
	{
		thous = num / 1000;
		Roman_I.assign(thous, 'M');
		num %= 1000;
		cout << Roman_I;
		fivehunds = num / 500;
		Roman_I.assign(fivehunds, 'D');
		num %= 500;
		cout << Roman_I;
		hunds = num / 100;
		Roman_I.assign(hunds, 'C');
		num %= 100;
		cout << Roman_I;
		fiftys = num / 50;
		Roman_I.assign(fiftys, 'L');
		num %= 50;
		cout << Roman_I;
		tens = num / 10;
		Roman_I.assign(tens, 'X');
		cout << Roman_I;
		num %= 10;
		if ((num / 5) >= 1)
			cout << "V";
		ones = num % 5;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}

	else if ((num / 500) >= 1)
	{
		fivehunds = num / 500;
		Roman_I.assign(fivehunds, 'D');
		num %= 500;
		cout << Roman_I;
		hunds = num / 100;
		Roman_I.assign(hunds, 'C');
		num %= 100;
		cout << Roman_I;
		fiftys = num / 50;
		Roman_I.assign(fiftys, 'L');
		num %= 50;
		cout << Roman_I;
		tens = num / 10;
		Roman_I.assign(tens, 'X');
		cout << Roman_I;
		num %= 10;
		if ((num / 5) >= 1)
			cout << "V";
		ones = num % 5;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}

	else if ((num / 100) >= 1)
	{
		hunds = num / 100;
		Roman_I.assign(hunds, 'C');
		num %= 100;
		cout << Roman_I;
		fiftys = num / 50;
		Roman_I.assign(fiftys, 'L');
		num %= 50;
		cout << Roman_I;
		tens = num / 10;
		Roman_I.assign(tens, 'X');
		cout << Roman_I;
		num %= 10;
		if ((num / 5) >= 1)
			cout << "V";
		ones = num % 5;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}

	else if ((num / 50) >= 1)
	{
		fiftys = num / 50;
		Roman_I.assign(fiftys, 'L');
		num %= 50;
		cout << Roman_I;
		tens = num / 10;
		Roman_I.assign(tens, 'X');
		cout << Roman_I;
		num %= 10;
		if ((num / 5) >= 1)
			cout << "V";
		ones = num % 5;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}

	else if ((num / 10) >= 1)
	{
		tens = num / 10;
		Roman_I.assign(tens, 'X');
		cout << Roman_I;
		num %= 10;
		if ((num / 5) >= 1)
			cout << "V";
		ones = num % 5;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}

	else if ((num / 5) >= 1)
	{
		cout << "V";
		ones = num % 5;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}

	else if ((num / 1) >= 1)
	{
		ones = num / 1;
		Roman_I.assign(ones, 'I');
		cout << Roman_I << endl;
	}
	cout << endl;
	cout << "Would you like to convert another integer? (y/n)\n";
	cin.get(answer);
	answer = tolower(answer);
	cout << endl;
}

// ----------------------------------------------------------------------------

// TODO: other functions
