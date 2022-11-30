/*
	(name header)
*/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"

#include <string>
#include <set>

class Node
{
public:
	Node() : course(), next(nullptr) {}
	Node(const Course& newCourse, Node* newNext)
		: course(newCourse), next(newNext) {}
	Course getCourse() const { return course; }
	Node* getNext() const { return next; }
	void setCourse(const Course& newCourse) { course = newCourse; }
	void setNext(Node* newNext) { next = newNext; }
	~Node() {}
private:
	Course course;
	Node* next;
};

class CourseList
{
public:
	// Default constructor
	

	// Functions addCourse


	// Accessor functions

	
	// Boolean functions


	// Function deleteCourse


	// Function retrieveAllCourses


	// Function clearList


	/********************* THE BIG THREE *********************/

	// Copy constructor	

	
	// Overloaded assignment operator


	// Destructor


private:
	// Function getCourseLocation


	// Function addInOrder

	
	// Helper functions for overloaded assignment operator


	Node* first;
	Node* last;
	int count;
};

#endif
