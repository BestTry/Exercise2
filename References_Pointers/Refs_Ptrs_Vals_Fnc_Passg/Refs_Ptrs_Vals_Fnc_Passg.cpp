// Refs_Ptrs_Vals_Fnc_Passg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// When used as parameters, reference variables allow a function to access the parameters original argument. 
// Changes to the parameter are also made to the arguement. 
// Reference variable when used as a function parameter, allows access to the original argument.
// A reference viariable is an alias for another variable. Any changes made to the reference variable are acually performed on the original variable.
// By using a reference variable as a parameter, a fuciton may change a variable that is defined in another function as well.

#include <iostream>
#include <format>

using namespace std;
using std::cout;
using std::endl;
using std::cin;

// ..................................................  Function Declarations  .................................................

int sqrByVal(int);          // Square argument by passing a copy of the argument value and return result
void sqrByRef(int&);        // Square argument by passing a reference to argument variable; Opt syntax: void sqrByRef(int& z);
                            // Note: When function is called, there is NO '*' or '&' symbol or 'int' type

int main()
{
    // ...........................................  Reference Variable Demonstration  ..........................................
    cout << endl << endl;
    int x{ 5 };
    int z{ 7 };

    cout << format(" The variable value of 'x' before the function call is: {}\n", x);
    int sqrX = sqrByVal(x); // Demonstration of function passing by value; Variable 'x' is a value type  
    cout << format(" The variable value of 'x' after the function call is: {}\n", x);
    cout << format(" The value of the integer varible x = {} squared is: {}\n", x, sqrX);

    cout << endl << endl;

    cout << format(" The value of integer varible z before function call by reference is: {}\n", z);
    sqrByRef(z);            // Demonstration of function passing by reference; Variable 'z' is passed by reference
    cout << format(" The value of integer varible z after function call by reference is: {}\n", z);
    cout << format(" The z variable was passed by reference. Z's value changed to: {}, (squared value of original 'z')", z);

    cout << endl << endl;

    // .................................................  Pointer Variable Demonstration  ..........................................
    int a{ 9 };             // Intialize variable destined to have a pointer 'aPtr' variable assigned to it => see next line
    int* aPtr = &a;         // Initialize integer pointer variable 'aPtr' with the address of the iteneger variable 'a'
                            // The '*' asteris bewfore the pointer variable 'aPtr' signifies 'indirection'

    cout << "\n The content value of variable 'a' is: " << a;
    cout << "\n The address of variable 'a' (using syntax:  '&a') is: " << &a;
    cout << "\n The address of variable 'a' (using syntax: 'aPtr') is: " << aPtr;
    cout << "\n The content value of variable 'a' (using syntax: '*aPtr') is: " << *aPtr;

    cout << endl << endl;
    system("pause>0");
    return 0;
}

// ........................................     Function Definitions     .......................................

int sqrByVal(int num) {     // Square argument by passing a copy of the argument value and return result
    return num *= num;      // Multiplies by itself; Result returns new value; Orig calling argument not modified
}

void sqrByRef(int& numRef) {// Square argument by passing a reference to the argument variable
    numRef *= numRef;       // Multiplies by itself; Result stored in original reference variable 'numRef'
}