/*
	Pradhan, Dorje

    Fall 2022
    CS A250 -  C++ 2
    Project: CS Courses
*/

#include "Course.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // two Course object, one default, one overloaded
    Course java;
    Course python(131, "Python", 4, {100});

    // set and get course name --------------------------------------
    cout << "Testing setCourseName\n";
    java.setCourseName("Java");

    cout << "Testing getCourseName\nShould be: Python, Java\n"
         << "Actual: " << python.getCourseName() 
         << ", " << java.getCourseName() << "\n\n";

    // set and get course number ------------------------------------
    cout << "Testing setCourseNumber\n";
    java.setCourseNumber(150);

    cout << "Testing getCourseNumber\nShould be: 131, 150\n"
         << "Actual: " << python.getCourseNumber() 
         << ", " << java.getCourseNumber() << "\n\n";

    // set and get course units -------------------------------------
    cout << "Testing setCourseUnits\n";
    java.setCourseUnits(3);

    cout << "Testing getCourseUnits\nShould be: 4, 3\n"
         << "Actual: " << python.getCourseUnits() 
         << ", " << java.getCourseUnits() << "\n\n";

    // set and get course prereqs -----------------------------------
    cout << "Testing setCoursePrereqs\n";
    int prereqs[] = {100, 110};
    java.setPrereqs(prereqs, 2);

    cout << "Testing getCoursePrereqs\nShould be: 100 and 100 110\n"   
         << "Actual: " << *(python.getCoursePrereqs().begin())
         << " and ";

    for (int elem : java.getCoursePrereqs())
    {
        cout << elem << " ";
    }
    cout << "\n\n";

    // get course ---------------------------------------------------
    cout << "Testing getCourse\nShould be: " 
         << &python << ", " << &python <<"\n"
         << "Actual: " << &python 
         << ", " << &python.getCourse() << "\n\n";
    
    // get prefix ---------------------------------------------------
    cout << "Testing getPrefix\n";

    cout << "Should be: CS A, CS A\n"
         << "Actual: " << python.getPrefix() 
         << ", " << java.getPrefix() << "\n\n";


    return 0;
}