/*---------------------------
Matthew Low 
CPSC 121 Sec 11+12
CWID: 891556854
---------------------------*/
/* ----------------------------------------------------------------------------
* Copyright & copy; 2015 Matthew Low <mcorelow@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ---------------------------------------------------------------------------*/
// This program receives an integer as input and converts it into a Roman numeral

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

void romanNum(int num);

int main()  //main function that receives input
{
	int x;
	char repeatChar;
	bool repeat = true;
	cout << "Enter an integer (1 - 4999) and I'll convert it into a Roman numeral: ";

	while (repeat)
    {
        cin >> x;
        while (x < 1 || x > 4999)      //verifies that x does not exceed (1 - 4999)
        {
            cout << "Erroneous input. Try again: ";
            cin >> x;
        }
        romanNum (x);                //directs to romanNum function
        cout << endl;
        cout << "Would you like to convert another integer? (y/n) ";
        cin >> repeatChar;
        if (repeatChar == 'n' || repeatChar == 'N')             //determines whether loop repeats
            repeat = false;
        else
            cout << endl << "Enter an integer: ";
    }
	return 0;
}

void romanNum(int num)   //function that converts to Roman numeral
{
/*M = 1000
D = 500
C = 100
L= 50
X = 10
V = 5
I = 1*/

    string roman = "";

    while (num >= 1000)      //thousands
    {
        roman += "M";
        num -= 1000;
    }

    while (num >= 100)        //hundreds
    {
        if ( num >= 900)
        {
            roman += "CM";
            num -= 900;
        }
        else if (num >= 500)
        {
            roman += "D";
            num -= 500;
        }
        else if (num >= 400)
        {
            roman += "CD";
            num -= 400;
        }
        else
        {
            roman += "C";
            num -= 100;
        }
    }

	while (num >= 10)        //tens
    {
        if ( num >= 90)
        {
            roman += "XC";
            num -= 90;
        }
        else if (num >= 50)
        {
            roman += "L";
            num -= 50;
        }
        else if (num >= 40)
        {
            roman += "XL";
            num -= 40;
        }
        else
        {
            roman += "X";
            num -= 10;
        }
    }

    while (num >= 1)         //ones
    {
        if (num >= 9)
        {
            roman += "IX";
            num -= 9;
        }
        else if (num >= 5)
        {
            roman += "V";
            num -= 5;
        }
        else if (num >= 4)
        {
            roman += "IV";
            num -= 4;
        }
        else
        {
            roman += "I";
            num -= 1;
        }
    }

    cout << "--> " << roman << endl;    //prints the Roman numeral
}


