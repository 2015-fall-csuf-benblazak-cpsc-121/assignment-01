/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 (Henry Yu) <(henryu1996.csu.fullerton.edu)>
*Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
 * This program converts integers to Roman numerals.
 */

// TODO: `#include`s and function prototypes
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// ----------------------------------------------------------------------------

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
string roman;
int integer;
int part;
char redo;

while(true)
{
    cout << "Please enter an integer: ";
    cin >> integer;

    if ((integer >= 4000) || (integer <= 0))
    {
        cout << "Invalid integer" << endl;
    }
    else
    {
        //Thousands place
        if (integer >= 1000)
        {
            part = (integer / 1000);

            for (int i = 0; i < part; i++)
            {
                roman += 'M';
            }
            integer %= 1000;
        }
        //Hundreds place
        if (integer >= 100)
        {
            part = (integer / 100);

            if (part == 9)
            {
                roman += "CM";
            }

            else if (part >= 5)
            {
                roman += 'D';

                for (int i = 0; i < part - 5; i++)
                {
                    roman += 'C';
                }
            }
            else if (part == 4)
            {
                roman += "CD";
            }
            else if (part >= 1)
            {
                for (int i = 0; i < part; i++)
                {
                    roman += 'C';
                }
            }
            integer %= 100;
        }

        //Tens place
        if (integer >= 10)
        {
            part = (integer / 10);

            if (part == 9)
            {
                roman += "XC";
            }
            else if (part >= 5)
            {
                roman += 'L';

                for (int i = 0; i < part - 5; i++)
                {
                    roman += 'X';
                }
            }
            else if (part == 4)
            {
                roman += "XL";
            }
            else if (part >= 1)
            {
                for (int i = 0; i < part; i++)
                {
                    roman += 'X';
                }
            }
            integer %= 10;
        }

        // Ones place
        if (integer >= 1)
        {
            part = integer;

            if (part == 9)
            {
                roman += "IX";
            }
            else if (part >= 5)
            {
                roman += 'V';

                for (int i = 0; i < part - 5; i++)
                {
                    roman += 'I';
                }
            }
            else if (part == 4)
            {
                roman += "IV";

            }
            else if (part >= 1)
            {
                for (int i = 0; i < part; i++)
                {
                    roman += 'I';
                }
            }
        }

        cout << "Roman Numeral: " << roman << endl;
        roman = "";
    }

    cout << "Would you like to convert another integer? (Y/N): ";
    cin >> redo;

    if (redo == 'N' || redo == 'n')
    {
        cout << "Goodbye\n";
        break;
    }
}

return 0;
}

// ----------------------------------------------------------------------------

// TODO: other functions
