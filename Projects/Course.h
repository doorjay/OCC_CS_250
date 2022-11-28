/*
	Pradhan, Dorje

    Fall 2022
    CS A250 -  C++ 2
    Project: CS Courses
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

    // overloaded contructor for ALL non-static member variables
    // int courseNumber, string courseName
    // int courseunits, set<int> prereqs
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
    const std::set<int>& getCoursePrereqs() const;

    // returns Course object by reference as a constant 
    const Course& getCourse() const;

    // returns string PREFIX (STATIC VAR)
    static std::string getPrefix();
	
	// Mutator functions --------------------------------------------

    void setCourseName(const std::string& newCourseName);

    void setCourseNumber(int newCourseNumber);

    void setCourseUnits(int newCourseUnits);

    // @param newPrereqs, an array that contains all prereq courses
    // @param lengthPrereqs, the length of newPrereqs
    void setPrereqs(int newPrereqs[], int lengthPrereqs);

	// Destructor
    ~Course() {}
    
private: // DO NOT MODIFY!!!! ---------------------------------------
	int courseNumber;
	std::string courseName;	
	int courseUnits;	
	std::set<int> prereqs;
	static const std::string PREFIX;
};
#endif

