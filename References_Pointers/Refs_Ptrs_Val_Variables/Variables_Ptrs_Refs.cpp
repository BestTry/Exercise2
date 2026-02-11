// Variables_Ptrs_Refs.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Pulled example code from Pluralsight "Accelerated Introduction to C++ by Dmitri Nesteruk"
// Assure that the Cpp 20 compiler is invoked
//
#include "declarations.h";      // Header file holding declarations / library functions 
#include <format>
using std::format;

namespace life {                // Defining a unique personal namespace 
   int  meaning = 77;
   int* ptrMng = &meaning;      // Pointer declared and defined to variable 'meaning'
   int& refMng = meaning;       // Reference to the variable 'meaning' - Think reference is just an alias
}

int main()
{
   using namespace life;         // Note the namespace 'life' has member variable meaning defined
   cout << format(" Value of variable 'meaning': {}\n", meaning);
   cout << format(" Value of dereferenced pointer 'ptrMng' is: {}\n", *ptrMng);
   *ptrMng = 111;                // Re-assign variable 'meaning' via dererencing its pointer
   cout << format(" Re-assigned value of dereference pointer 'ptrMng' to variable 'meaning' is: {}\n", *ptrMng);
   refMng = 333;                 // Re-assigning the value to variable 'meaning' via its reference (alias)
   cout << format(" Reference (alias) value of variable 'meaning' after re-assigning its reference 'refMng' is {}\n", refMng);


   cout << endl << endl;
   system("pause>0");
   return 0;
}


