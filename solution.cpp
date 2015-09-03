/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 TODO(your name) <TODO(your email)>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * TODO: program description
 */

// TODO: `#include`s and function prototypes

// ----------------------------------------------------------------------------

/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 David Ferranco <dgferranco@hotmail.com>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

#include "stdafx.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	std::string roman;
	int swap, numero;


	char choice;
	
	do{
		roman.clear();										// Resets the value of roman so if the user chooses to enter another numero at the end of this loop, the output will not be both all the previous input(s) and the current input.

		std::cout << "Enter a integer between from (1-4000): ";
		std::cin >> numero;																												/* Example input: 3264 */


		if ((numero >= 4000) || (numero <= 0)) {
			std::cout << endl << "Not aa integer. Enter an integer: " << endl;
		}
		else {

			if (numero >= 1000) {
				swap = (numero / 1000);						// Divides numero by 1000 to find out how many 'M's to put					/* Input will now be: 3.264 --> 3.00 (since it's an integer data type) 3 'M's will be displayed. */
					
				for (int n = 0; n < swap; n++) {
					roman += 'M';

				}
				numero %= 1000;								// Divide numero by 1000 and find out what its leftover value.			
			}

			if (numero >= 100) {
				swap = (numero / 100);						// Check to see if a part of numero input will have a 'CM'

				if (swap == 9) {
					roman += "CM";
				}
				else if (swap >= 5) {						
					roman += 'D';

					for (int n = 0; n < swap - 5; n++) {
						roman += 'C';

					}
				}
				else if (swap == 4) {
					roman += "CD";

				}

				else if (swap >= 1)

					for (int n = 0; n < swap; n++) {
						roman += 'C';
					}
			}

			numero %= 100;										// Divide numero again but this time by 100 to find out what its leftover value is 
		}														
																/* Used online sources to figure out the logic behind breaking down more complex integers into the corresponding roman
																numeral such as those with "CM" or "XL". Source: http://stackoverflow.com/questions/21617943/c-confusion-on-converting-integers-to-roman-numerals */

		if (numero >= 10) {
			swap = (numero / 10);

				if (swap == 9) {								
					roman += "XC";									
				}

				else if (swap >= 5) {
					roman += 'L';

					for (int i = 0; i < swap - 5; i++) {
						roman += 'X';

					}
				}
				else if (swap == 4) {
					roman += "XL";

				}

				else if (swap >= 1) {
					for (int n = 0; n < swap; n++) {
						roman += 'X';
					}
				}
				numero %= 10;									// Divide numero by 10 to find out if there will be any leftover roman numerals to display

			}
		if (numero >= 1) {
			swap = numero;
			}

			if (swap == 9) {
				roman += "IX";
			}
			else if (swap >= 5) {
				roman += "V";

				for (int i = 0; i < swap - 5; i++) {
					roman += 'I';
				}
			}
			else if (swap == 4) {
				roman += "IV";
			}
			else if (swap >= 1) {
				for (int n = 0; n < swap; n++) {
					roman += 'I';

				}
			}


			std::cout << "Roman numeral: " << endl;
			std::cout << roman << endl;


			std::cout << "Would you like to convert another integer (Y/N)?";
			std::cin >> choice;
		}
		while ((choice == 'Y') || (choice == 'y'));
	
	if ((choice == 'N') || (choice == 'n'))
	{
		std::cout << "Fine then." << endl;
	}
			return 0;

}
	

// ----------------------------------------------------------------------------

// TODO: other functions

