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
    Course() : courseName("N/A"), 
               courseNumber(0),
               courseUnits(0) {}
    Course(int theCourseNumber, const std::string& theCourseName,
           int theCourseUnits, const std::set<int>& theCoursePrereqs);

	// Accessor functions -------------------------------------------
    const std::string& getCourseName() const;
    int getCourseNumber() const;
    int getCourseUnits() const;
    const std::set<int>& getCoursePrereqs() const;
    const Course& getCourse() const;
    static std::string getPrefix();
	
	// Mutator functions --------------------------------------------
    void setCourseName(const std::string& newCourseName);
    void setCourseNumber(int newCourseNumber);
    void setCourseUnits(int newCourseUnits);
    void setPrereqs(const int newPrereqs[], int lengthPrereqs);

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