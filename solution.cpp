/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Venedicto Herrera venedicto@csu.fullerton.edu
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * convert a given int (assuming input is valid) to a Roman Numeral, repeat option via user input
 */

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

std::string convertToRoman();
int num;

int main(){

	int start = 1;
	std::string input;

	while (start == 1){
		cout << "Please input an integer to convert to Roman Numerals:" << endl;
		cin >> num;
		cout << convertToRoman() << endl;
		cout << "Would you like to convert another integer?" << endl;
		cin >> input;
		if (input == "n" || input == "N"){
			start = 0;
		}
	}

	return 0;
}


std::string convertToRoman() {
	int currentSpot;
	std::string answer = "";
	if (num >= 1000) {
		currentSpot = num / 1000;

		for (int i = 0; i < currentSpot; i++) {
			answer += 'M';
		}
		num %= 1000;

	}

	if (num >= 100){
		currentSpot = num / 100;

		if (currentSpot == 9){
			answer += "CM";

		}else if (currentSpot >= 5){
			answer += 'D';
			for (int i = 0; i < currentSpot - 5; i++) {
				answer += 'C';
			}
		}else if (currentSpot == 4){
			answer += "CD";
		}else if (currentSpot < 4){
			for (int i = 0; i < currentSpot; i++){
				answer += 'C';
			}
		}

		num %= 100;
	}

	if (num >= 10) {
		currentSpot = num / 10;

		if (currentSpot == 9) {
			answer += "XC";
		}
		else if (currentSpot >= 5){
			answer += 'L';
			for (int i = 0; i < currentSpot - 5; i++){
				answer += 'X';
			}
		}
		else if (currentSpot == 4){
			answer += "XL";
		}
		else if (currentSpot < 4){
			for (int i = 0; i < currentSpot; i++){
				answer += 'X';
			}
		}
		
		num %= 10;
	}

	if (num < 10) {

		if (num == 9) {
			answer += "IX";
		}
		else if (num >= 5) {
			answer += 'V';
			for (int i = 0; i < num - 5; i++) {
				answer += 'I';
			}
		}
		else if (num == 4) {
			answer += "IV";
		}
		else if (num < 4) {
			for (int i = 0; i < num; i++){
				answer += 'I';
			}
		}
	}

	return answer;
}
