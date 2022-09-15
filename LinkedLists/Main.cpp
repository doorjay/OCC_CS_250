#include "AnyList.h"
#include <iostream>

using namespace std;

int main()
{
	// place holder to keep track of first Node
	AnyList myList;

	myList.insertFront(8);
	myList.insertFront(7);
	myList.insertFront(4);
	myList.insertFront(2);

	cout << "\n";

	return 0;
}