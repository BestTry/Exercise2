// Reference_Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Code retrieved from exmple of refernces with chapter 6 of the textbook "From Control Structures through Objects" - by Tony Gaddis Ninth edition
// 
// When used as parameters, reference variables allow a function to access the parameters original argument. 
// Changes to the parameter are also made to the arguement. Reference variable when used as a function parameter, allows access to the original argument.
// A reference viariable is an alias for another variable. Any changes made to the reference variable are acually performed on the original variable.
// By using a reference variable as a parameter, a fuciton may change a variable that is defined in another function as well.



#include <iostream>
#include <format>

using namespace std;

// ....................................      Function Declarations       .................................

void sqrIt(int& num);     
void getNum(int& usrNum);

int main()
{
    std::cout << "Reference Variabes are aliases that have different name of previously declared variables\n" << endl;
    int num;
    getNum(num);              // The variable 'num' will be initialized by the calling function 'getNum'
                              // Get a number and store its square in the variable 'num'
    cout << " \n" << endl;
  
    cout << " The number " << num << " squared is: ";
    sqrIt(num);              // The oriinal number's value (variable) is squared in its original memory location
    cout << num << endl;     // 

    cout << endl << endl;
    system("pause>0");
    return 0;
}

// ...................................      Function Definitions        .................................

   void sqrIt(int& num) {           // Square the number received
      num *= num;                   // Notice there is no returned value!
   }

   void getNum(int& usrNum) {
      cout << " Enter a number to be squared => ";
      cin >> usrNum;
   }
