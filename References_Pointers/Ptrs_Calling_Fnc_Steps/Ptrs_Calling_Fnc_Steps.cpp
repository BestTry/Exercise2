// Ptrs_Calling_Fnc_Steps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Retrieved the following function pointer calling from a google search 
// In C++, functions can be called using a function pointer, a variable that stores
// the memory address of a function with a specific signature.
// Enumerated Steps to in callling a Free (Non-Member) Function:
// The general approach i to declare/define, initialize, and call a pointer to a standalone function.
// See enumerated steps below

#include <iostream>
using namespace::std;


    // 1) Define the cpp function: and note its signature!
void myFunction(int value) {    
    std::cout << " Function called with a value: " << value << std::endl;
}

int main() {

    // 2) Declare the function pointer: Assure the syntax for a function pointer matches 
    // the function's signature, with (*pointerName) replacing the function name.

    void (*ptrToFunction)(int);

    // 3) Initialize the pointer: Assign the address of a function with the matching 
    // signature to the pointer. The address-of operator '&' is optional here.
    // or simple alternative syntax: [ ptrToFunction = myFunction; ]

    ptrToFunction = &myFunction;

    // 4) Call the function via the pointer: Call the function through the pointer using a normal 
    // function call syntax, with the pointer name followed by parentheses () and arguments.
    // Option: One can also use the syntax explicitly dereferencing the pointer 
    // (though it's less common): [ (*ptrToFunction)(10); ]

    ptrToFunction(10);
    (*ptrToFunction)(10);

    cout << endl << endl;
    system("pause>0");
    return 0;
}