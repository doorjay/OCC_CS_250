#include "AnyList.h"

using namespace std;

void AnyList::clearList()
{ 	
	Node* temp = first;

	while (first != nullptr)
    {
		first = first->getNext();
        delete temp;
		temp = first;
    }

	count = 0;
}

AnyList::~AnyList()
{
	clearList();
}



/**
 * Insert a new Node, storing a given value to the front of the calling object
 */
void AnyList::insertNodeFront(int value)
{
	if (first == nullptr)
	{
		first = new Node(value, nullptr);
	}
	else
	{
		first = new Node(value, first);
	}

	// increment count
	++count;
} 

/**
 * Insert a new node, storung a given value, at the end of the calling object
 */ 
void AnyList::insertNodeEnd(int value)
{
	if (first == nullptr)
	{
		first = new Node(value, nullptr);
	}
	else if (first->getNext() == nullptr)
	{
		first->setNext(new Node(value, nullptr));
	}
	else
	{
		Node* current = first;

		while (current->getNext() != nullptr)
		{
			current = current->getNext();
		}

		current->setNext(new Node(value, nullptr));
	}

	++count;
}

void AnyList::printList() const
{
	if (first == nullptr)
	{
		cerr << "The list is empty\n";
	}
	else
	{
		Node* current = first;

		cout << "List elements: ";
		while (current != nullptr)
		{
			cout << current->getData() << " ";
			current = current->getNext();
		}

		cout << "\nThe list has " << count << "elements.\n";
	}

	
}