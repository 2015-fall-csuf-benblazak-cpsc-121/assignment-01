/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * A short interactive program that converts Arabic integers to Roman Numerals.
 */


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

string number_to_roman(int n);

// ----------------------------------------------------------------------------

int main() {
    int  number;  // the user's integer
    char choice;  // the user's choice (to continue or not)

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

// ----------------------------------------------------------------------------

/**
 * Notes:
 * - We limit this function to converting numbers in the range [1,3999].  In
 *   actual Roman numerals, higher numbers can be represented (a bar placed
 *   above a (string of) numerals multiplies its value by 1000).
 */
string number_to_roman(int n) {
    if (n <=0 || n >= 4000)
        return "ERROR";

    string output = "";

    while (n >= 1000) { output += "M";  n -= 1000; }
    while (n >= 900)  { output += "CM"; n -= 900; }
    while (n >= 500)  { output += "D";  n -= 500; }
    while (n >= 400)  { output += "CD"; n -= 400; }
    while (n >= 100)  { output += "C";  n -= 100; }
    while (n >= 90)   { output += "XC"; n -= 90; }
    while (n >= 50)   { output += "L";  n -= 50; }
    while (n >= 40)   { output += "XL"; n -= 40; }
    while (n >= 10)   { output += "X";  n -= 10; }
    while (n >= 9)    { output += "IX"; n -= 9; }
    while (n >= 5)    { output += "V";  n -= 5; }
    while (n >= 4)    { output += "IV"; n -= 4; }
    while (n >= 1)    { output += "I";  n -= 1; }

    return output;
}

