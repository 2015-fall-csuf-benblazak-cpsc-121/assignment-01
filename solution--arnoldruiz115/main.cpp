#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;


int main()
{
	int num;

	cout << "Please enter an integer: \n";
	cin >> num;

}

string romanconverter(int a) {
	if (a < 0 || a > 3999)
		cout << "Error, number can not be less than 0 or greater than 3999." << endl;
	
	string roman_num;

	while(a > 1000){
		roman_num += "M"; a -=1000 
	}


}
