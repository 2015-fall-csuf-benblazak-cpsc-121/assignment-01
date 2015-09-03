/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Samir Mandal (mandalsamir@fullerton.edu)
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * This program will convert an integer input to Roman numeral
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

//Function declaration for integer to Roman number conversion
string integerToRNumber (int number);

// ----------------------------------------------------------------------------

int main() {
	int input_int;
	string output_roman;
	string user_option;

	/*Block which makes function call to convert integer to Roman numeral and
	exception handling for negative integers*/
	block1:{
		cout << "Enter a positive integer number ::";
		cin >> input_int;
		if (input_int < 0) {
			cout << "Invalid input. Please enter \"Y\" in next prompt.\n";
		}
		else {
		output_roman = integerToRNumber(input_int);
		cout << "Roman numeral is ::" << output_roman << endl;
			}
		}

			cout << "Do you like to convert another integer :: enter y/n::";
			cin >> user_option;

	// If the user enters 'n' or 'N': end the program ; otherwise goto block1
			if (user_option == "n" || user_option == "N"){
				exit(0);
			}
			else{
				goto block1;
			}

}

// ----------------------------------------------------------------------------
//Function to convert integer to Roman numeral

string integerToRNumber (int number) {

	string roman_num = "";
	int part_number;

	/*const string hun_dig[]={"","100","200","300","400","500","600","700",
	"800","900"};*/
	const string hun_dig[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

	/*const string ten_dig [] = {"","10","20","30", "40", "50", "60", "70",
	"80", "90"};*/
	const string ten_dig[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};

	//const string uni_dig [] = {"", "1","2","3", "4", "5", "6", "7","8", "9"};
	const string uni_dig[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

	//Thousands digit calculation

	part_number = number / 1000;

	for (int i = 0; i <part_number; ++i){
		roman_num= roman_num + "M";
	}

	//Hundreds digit calculation
	number = number % 1000;//remove 1000's digit to work with remainders
	roman_num = roman_num + hun_dig[(int)(number / 100)];

	//10th digit calculation
	number = number % 100;// remove 100's digit to work with remainders
	roman_num = roman_num + ten_dig[(int)(number / 10)];

	//Units digit calculation
	number = number % 10; //remove 10's digit to work with remainders
	roman_num = roman_num + uni_dig[number];

	return roman_num;
}
