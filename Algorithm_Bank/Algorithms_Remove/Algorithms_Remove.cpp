// Algorithms_Remove.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Alcorithm_Remove.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Remove.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Make sure to change properties to indicate this is C++20 code to the compiler not C++14
// Example pulled form Pluralsight website - Kate Gregory tutorial "C++ Algorithyms Playbook" ***** Assure C++20 version compiler is used
//                            // Header Section - Files containing information the compiler needs to enable the code to funciton
#include <algorithm>          // Algorithms-function templates that perform common data manipulations: searching, sorting, copying, .... etc.
#include <iostream>           // Standard Input / Output Stream header
#include <ranges>            
#include <vector>             // Required for vector declaration and definition
#include <string>             // Required for string declaration and definition along with #include <format>
#include <format>             // Required for the Cpp20 formatting output function - Include <string> as well
using namespace std;          // Had to insert this before string class would work - Also required for cin and cout

// Declaration of function to display vector contents - Passing integer vector by reference
void dispVector(vector<int> vctr);

#include <iostream>

int main()
{
    // Delare and define vector with contents of integers
    vector<int> vctrSrc{ 2, 5, 1, 6, 3, 9, 6, 8, 3, 4, 0, 7, 5, 3, 4, 9, 4, 6, 5, 8, 0, 2, 1, 7, 2, 6, 8 };
    auto vctCopy = vctrSrc;     // Make copy for different uses - Could have used vector<int> - recommend using 'auto' for type
    // Function retrieves size of vector
    int vctrSize = vctrSrc.size();
    cout << "\n Contents of original vector of size: " << vctrSize << endl;
    dispVector(vctrSrc);        // Displays the contents of the vector arguement
    cout << endl;
                                // Removes all elements containing a value of argument '3' (newVectrEnd is a iterator)
    auto newVctrEnd = remove(begin(vctrSrc), end(vctrSrc), 3);

    cout << "\n Contents of modified vector " << endl;
    dispVector(vctrSrc);
                                // Finds new logical size of vector - Actual size doesn't change: Last arguments are copied & filled at end
    auto newVctrEndLogicSize = newVctrEnd - begin(vctrSrc);
    cout << " Vector has logical size of " << newVctrEndLogicSize << " elements with all the values of 3s removed" << endl << endl;
    cout << " Trim up vector actual size to logical size using the vector class function erase():" << endl;
    vctrSrc.erase(newVctrEnd, end(vctrSrc));
    vctrSize = vctrSrc.size();
    cout << "\n Contents of modified vector of size: " << vctrSize << endl;
    dispVector(vctrSrc);
    cout << endl << endl;
                                // Copy the orignal vector content (saved previosly) Same functionality as above
    vctrSrc = vctCopy;          // Prepare for same functioanality implementing code in single line - Start with same collection
    cout << " Repeat identical functionality using just a single line statement instead of previous three statement steps" << endl;
    vctrSrc.erase(remove(begin(vctrSrc), end(vctrSrc), 3), end(vctrSrc));
    vctrSize = vctrSrc.size();  // New vector size with '3's removed and vector trimmed
    cout << "\n Contents of modified vector of size: " << vctrSize << endl;
    dispVector(vctrSrc);
    
/* .....................................................................................................................................*/
    cout << endl << endl;
    cout << " Press 'Enter' key to finish" << endl << endl;    
    system("pause>0");
    return 0;
}
/* .....................................................................................................................................*/

                                // Display function definition - The for loop uses 'for-range' format to display the collection
void dispVector(vector<int> vctr) {
    int vctSize = vctr.size();
    cout << " { ";
    for (int val : vctr) {      // Requires compiler properties set to C++20 
        cout << format(" {} ", val);
    }
    cout << " } " << endl;      // Add ending bracket token for vector display
    auto vctrSize = vctr.size();
    cout << " Vector has size of " << vctrSize << " elements" << endl;
}