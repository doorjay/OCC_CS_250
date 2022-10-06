#include "DoublyList.h"

using namespace std;

void DoublyList::clearList()
{ 	
    Node* temp = first;

    while (first != nullptr)
    {
        first = first->getNext();
        delete temp;
        temp = first;
    }

    last = nullptr;		
    count = 0;
}

DoublyList::~DoublyList()
{
    clearList();
}