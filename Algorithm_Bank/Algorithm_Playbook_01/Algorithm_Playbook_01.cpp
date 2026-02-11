// Algorithm_Playbook_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// AlgorithmsPlaybook1.cpp : This file contains the 'main' function. Program execution begins and ends there.  works with C++14
//
// Example pulled form Pluralsight website  -  Kate Gregory tutorial "C++ Algorithyms Playbook"
//                            // Header Section - Files containing information the compiler needs to enable the code to funciton
#include <iostream>           // Standard Input / Output Stream header
#include <algorithm>          // Algorithms-function templates that perform common data manipulations: searching, sorting, copying, .... etc.
#include <vector>
using std::vector;
using std::count;
using namespace std;

int main()
{                              // Delared and defined vector with integer contents
    vector<int> intVctr{ 2, 5, 6, 1, 3, 9, 6, 3, 8, 4, 0, 7, 5, 3, 3, 9 };
    auto ndx1 = intVctr.begin();// Acquire beginning index contents of vector
    auto ndx2 = intVctr.end();  // Grabs ending index contents of one index address past last vector element


    int element;
    element = *ndx1;             // Contents of first <(0)> index of integer vector
    cout << " Contents of the integer type vector at index '0': " << element << endl;
    ndx1++;
    element = *ndx1;
    cout << " Contents of the integer type vector at index '1': " << element << endl;
    // Conventional method (Raw Loop) of finding the number of occurences of < 3 >
    int target = 3;              // Target element value is defined as < 3 >
    int numOf3s = 0;             // Number of vector elements contain the integer 3, Variable initialized to zero>
    for (int i = 0; i < intVctr.size(); i++) {
        if (intVctr[i] == 3)
            numOf3s++;
    }
    cout << " Number of integer 3 occuring in the vector:  " << numOf3s << endl;

    /* cout << " The conventional lagacy method has pottentially multiple issues prone to errors\n"
        << " Such as incorrect index initiation, comparison operator, increment syntax etc.\n "
        << " Takes time to type and time to read and challenging to comprehend, check for errors etc." << endl << endl;*/
    cout << endl << endl;
    system("pause>0");

    // *** New Policy - Avoid using raw loops! *** => Use Algorithms instead!
    // Calling algorithm called 'count' passing iterators 'begin' & 'end' - Note: 'end' is one element past last element
    // First example uses member functions of the vector class, Second example uses free or non-member function of a class
    // Recommend to always use second example format - free version as it is more univeral 
    numOf3s = count(intVctr.begin(), intVctr.end(), target);
    numOf3s = count(begin(intVctr), end(intVctr), target);

    // Third method / Algorithm with 'Range' implementation - Implemented with C++20 
    numOf3s = ranges::count(intVctr, target);

    // More Algorithm Functions: 
    //       count,   count if
    //       find,    find if
    //       copy,    copy i
    //  ...  More Yet (General Descriptions) ...
    // Comparing and Accumalating
    // Copying and Moving
    // Transforming - Going thru a collection and modifying elements
    // Generating and Manipulating
    // Conventions
    // and much, much more ... (Over 0ne hundred functions at present)
    // Algorithms work on: vectors, arrays lists, stacks, maps, queues, strings etc.
    // May need to add some of theses headers: <iterator>, <utility>, <tuple>, <numeric> and many others

    cout << endl << endl;
    cout << " Hit the enter key to exit" << endl;
    system("pause>0");
    return 0;

}
