// Algorithms_Accumulate.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Compute the sum of element values in an array using the library function Algorithm 'Accumulate'
// The code requires the C++20 version or later of a compiler.  
// Output presentation takes advantage for the 'format' function
// Code source is from the "Deitel/Deitel" C++ textbooks
//
#include <iostream>
#include <array>
#include <format>
#include <numeric>              // Required for: Library function Accumalate within <numeric> header not standard Algorithms header

                                // Utilizing this <using namespace std;> using statement will allow removal of all the <std::> syntax

int multiply(int x, int y);     // Function declaration use in Lamda expression below; Definition located below main() return 0 '}' bracket

int main()
{
    std::cout << std::endl << std::endl;
                                // Using the Algorithm - accumulate to total the sum of values within the array 'integers'
                                // Assign content to integer array; This is a compiled time array which is fixed for its life time
    constexpr std::array integers{ 10, 20, 30, 40, 50 };
    std::cout << std::format(" Sum of all elements in the large numbers array is: {}\n ", accumulate(begin(integers), end(integers), 0));
    std::cout << std::endl;     // Sum of elements initialized with a sum of zero - '0'
    constexpr std::array intSmall{ 1, 2, 3, 4, 5 };
    std::cout << std::format(" Sum of all elements in the small numbers array is: {}\n ", accumulate(begin(intSmall), end(intSmall), 0));

    std::cout << std::endl << std::endl;

    std::cout << " Compute the factoral of the elements in the array by passing a name of a function 'multiply'" << std::endl;
    std::cout << " Passing a function with accumulate is and overload of the Algorithm " << std::endl;
    std::cout << std::format(" Product of all elements in the array is: {}\n ", accumulate(begin(intSmall), end(intSmall), 1, multiply));

    std::cout << std::endl << std::endl;
    // *** Lambda expression use below:  The '[]' symbol is called the 'Lambda" introducer 
    // Lambda introducer followed by a comma seperated argument list and function body
    // Lambda is an anonymous function: (It is a function without a name)
    std::cout << " Compute the factoral of the elements in the array by passing a anonymous function with a 'lamda expression'" << std::endl;
    std::cout << " Passing a lamda expression with accumulate function is an overload of the Algorithm with four arguments " << std::endl;
    std::cout << std::format(" Product of all elements in the array is: {}\n", accumulate(begin(intSmall), end(intSmall), 1,
        [](const auto& x, const auto& y) { return (x * y); }));
    // The 'auto' enables the compiler to infer the varible type based on initial value of array 'intSmall' content (1 == int)
    // Using 'const' assures the lambda body array values will not be modified
    // Using '&' for performance causes the array element not to be copied

    std::cout << "\n\n Hit the enter key to exit" << std::endl;
    std::cout << std::endl << std::endl;
    system("pause>0");
    return 0;
}

int multiply(int x, int y) {
    return (x * y);
}
