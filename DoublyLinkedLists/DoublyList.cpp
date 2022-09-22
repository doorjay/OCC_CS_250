#include "DoublyList.h"
#include <iostream>

using namespace std;

void DoublyList::insertFront(int newData)
{
    // if the list is empty, create a new node and store newData in data
    if (first == nullptr)
    {
        first = new Node(newData, nullptr, nullptr);
        last = first;
    }
    else
    {
        first = new Node(newData, nullptr, first);

        // remember to connect prev to the olf "first" node
        first->getNext()->setPrev(first);
    }

    // increase the count
    ++count;
}

void DoublyList::printForward() const
{
    // start at first node and move until the end
    Node* current = first;

    while ( current != nullptr)
    {
        cout << current->getData();
        current = current->getPrev();
    }
}

void DoublyList::printReverse() const 
{
    // start at THE END and move until begining
    Node* current = last;

    while (current != nullptr)
    {
        cout << current->getData();
        current = current->getPrev();
    }
}

void DoublyList::deleteNode(int element)
{
    if (first == nullptr)
    {
        cerr << "The list is empty, nothing to delete.\n";
    }
    else if (first->getData() == element)
    {
        // quick access to first node
    }
    else
    {

    }
};