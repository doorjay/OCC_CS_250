#include "AnyList.h"
#include <iostream>


using namespace std;

void AnyList::insertFront(int newData)
{
	ptrToFirst = new Node(newData, ptrToFirst);
	++count;
}

void AnyList::print() const
{
	// Be efficient! don't loop if empty list
	if (ptrToFirst == nullptr)
	{ cerr << "List is empty.\n"; } 
	else
	{
		Node *current = ptrToFirst;
		while (current != nullptr) // ends at the last node
		{
			// print the data the node holds
			cout << current->getData() << " ";

			// move to next node
			current = current->getPtrToNext();
		}
	}
}

// This does not delete the list object
// it ONLY DELETES THE NODES
void AnyList::clearList()
{
	// this node will be deleted, starts with first node
	Node *temp = ptrToFirst;

	while (ptrToFirst != nullptr)
	{
		// move the pointer along the list
		ptrToFirst = ptrToFirst->getPtrToNext();

		// delete the temp pointer
		delete temp;

		// update temp to the next node
		temp = ptrToFirst;
	}

	// No more nodes!
	count = 0;

}

AnyList::~AnyList()
{ clearList(); }