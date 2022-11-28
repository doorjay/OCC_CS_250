/*
	Pradhan, Dorje

    Fall 2022
    CS A250 -  C++ 2
    Project: CS Courses
*/

#include "Course.h"

#include <iostream>

using namespace std;

int main()
{
    Course java;

    java.setCourseNumber(150);
    java.setCourseName("Java");
    java.setCourseUnits(4);

    int prereqs[] = {100, 110};
    java.setPrereqs(prereqs, 2);

    cout << "Course number: " << java.getCourseNumber() << "\n";
    cout << "Course name: " << java.getCourseName() << "\n";
    cout << "Course units: " << java.getCourseUnits() << "\n";
    // cout << "Course prerequisets: " << "\n";

    return 0;
}