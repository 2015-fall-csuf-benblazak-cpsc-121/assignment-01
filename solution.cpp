/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Randy Tanizawa <rktanizawa@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * Arabic numeral to Roman numeral conversion program
 */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int input;
string answer;
void Int_to_Roman(int input)

// ----------------------------------------------------------------------------

void Int_to_Roman(int input)
{
    cout << " ----> ";
	int Mtimes = (input / 1000);
	switch (Mtimes){
	case 0: break;
	case 1: cout << "M"; input = input % 1000; break;
	case 2: cout << "MM"; input = input % 1000; break;
	case 3: cout << "MMM"; input = input % 1000; break;
	case 4: cout << "MMMM"; input = input % 1000; break;
	}

	int Dtimes = (input / 500);
	switch (Dtimes){
	case 0: break;
	case 1: cout << "D"; input = input % 500; break;
	}

	int Ctimes = (input / 100);
	switch (Ctimes){
	case 0: break;
	case 1: cout << "C"; input = input % 100; break;
	case 2: cout << "CC"; input = input % 100; break;
	case 3: cout << "CCC"; input = input % 100; break;
	case 4: cout << "CD"; input = input % 100; break;
	}

	int Ltimes = (input / 50);
	switch (Ltimes){
	case 0: break;
	case 1: cout << "L"; input = input % 50; break;
	}

	int Xtimes = (input / 10);
	switch (Xtimes){
	case 0: break;
	case 1: cout << "X"; input = input % 10; break;
	case 2: cout << "XX"; input = input % 10; break;
	case 3: cout << "XXX"; input = input % 10; break;
	case 4: cout << "XL"; input = input % 10; break;
	}

	int Vtimes = (input / 5);
	switch (Vtimes){
	case 0: break;
	case 1: cout << "V"; input = input % 5; break;
	}

	int Itimes = (input / 1);
	switch (Itimes){
	case 0: break;
	case 1: cout << "I"; break;
	case 2: cout << "II"; break;
	case 3: cout << "III"; break;
	case 4: cout << "IV"; break;
	}

	cout << std::endl;
}

//  ----------------------------------------------------------------------------

int main()
{
    do{
	cout << "Enter an integer: ";
	cin >> input;

	Int_to_Roman(input);

	cout << "Would you like to convert another integer? Y or N: ";
	cin >> answer;

    }while((answer == "Y")||(answer == "y"));

    return 0;
}


