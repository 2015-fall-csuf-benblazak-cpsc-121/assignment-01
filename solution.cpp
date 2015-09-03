/*-----------------------------------------------------------------
* Copyright &copy; Brandon Min <brandon.min@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
*---------------------------------------------------------------------*/

//Assignment 1: Roman Numerals

#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(){


	string romannum;
	int integer;
	int x;
	char restart;

	//Asks user for if he/she would like to use the program and then for the integer.
	

	cout << "Would you like to convert an integer into roman numeral (Y/N)? " << endl;


	while (cin >> restart){


		if (restart == 'y' || restart == 'Y')
		{

			cout << endl;
			cout << "Please enter an integer: ";
			cin >> integer;

			cout << "---> ";

			if ((integer >= 4000) || (integer <= 0)){
				cout << endl << "Invalid integer." << endl;
			}

			else {

				//XXXX 4-digits

				if (integer >= 1000){
					x = (integer / 1000);
					for (int i = 0; i < x; i++){

						cout << "M";
					}
					integer %= 1000;
				}

				//XXX 3-digits

				if (integer >= 100){
					x = (integer / 100);

					if (x == 9){

						cout << "CM";
					}
					else if (x >= 5){

						cout << "D";

						for (int i = 0; i < x - 5; i++){

							cout << "C";
						}

					}
					else if (x == 4){
						cout << "CD";
					}

					else if (x >= 1){

						for (int i = 0; i < x; i++){

							cout << "C";

						}
					}

					integer %= 100;
				}
				//XX 2-digits
				if (integer >= 10){

					x = (integer / 10);
					if (x == 9){
						cout << "XC";
					}

					else if (x >= 5){

						cout << "L";
						for (int i = 0; i < x - 5; i++){

							cout << "X";


						}
					}

					else if (x == 4){

						cout << "XL";
					}
					else if (x >= 1){

						for (int i = 0; i < x; i++){


							cout << "X";
						}
					}
					integer %= 10;
				}

				//X 1-digit
				if (integer >= 1){

					x = integer;

					if (x == 9) {

						cout << "IX";
					}
					else if (x >= 5){
						cout << "V";

						for (int i = 0; i < x - 5; i++){
							cout << "I";
						}
					}
					else if (x == 4){

						cout << "IV";

					}


					else if (x >= 1){
						for (int i = 0; i < x; i++){
							cout << "I";

						}

					}


				}


				cout << romannum << endl << endl;


			}


			cout << "Would you like to convert another integer (Y/N)? ";

			//Asks user to convert another integer,'n' or 'N' ends program and 
			//anything else will restart the program.
		}

		else if (restart == 'n' || restart == 'N')

		{
			cout << "The program will now end." << endl << endl;
			break;
		}




	}

	return 0;
}
