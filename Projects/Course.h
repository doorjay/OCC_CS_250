/*
	Dorje Pradhan
    November 27, 2022
    C++ 2, CS 250
    Project 1, Part A
*/

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <set>

class Course
{
public:

	// Constructors -------------------------------------------------
    Course() : courseName("N/A"), courseNumber(0),
               courseUnits(0) {}

    Course(int theCourseNumber, const std::string& theCourseName,
           int theCourseUnits, const std::set<int>& theCoursePrereqs);

	// Accessor functions -------------------------------------------

    // returns string courseName by reference as a constant 
    const std::string& getCourseName() const;

    // returns int courseNumber by value
    int getCourseNumber() const;

    // returns int courseUnits by value
    int getCourseUnits() const;

    // returns the set<int> prereqs by reference as a constant 
    const std::set<int>& getCoursePrerqs() const;

    // returns Course object by reference as a constant 
    const Course& getCourse() const;

    // returns string PREFIX (STATIC VAR)
    static std::string getPrefix();
	
	// Mutator functions --------------------------------------------

    void setCourseName(const std::string& newCourseName);

    void setCourseNumber(int newCourseNumber);

    void setCourseUnits(int newCourseUnits);

    void setPrereqs(int newPrereqs[], int lengthPrereqs);

	// Destructor

private: // DO NOT MODIFY!!!! ---------------------------------------
	int courseNumber;
	std::string courseName;	
	int courseUnits;	
	std::set<int> prereqs;
	static const std::string PREFIX;
};
#endif

