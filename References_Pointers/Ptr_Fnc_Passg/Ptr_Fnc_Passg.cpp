// Ptr_Fnc_Passg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Pulled initial code and discription ff a google search 
/*  A C++ function pointer is a variable that stores the memory address of a function,
    allowing you to call the function indirectly, pass functions as arguments to other
    functions (callbacks), or store functions in data structures.

    Declaration and Initialization
    The syntax for a function pointer declaration is specific and must match the signature
    (return type and parameter types) of the function it points to. Parentheses around the
    pointer name are crucial to distinguish it from a function declaration.

    The general syntax is: [ return_type (*pointer_name)(parameter_types); ]
*/

#include <iostream>
using namespace::std;

int add(int a, int b) {     // Function 'add' with specific signature: int return, two int aguments/parameters
    return a + b;
}

void updateValue(int* p) { // Dereference the pointer to access and modify the value at the address
    *p = 100;
}
                            // Dereference the pointer to access and modify/increment the current value
void incrementValue(int* valuePtr) {
    (*valuePtr)++;
}
// ........................................................................................................

int main() {
                            // Declare a pointer 'func_ptr' that matches 'signature' of the 'add' function
    int (*func_ptr)(int, int);

                            // Initialize the pointer with the adress to the 'add' function 'func_ptr'   
    func_ptr = &add;        // The '&' operator is optional, as the function name decays to its address
                            // Or simply without '&' - 'address of operator': [ func_ptr = add ] works too! 

                            // Calling the add function via its pointer with dereference syntax option
    int result1 = (*func_ptr)(1, 3);    // Indirect call (dereferencing)
    int result2 = func_ptr(4, 5);       // Direct call (syntactic sugar) (simpler syntax)
    std::cout << " Result 1: " << result1 << ", Result 2: " << result2 << std::endl;

    int num = 10;            // Next example of passing a pointer to a function 'updateValue  
    cout << " Before function call, num = " << num << std::endl;
    updateValue(&num);       // Pass the address of num to the function 'updateValue'
    cout << " After function call, num = " << num << std::endl; // num is now 100

                             // Next example of passing a pointer to a function called 'incrementValue'
    std::cout << " Before the function call: " << num << std::endl;
    incrementValue(&num);    // Pass the address of 'num' to the function 'incrementValue'
    std::cout << " After function call: " << num << std::endl;

    cout << endl << endl;
    system("pause>0");
    return 0;
}
