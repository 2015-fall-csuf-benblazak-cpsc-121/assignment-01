/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 (Weihan Xiao) <weihan1004@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * TODO: To transfer numbers into roman numeral type as the output to show user directly.
 */

// TODO: `#include`s and function prototypes

// ----------------------------------------------------------------------------

using std::cout;
using std::string;
using std::iostream;

void Function()
{
	if (a >= 1000)
	{
		b = a / 1000;
		for (int i = 0; i < b; i++)
		{
			c += 'M';
		}
		a %= 1000;
	}
	if (a >= 100)
	{
		b = a / 100;
		if (b == 9)
		{
			a += 'CM';
		}
		else if (b >= 5)
		{
			a += 'D';
			for (int i = 0; i < b - 5; i++)
			{
				a += 'C';
			}
		}
		else if (b == 4)
		{
			a += 'CD';
		}
		else if (b >= 1)
		{
			for (int i = 0; i < b; i++)
			{
				a += 'C';
			}
		}
		a %= 100;
	}
	if (a >= 10)
	{
		b = a / 10;
		if (b == 9)
		{
			a += 'XC';
		}
		else if (b >= 5)
		{
			a += 'L';
			for (int i = 0; i < b - 5; i++)
			{
				a += 'X';
			}
		}
		else if (b == 4)
		{
			a += 'XL';
		}
		else if (b >= 1)
		{
			for (int i = 0; i < b; i++)
			{
				a += 'X';
			}
		}
		a %= 10;
	}
	if (a >= 1)
	{
		b = a / 1;
		if (b == 9)
		{
			a += 'IX';
		}
		else if (b >= 5)
		{
			a += 'V';
			for (int i = 0; i < b - 5; i++)
			{
				a += 'I';
			}
		}
		else if (b == 4)
		{
			a += 'IV';
		}
		else if (b >= 1)
		{
			for (int i = 0; i < b; i++)
			{
				a += 'I';
			}
		}
	}
}

int main()
{
    
	string c; // The output roman numeral
	int a;    // The input number
	int b;    // The processing value number
	char exit:// To exit
	while
	{
		cout << "Please inter an integer between 1 to 4000 :" << endl;
		cin >> a;
		if (a >= 4000 || a <= 0)
		{
			cout << "Invalid Interger, please try again." << endl;
			break;
		}
		else
		{
			Function();
			cout << "Roman Numeral is: " << c << endl;
			cout << "Would you like to convert another interger？(By inter n/N to exit.)" << endl;
			cin >> exit;
			if (exit != 'n' || exit != 'N')
			{
				return 0;
			}
			else
			{
				break;
			}
		}
	}
	return 0;  // success
}


// ----------------------------------------------------------------------------

// TODO: other functions

