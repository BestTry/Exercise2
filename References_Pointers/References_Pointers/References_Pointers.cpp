// References_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Majority of code examples were taken from "C++ How to Program" Tenth addition by Paul and Harvey Deitel

#include <iostream>
#include <format>

using namespace std;

// ....................................      Function Declarations       .................................

void getNumByRef(int& num);
void sqrNumByRef(int& refNum);


int main()
{
    std::cout << " Reference Variabes are aliases that have different names tied to previously declared variables\n" << endl;
    int num;
    getNumByRef(num);       // The variable 'num' will be initialized by the calling function 'getNum'
                            // Get a number and store its square in the variable 'num'
    cout << endl;

    cout << " The entered number " << num << " squared => ";
    void sqrNumByRef(int& num);
                   
    cout << num << endl;    // The original number's value (variable) is squared in its original memory location

    cout << endl << endl;
    system("pause>0");
    return 0;
}

// ...................................      Function Definitions        .................................

void sqrNumByRef(int& num) {// Square the number received as a reference variable (Not a value variable)
    num *= num;             // Notice there is no returned value for the function!
}

void getNumByRef(int& refNum) {  // Variable 'usrNum', reference - Any moded value is propagated to original variable
    cout << " Enter a number to be squared => ";
    cin >> refNum;
}

