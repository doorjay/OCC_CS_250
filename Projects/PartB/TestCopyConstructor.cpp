/*
	(name header)
*/

#include "CourseList.h";

#include <iostream>
using namespace std; 

void testCopyConstructor()
{	
	/***************************************************
	* TEST COPY CONSTRUCTOR: PARAMETER OBJECT IS EMPTY
	****************************************************/

	// To print, create a variable of type string and use it
	// as an argument to call the function retrieveAllCourses().


	// Create an object of the class CourseList named 
	// courseList1 using the default constructor.


	// Create an object of the class CourseList named 
	// courseList2 using the copy constructor with 
	// parameter courseList1.
	// CALL: CourseList courseList1(courseList2)


	// Print courseList1 (should be empty)


	// Print courseList2 (should be empty)


	/*****************************************************
	* TEST COPY CONSTRUCTOR: PARAMETER OBJECT HAS COURSES
	******************************************************/	

	// Add 131 and 272 to courseList1


	// Create an object of the class CourseList named 
	// courseList3 using the copy constructor with 
	// parameter courseList1.
	// CALL: CourseList courseList3(courseList1)


	// Print courseList1 (should show 131 and 272)


	// Print courseList3 (should show 131 and 272)


	// CLEAR courseList1


	// Print courseList1 (should be empty)


	// Print courseList3 (should show 131 and 272)

}
