// PassFncByValueRef.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Reference_of_Variable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Code retrieved from exmple of refernces with chapter 6 of the textbook "From Control Structures through Objects" - by Tony Gaddis Ninth edition
// 
// When used as parameters, reference variables allow a function to access the parameters original argument. 
// Changes to the parameter are also made to the arguement. Reference variable when used as a function parameter, allows access to the original argument.
// A reference viariable is an alias for another variable. Any changes made to the reference variable are acually performed on the original variable.
// By using a reference variable as a parameter, a fuciton may change a variable that is defined in another function as well.

#include <iostream>
#include <format>

using namespace std;
using std::cout;
using std::endl;
using std::cin;

// ....................................      Function Declarations       .................................
int getNumByVal();              // Aquire number by using a function that returns a value variable
int sqrNumByValue(int);         // Square a number by passing a copy of its original value

void sqrByRef(int&);            // Altrnative syntax => void sqrByRef(int& num);  
void getNumByRef(int&);         // Altrnative syntax => void getNumByRef(int& usrNum); 

int main()
{
    int num;                    // Declaring variable types as integers
    int numSqrd;
    cout << " Retrieving a number to be squared by using a function call with a standard value variable passing and return\n";
    num = getNumByVal();
    cout << format(" The value of the variable retrieved from the user before squaring it is: {}\n", num);
    numSqrd = sqrNumByValue(num);
    cout << format(" Number value after squaring it remains {}, while its squared value is: {}\n\n", num, numSqrd);
    cout << endl;

    cout << " Reference Variabes are aliases that have different names from their original declared variable names\n";
    cout << " Reference variables when passed to a funciton, are operated on which modifies them from their original value\n";
    getNumByRef(num);           // The variable 'num' will be initialized by the calling function 'getNumByRef'
                                // Get a number and store its content in a reference variable 'num'
                                // Notice varible num content before function call is modified by the function call 
    cout << format(" The original number {} entered was modified by its calling function\n", num);
    sqrByRef(num);              // The original number's value (variable) is squared in its original memory location cause it is a reference
    cout << format(" Its modified value is now {} which represents its squared value", num);

    cout << endl << endl;
    system("pause>0");
    return 0;
}

// ........................................     Function Definitions     .......................................

int getNumByVal() {             // Aquire number by using a function that returns a value variable
    int usrProvidedNum;
    cout << " Enter a number to be squared => ";
    cin >> usrProvidedNum; 
    return usrProvidedNum;
}

int sqrNumByValue(int num) {
    return (num *= num);
}

void sqrByRef(int& num) {         // Square the number received
    num *= num;                   // Notice there is no returned value!
}

void getNumByRef(int& usrNum) {
    cout << " Enter a number to be squared => ";
    cin >> usrNum;
}
