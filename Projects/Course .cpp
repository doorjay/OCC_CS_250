/*
	Dorje Pradhan
    November 27, 2022
    C++ 2, CS 250
    Project 1, Part A
*/

#include "Course.h"

#include <iostream>
#include <iomanip>

using namespace std;

const string Course::PREFIX = "CS A";

// Definition overloaded constructor
Course::Course(int theCourseNumber, const string& theCourseName,
           int theCourseUnits, const set<int>& theCoursePrereqs)
{
	courseName = theCourseName;
	courseNumber = theCourseNumber;
	courseUnits = theCourseUnits;
	prereqs = theCoursePrereqs;
}

// Definition function getCourseNumber
int Course::getCourseNumber() const
{
	return courseNumber;
}

// Definition function getCourseName
const string& Course::getCourseName() const
{
	return courseName;
}

// Definition function getCourseUnits
int Course::getCourseUnits() const
{
	return courseUnits;
}

// Definition function getPrereqs
const set<int>& Course::getCoursePrerqs() const
{
	return prereqs;
}

// Definition function getCourse
const Course& Course::getCourse() const
{
	return *this; // calling object
}

// Definition function getPrefix
string Course::getPrefix()
{
	return PREFIX;
}

// Definition function setCourseName
void Course::setCourseName(const std::string& newCourseName)
{
	courseName = newCourseName;
}

// Definition function setCourseNumber
void Course::setCourseNumber(int newCourseNumber)
{
	courseNumber = newCourseNumber;
}

// Definition function setCourseUnits
void Course::setCourseUnits(int newCourseUnits)
{
	courseUnits = newCourseUnits;
}

// Definition function setPrereqs
void Course::setPrereqs(int newPrereqs[], int lengthPrereqs)
{
	for (int i = 0; i < lengthPrereqs; ++i)
	{
		prereqs.insert(newPrereqs[i]);
	}
}
