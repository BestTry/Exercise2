// Ref_Passg_to Fncs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Visual Studio Code application is a text editor which can aid in documenting Cpp code
//
// Example of passing arguments by reference to a 
// function that swaps the values of two variables. 

#include <iostream>
using namespace std;

// Function Declaration with reference argument parameters (&)
void swapnum(int&, int&);
void usrInp(int&);

// ....................................................................................

int main() {
    int a = 10;
    int b = 20;

    cout << " Before swapping refernce variables: a = " << a << ", b = " << b << endl;
    swapnum(a, b);  // Function call (Note: There is no '&' or '*' required when calling)
    cout << " After  swapping refernce variables: a = " << a << ", b = " << b << endl;

    cout << endl;
        
    int refNum;     // Acquiring two numbers from user to demo reference variable swapping
    usrInp(refNum); // Number acquired is a reference type number  
    int num1 = refNum;
    cout << endl;
    usrInp(refNum); // Number acquired is a reference type number
    int num2 = refNum;

    cout << endl;

    cout << " Before swapping refernce variables: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapnum(num1, num2);  // Function call (Note: There is no '&' or '*' required when calling)
    cout << " After  swapping refernce variables: num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "\n Hit any key to terminate the program";
    cout << endl << endl;
    system("pause>0");
    return 0;
}
// .................................................  Function Definitions  .....................................................

                        // Function Definition with reference argument parameters (&)
                        // Swapping reference integer type numbers
void swapnum(int& i, int& j) {
    int temp = i;       // Store the value of i
    i = j;              // Change i to the value of j
    j = temp;           // Change j to the original value of i
}

void usrInp(int& num) { // Acquire a refernce integer type number from user 
    cout << (" Enter a number here: => ");
    cin >> num;
    cout << " You entered the number: " << num << endl;
}