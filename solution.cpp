+/*-----------------------------------------------------------------------
+ *              Name: Thanh Phan
+ *              Course: CPSC 121, Tue Lab
+ *              Professor: Ben Blazak
+ * -----------------------------------------------------------------------*/
+/* -----------------------------------------------------------------------
+ * Copyright &copy; 2015 Thanh Phan <tphan2650@gmail.com
+ * Released under the [MIT License] (http://opensource.org/
+ * licenses/MIT)
+ * -----------------------------------------------------------------------*/
+
+
+#include <iostream>
+#include <string>
+using std::string;
+using std::cin;
+using std::cout;
+using std::endl;
+
+//Function to convert integer to Roman numerals
+string int_to_roman(int n)
+{
+    string roman_num;
+    int o, t, h, th;
+    
+    //Array of Roman Numerals to find which integer 
+    //was entered and replace it with the corresponding array element
+    const char*const ones [] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
+    
+   const char* const tens [] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
+    
+    const char* const hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
+    
+    const char* const thousands [] = {"", "M", "MM", "MMM", "MMMM"};
+    
+    if (n < 5000) {
+    th = n / 1000;
+    n = n % 1000; //Removes the thousands place and uses the remainder
+    
+    h=n/100;
+    n=n%100; //Removes the hundreds place and use the remainder
+    
+    t=n/10;  
+   o=n%10;
+    roman_num = roman_num+ thousands[th]+hundreds[h]+ tens[t]+ones[o]; //Adds the roman numerals together
+    }
+    
+    
+    else if (n>=5000) //Tells user if the number is too high to convert
+    {
+        cout << endl;
+        cout << "I'm not smart enough to do that, go lower!" << endl;
+    }
+    cout << roman_num << endl << endl;
+    }
+
+int main()
+{
+    int input;
+    char choice;
+    
+    do{ //Loops program if user answers Y
+    cout << "Please enter an integer (1-4999): ";
+    cin >> input;
+    
+    int_to_roman(input);
+    
+    cout << "Would you like to convert another integer (Y/N)?: ";
+    cin >> choice;
+    }
+    while (choice =='y' || choice =='Y');
+    
+    return 0;
+}