#include "functions.h"
void LinkedQueue::push(const int data)
{
   // if empty list
   if (ptrToFront == nullptr)
   {
      ptrToBack = new Node(data, nullptr);
      ptrToFront = ptrToBack;
   }
   else
   {
      ptrToBack->setNext(new Node(data, nullptr));
      ptrToBack = ptrToBack->getNext();
   }
   
   // don't forget to update count
   ++count; 
}

void LinkedQueue::pop()
{
   // nothing to remove if empty list
   if (ptrToFront != nullptr)
   {
      Node* temp = ptrToFront;
      ptrToFront = ptrToFront->getNext();
      
      delete temp;
      temp = nullptr;
      
      --count;
   }
}

bool LinkedQueue::empty() const
{
   return ptrToFront == nullptr;
}

int LinkedQueue::front() const
{
   return ptrToFront->getData();
}

int LinkedQueue::back() const
{
   return ptrToBack->getData();
}

size_t LinkedQueue::size() const
{
   return static_cast<size_t>(count);
}
