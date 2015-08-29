## Roman Numerals

### Requirements

Write a program that

0. Asks the user to enter an integer
0. Prints the integer in Roman numerals
0. Asks the user if they'd like to convert another integer
    - If the user enters `'n'` or `'N'`: end the program
    - If the user enters anything else: go back to step 1

- Do *not* use `using namespace std;`.  You may get around typing `std::` in
  front of things with, e.g., `using std::cout;` if you like.
- Handle user interaction within `main()`.
- Handle the conversion of an integer into a Roman Numeral in a separate
  function.
- Include your copyright and license information at the top of the file, e.g.

    ```c++
    /* ----------------------------------------------------------------------------
     * Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>
     * Released under the [MIT License] (http://opensource.org/licenses/MIT)
     * ------------------------------------------------------------------------- */
    ```

### Assumptions

- The user will enter the correct *type* of data when prompted.

### Notes

- Please try to do this in groups, and try to use Google, etc., only for
  answers to questions about the language (as opposed to questions about this
  problem).

- Please document and format your code well and consistently, wrap lines at 79
  or 80 characters whenever possible, and end your file with a blank line; the
  solution to this problem should only need one file.

### Sample Run

```
Please enter an integer: 123
--> CXXIII

Would you like to convert another integer (Y/N)? y

Please enter an integer: 401
--> CDI

Would you like to convert another integer (Y/N)? y

Please enter an integer: 1299
--> MCCXCIX

Would you like to convert another integer (Y/N)? n
```


-------------------------------------------------------------------------------
[![Creative Commons License](https://i.creativecommons.org/l/by/4.0/88x31.png)]
(http://creativecommons.org/licenses/by/4.0/)  
Copyright &copy; 2015 Ben Blazak <bblazak@fullerton.edu>  
This work is licensed under a [Creative Commons Attribution 4.0 International
License] (http://creativecommons.org/licenses/by/4.0/)  
Project located at <https://github.com/2015-fall-csuf-benblazak-cpsc-121>

