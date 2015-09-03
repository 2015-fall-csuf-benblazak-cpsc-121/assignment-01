/* -------------------------------------------------------------------------*
* Copyright &copy; 2015 Paul Sihavong paul.sihavong@hotmail.com				*
* Released under the [MIT License] (http://opensource.org/licenses/MIT)		*
* ------------------------------------------------------------------------ */

/*Program Description*
 *This program is meant to convert the user input of an integer from 1 to 4000 to a
 *roman numeral. Assuming the user gives an input within a correct parameter, the program
 *will convert the integer to the correct roman numeral.
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string romanNumeralConverter(int a, int c);

int main() {
	int a = 0; // variable to store user input
	int c = 0; // variable to determine what roman numerals are used
	char d = ' '; // char to determine if the user would like to use the calculator again
	// the start of calculator processing
	// each numeral that is used here (e.g. M, CM, D, etc) is for the shortest way to write a roman numeral
	// we start at the biggest roman numeral factor because we want the biggest numeral in front
	do{
		cout << "Please enter a positive integer up to 4000: ";
		cin >> a;
		cout << endl;
		cout << romanNumeralConverter(a, c) << endl;
		cout << "Would you like to convert another integer? (Y/N) ";
		cin >> d;
		cout << endl;
		a = 0, c = 0;   // if the user chooses to convert another numeral, the variables
						// are initialized to 0 and "" to make sure the old number isn't shown
		if (d == 'N' || d == 'n')
			break;
	} while (d != 'N' || d != 'n');
	system("PAUSE");
	return 0;  // success
}

// ----------------------------------------------------------------------------

string romanNumeralConverter(int a, int c){
	string b = "";
	// *explanation of how each if statement segment works*
	if (a / 1000 > 0){  // each if statement determines whether if the number is big enough to warrant use of a roman numeral
						// e.g. 22 / 1000 > 0 fails and goes to the next if statement and the roman numeral M is not used
		c = a / 1000;   // if the if statement does pass, the formula c = a / 1000 will determine how many M's we have to use
		for (int i = 0; i < c; i++){ // the for loop lets us use c to construct our roman numeral with the right amount of numerals
			b += "M";   // this is where we add to our string to output to our user at the end of the calculator
			a -= 1000;  // we take away from the user input value so we do not mess up the rest of the calculator when doing the lesser place values
		} // end of for loop
	} // end of if statement
	if (a / 900 > 0){
		c = a / 900;
		for (int i = 0; i < c; i++){
			b += "CM";
			a -= 900;
		}
	}
	if (a / 500 > 0){
		c = a / 500;
		for (int i = 0; i < c; i++){
			b += "D";
			a -= 500;
		}
	}
	if (a / 400 > 0){
		c = a / 400;
		for (int i = 0; i < c; i++){
			b += "DC";
			a -= 400;
		}
	}
	if (a / 100 > 0){
		c = a / 100;
		for (int i = 0; i < c; i++){
			b += "C";
			a -= 100;
		}
	}
	if (a / 90 > 0){
		c = a / 90;
		for (int i = 0; i < c; i++){
			b += "XC";
			a -= 90;
		}
	}
	if (a / 50 > 0){
		c = a / 50;
		for (int i = 0; i < c; i++){
			b += "L";
			a -= 50;
		}
	}
	if (a / 40 > 0){
		c = a / 40;
		for (int i = 0; i < c; i++){
			b += "LX";
			a -= 40;
		}
	}
	if (a / 10 > 0){
		c = a / 10;
		for (int i = 0; i < c; i++){
			b += "X";
			a -= 10;
		}
	}
	if (a / 5 > 0 || a % 4 == 0){
		c = a / 5;
		for (int i = 0; i < c; i++){
			b += "V";
			a -= 5;
		}
	}
	if (a / 4 > 0){
		c = a / 4;
		for (int i = 0; i < c; i++){
			b += "IV";
			a -= 4;
		}
	}
	if (a / 1 > 0){
		c = a / 1;
		for (int i = 0; i < c; i++){
			b += "I";
			a -= 1;
		}
	}
	return b;
}
