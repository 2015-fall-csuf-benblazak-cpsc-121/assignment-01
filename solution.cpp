/* ----------------------------------------------------------------------------
 * Copyright &copy; 2015 TODO(your name) <TODO(your email)>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

/**
 * This program takes an integer number and turns it into a Roman numeral.
 */

// TODO: `#include`s and function prototypes
#include <iostream>
#include <string>


// ----------------------------------------------------------------------------



using std::cout;
using std::cin;
using std::endl;

int main() {
    int usernumber;
    
    
    cout << "Please enter an integer: " << endl;                 //Ask user for integer input 
    cin >> usernumber;
    std::string romannumeral;
    
    int romanM;							//Variables to determine which and how many of each symbol to put, used later
    int romanC;
    int romanX;
    int romanI;
                                                                
    while (usernumber >= 1000) {				//Concerning the 1000s
        romanM = usernumber / 1000;
        romannumeral.append(romanM, 'M');
        usernumber -= (romanM * 1000);
    }
    
    if (usernumber >= 100) {					//Concerning the 100s
        romanC = usernumber / 100;
        if (romanC == 9) {
            romannumeral.append("CM");
            usernumber -= 900;
        }
        else if (romanC >= 5) {
            romannumeral.append("D");
            usernumber -= 500;
            
            if (usernumber >= 300) {
                int romanC2;
                romanC2 = usernumber / 100;
                romannumeral.append(romanC2, 'C');
                usernumber -= (romanC2 * 100);
            }
        }
        else if (romanC >= 4) {
            romannumeral.append("CD");
            usernumber -= 400;
        }
        else {
            romannumeral.append(romanC, 'C');
            usernumber -= (romanC * 100);
        }
        
    }
    
    if (usernumber >= 10) {					//Concerning 10s
        romanX = usernumber / 10;
        if (romanX == 9) {
            romannumeral.append("XC");
            usernumber -= 90;
        }
        else if (romanX >= 5) {
            romannumeral.append("L");
            usernumber -= 50;
            
            if (usernumber >= 30) {
                int romanX2;
                romanX2 = usernumber / 10;
                romannumeral.append(romanX2, 'X');
                usernumber -= (romanX2 * 10);
            }
        }
        else if (romanX >= 4) {
            romannumeral.append("XL");
            usernumber -= 40;
        }
        else {
            romannumeral.append(romanX, 'X');
            usernumber -= (romanX * 10);
        }
    }
    
    if (usernumber >= 0) {					//Concerning 1s
        romanI = usernumber;
        if (romanI == 9) {
            romannumeral.append("IX");
            usernumber -= 9;
        }
        else if (romanI >= 5) {
            romannumeral.append("V");
            usernumber -= 5;
            
            if (usernumber >= 3) {
                int romanI2;
                romanI2 = usernumber;
                romannumeral.append(romanI2, 'I');
                usernumber -= romanI2;
            }
        }
        else if (romanI >= 4) {
            romannumeral.append("IV");
            usernumber -= 4;
        }
        else {
            romannumeral.append(romanI, 'I');
            usernumber -= romanI;
        }
    }
    
    if (usernumber == 0) {						//This is to verify that there were no errors in the program
        cout << "It worked!" << endl;
    }
    else {
        cout << "Something went wrong..." << endl;
    }
        
    
    
    
    cout << romannumeral << endl;
    cout << usernumber << endl;
    return 0;
    }

// ----------------------------------------------------------------------------

// TODO: other functions

