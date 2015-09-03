/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Hympert Nguyen hympert@csu.fullerton.edu
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Convert arabic numbers to roman numerals
*/


#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void thousands(int);
void hundreds(int);
void tens(int);
void units(int);
// ----------------------------------------------------------------------------

int main() {
	
	char arabicNum[5];
	cout << "Enter a number: ";
	cin >> arabicNum;
	
	cout << arabicNum[0] << endl;
	cout << arabicNum[1] << endl;
	cout << arabicNum[2] << endl;
	cout << arabicNum[3] << endl;
	
	thousands(arabicNum[0]);
	hundreds(arabicNum[1]);
	tens(arabicNum[2]);
	units(arabicNum[3]);
	return 0;  // success
}

// ----------------------------------------------------------------------------


//user will enter 4 digits which the first digit being the biggest
//arabicNum[0] > 1 > 2 > 3 

void thousands(int thousand){
	switch (thousand){
	case '1': cout << "M";
		break;
	case '2': cout << "MM";
		break;
	case '3': cout << "MMM";
		break;
	case '4': cout << "MV";
		break;
	case '5': cout << "V";
		break;
	case '6': cout << "VM";
		break;
	case '7': cout << "VMM";
		break;
	case '8': cout << "VMMM";
		break;
	case '9': cout << "MX";
		break;
	}

}

void hundreds(int hundred){
	switch (hundred){
	case '1': cout << "C";
		break;
	case '2': cout << "CC";
		break;
	case '3': cout << "CCC";
		break;
	case '4': cout << "CD";
		break;
	case '5': cout << "D";
		break;
	case '6': cout << "DC";
		break;
	case '7': cout << "DCC";
		break;
	case '8': cout << "DCCC";
		break;
	case '9': cout << "CM";
		break;
	}

}

void tens(int ten){
	switch (ten){
	case '1': cout << "X";
		break;
	case '2': cout << "XX";
		break;
	case '3': cout << "XXX";
		break;
	case '4': cout << "XL";
		break;
	case '5': cout << "L";
		break;
	case '6': cout << "LX";
		break;
	case '7': cout << "LXX";
		break;
	case '8': cout << "LXXX";
		break;
	case '9': cout << "XC";
		break;
	}

}

void units(int unit){
	switch (unit){
	case '1': cout << "I";
		break;
	case '2': cout << "II";
		break;
	case '3': cout << "III";
		break;
	case '4': cout << "IV";
		break;
	case '5': cout << "V";
		break;
	case '6': cout << "VI";
		break;
	case '7': cout << "VII";
		break;
	case '8': cout << "VIII";
		break;
	case '9': cout << "IX";
		break;
	}

}

// TODO: other functions

