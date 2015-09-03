/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Gabriel Martinez <1212gmartinez@csu.fullerton.edu>
*                       Steven Kha       <Stevenvkha@gmail.com>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Program asks the user to enter an integer, prints the integer in Roman numerals, and asks the user if they'd like to convert another integer.
*/


#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// ----------------------------------------------------------------------------


void RomanNumeral_Thousands(char number[]) {

	int thousand = number[0] - '0';

	string myThousand[5] = { "", "M", "MM", "MMM", "MMMM" };

	cout << myThousand[thousand];

	string myHundred[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };

	int hundred = number[1] - '0';

	cout << myHundred[hundred];

	string myTen[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };

	int ten = number[2] - '0';

	cout << myTen[ten];

	string myOne[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

	int one = number[3] - '0';

	cout << myOne[one] << endl;

}


void RomanNumeral_Hundreds(char number[]) {

	string myHundred[10] = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };

	int hundred = number[0] - '0';

	cout << myHundred[hundred];

	string myTen[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };

	int ten = number[1] - '0';

	cout << myTen[ten];

	string myOne[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

	int one = number[2] - '0';

	cout << myOne[one] << endl;

}


void RomanNumeral_Tens(char number[]) {

	string myTen[10] = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };

	int ten = number[0] - '0';

	cout << myTen[ten];

	string myOne[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

	int one = number[1] - '0';

	cout << myOne[one] << endl;

}


void RomanNumeral_Ones(char number[]) {

	string myOne[10] = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };

	int one = number[0] - '0';

	cout << myOne[one] << endl;

}

// ----------------------------------------------------------------------------

int main() {

	char number[5], repeat;

	do {

		cout << "Please enter a number to be converted to Roman Numeral: " << endl;

		cin.getline(number, 5);

		if (strlen(number) == 4) {
			RomanNumeral_Thousands(number);
		}

		else if (strlen(number) == 3) {
			RomanNumeral_Hundreds(number);
		}

		else if (strlen(number) == 2) {
			RomanNumeral_Tens(number);
		}

		else if (strlen(number) == 1) {
			RomanNumeral_Ones(number);
		}

		cout << "Would you like to convert another integer (Y/N)?" << endl;

		cin >> repeat;
		cin.ignore();

	} while (repeat != 'N' && repeat != 'n');

	return 0;
}
