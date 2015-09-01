/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 James Paul Mabe <jamespmabe@gmail.com>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 *
 * refences:
 *  - https://www.physicsforums.com/threads/trying-to-write-a-program-that-converts-integers-to-roman-numerals-in-c.468548/
 *
 * ------------------------------------------------------------------------- */

/**
 * turns Arabic numbers( 1, 2, 3) into Roman Numerals (I, II, III).
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string int_to_roman(int n);

int main() {
    char retry_1;
    do
    {
    int n;
    
    cout << "Please enter an integer: ";
        cin >> n;
        
        cout << "--> " << int_to_roman(n);
        cout << "\n\n";
        
    cout << "Would you like to run the program again? [y/n]" << endl;
    cin>>retry_1;
    
    }
    while(retry_1=='y' || retry_1=='Y');
    
    return 0;
}

string int_to_roman(int n){
    string RomanNumber;
    int th, h, t, o;
    const char *const ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    const char *const tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    const char *const hundreds[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    const char *const thousands[] = {"","M","MM","MMM","MMMM","MMMMM"};
    // "const char *const" References from Thanh Phan in class
    
    if (n <=4000){
        th = n/1000;
        n = n%1000;
        
        h = n/100;
        n = n%100;
        
        t = n/10;
        
        o = n%10;
        
        RomanNumber += thousands[th];
        RomanNumber += hundreds[h];
        RomanNumber += tens[t];
        RomanNumber += ones[o];
        
    }
    else
        RomanNumber = "Enter a smaller number \n";
    
    return RomanNumber;
}
