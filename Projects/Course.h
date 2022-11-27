/*
	Dorje Pradhan
*/

#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <set>

class Course
{
public:

	// Constructors

	// Accessor functions
	
	// Mutator functions

	// Destructor

private:
	int courseNumber;
	std::string courseName;	
	int courseUnits;	
	std::set<int> prereqs;
	static const std::string PREFIX;
};
#endif

