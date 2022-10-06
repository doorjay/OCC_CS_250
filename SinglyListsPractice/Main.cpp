#include "AnyList.h"

#include <iostream>
using namespace std;

int main()
{
    // test cases
	AnyList myList;

	for (int i = 0; i < 5; ++i)
	{
		myList.insertNodeFront(i + 1);
	}

	myList.printList();

	cout << endl;
	return 0;
}


