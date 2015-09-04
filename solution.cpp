/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 (Dong Kim) <donm93@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * 
 * this program is to convert the integer numbers to roman numerals and then ask to users to do it again or not.
 */

//    
             #include <iostream>
             #include <string>

// ----------------------------------------------------------------------------

int main () {

	std::string roman;
	int integer;
	int number;
	char repeat;

	do{
		std::cout << "Please Enter an Integer: ";
		std::cin >> integer;
		if (integer >= 1000) 
		{
			number = (integer /1000);
			for (int i=0; i< number; i++)
			{
				roman += 'M';
			}
		integer %= 1000;
		}
		else if (integer >=100)
		{
			number = (integer /100);
			
			if ( number == 9 ) 
			{
				roman += "CM";
			}
			else if (number >=5)
			{
				roman += 'D';

				for (int i = 0; i<number-5; i++) 
				{
					roman += 'C' ;
				}
			}
			else if (number ==4) 
			{
				roman += "CD";
			}
			else if (number >= 1)
			{
				for (int i =0; i< number; i++)
				{
					roman += 'C';
				}
			}
		integer %= 100;
		}
		if (integer>=10)
		{
			number = (integer /10);
			if (number ==9)
			{
				roman += "XC" ;
			}
			else if (number >=5)
			{
				roman += 'L';
				for (int i =0; i<number-5; i++ )
				{
					roman += 'X';
				}
			}
		
			else if (number >= 1)
			{
				for (int i= 0; i < number; i++)
				{
					roman += 'X';
				}
			}
			integer %= 10; 
		}
	if (integer >= 1 )
	{
		number =integer;
		if (number ==9) 
		{
			roman += "IX";
		}
		else if (number >=5)
		{
			roman += "V" ;

			for (int i =0; i< number - 5; i++)
			{
				roman += 'I';
			}
		}
		else if( number==4) 
		{
			roman += "IV";
		}
		else if (number >=1)
		{
			for (int i=0; i < number; i++) 
			{
				roman += 'I';
			}
		}
	}

		std::cout<< "-->" << roman << std::endl;
		std::cout<< "Would you like to convert another integer (Y/N)?";
		std::cin>>repeat;
	}while(repeat != 'n' && repeat != 'N');
}


    return 0;  // success
}

// ----------------------------------------------------------------------------

// TODO: other functions

