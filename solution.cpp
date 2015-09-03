/* ----------------------------------------------------------------------------
* Copyright &copy; 2015 Alex Garcia <alex.garcia@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */

/**
* Integer to Roman Numeral Conversion
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// ----------------------------------------------------------------------------

int main()
{

	int count = 0;
	int m, d, c, l, x, v, i;
	int q;
	char repeat = ' ';

	do
	{
		cout << "What integer would you like to convert?(1-3999) ";
		cin >> count;


		if (count >= 1000)
		{
			m = count / 1000;

			for (q = 0; q < m; q++)
				cout << "M";

			count = count % 1000;
		}

		if (count >= 900)
		{
			cout << "CM";
			count = count % 900;
		}

		if (count >= 500)
		{
			d = count / 500;

			for (q = 0; q < d; q++)
				cout << "D";

			count = count % 500;
		}

		if (count >= 400)
		{
			cout << "CD";
			count = count % 400;
		}

		if (count >= 100)
		{
			c = count / 100;

			for (q = 0; q < c; q++)
				cout << "C";

			count = count % 100;
		}

		if (count >= 90)
		{
			cout << "XC";
			count = count % 90;
		}

		if (count >= 50)
		{
			l = count / 50;

			for (q = 0; q < c; q++)
				cout << "L";

			count = count % 50;
		}

		if (count >= 40)
		{
			cout << "XL";
			count = count % 40;
		}

		if (count >= 10)
		{
			x = count / 10;

			for (q = 0; q < x; q++)
				cout << "X";

			count = count % 10;
		}
		
		if (count >= 9)
		{
			cout << "IX";
			count = count % 9;
		}

		if (count >= 5)
		{
			v = count / 5;

			for (q = 0; q < v; q++)
				cout << "V";

			count = count % 5;
		}

		if (count >= 4)
		{
			cout << "IV";
			count = count % 4;
		}

		if (count >= 1)
		{
			i = count / 1;

			for (q = 0; q < i; q++)
				cout << "I";
		}

		cout << endl;
		cout << "Run again? y/n ";
		cin >> repeat;
		cin.ignore();
	} while (repeat == 'y');
	
	return 0;

}

// ----------------------------------------------------------------------------

// TODO: other functions/* ----------------------------------------------------------------------------
