#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
	
	int main()
	{
		int num;
		char answer;
		do {
			
		cout << "Please enter an integer: \n";
		cin >> num;
		cout << "---> " << convert(number) << "\n\n";
		
		cout << "Would you like to convert another integer (Y/N)? ";
		cin >> input;
		
		char repeat;
		
		do {
			std::cout << "Would you like to convert another integer (Y/N)?\n";
			std::cin >> repeat;
		} while (answer == 'Y' || repeat == 'y');
	}



string convert(int num) {
	const string numerals[] = {
		"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX, "V", "IV", "I",
		const int values[] = {
			1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1, 
			
		};
	};
	
	string return = "";
	for (int z=0; z < 13; z++) {
		for (int y=0; y < number / values[z]; y++)
		return += numerals[z];
	number %= values[z];
	}
	return input;
}


int main() {
	int  number;  
	char choice;  

	do {
		cout << "Please enter an integer: ";
		cin >> number;

		cout << "--> " << number_to_roman(number) << "\n\n";

		cout << "Would you like to convert another integer (Y/N)? ";
		cin >> choice;

		cout << "\n";
	} while (cin && choice != 'n' && choice != 'N');

	return 0;  // success
}


string number_to_roman(int n) {
	if (n <= 0 || n >= 4000)
		return "ERROR";

	string output = "";

	while (n >= 1000) { output += "M";  n -= 1000; }
	while (n >= 900) { output += "CM"; n -= 900; }
	while (n >= 500) { output += "D";  n -= 500; }
	while (n >= 400) { output += "CD"; n -= 400; }
	while (n >= 100) { output += "C";  n -= 100; }
	while (n >= 90) { output += "XC"; n -= 90; }
	while (n >= 50) { output += "L";  n -= 50; }
	while (n >= 40) { output += "XL"; n -= 40; }
	while (n >= 10) { output += "X";  n -= 10; }
	while (n >= 9) { output += "IX"; n -= 9; }
	while (n >= 5) { output += "V";  n -= 5; }
	while (n >= 4) { output += "IV"; n -= 4; }
	while (n >= 1) { output += "I";  n -= 1; }

	return output;
}
