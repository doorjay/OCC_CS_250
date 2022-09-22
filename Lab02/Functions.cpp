#include "Functions.h"
#include <string>

using namespace std;

// Part 1
bool DoublyList::search(int value) const
{
   if (first->getData() == value)
   {
      return true;
   }
   else
   {
      Node* current = first->getNext();
      
      while(current != nullptr)
      {
         if (current->getData() == value)
         {
            return true;
         }
         
         current = current->getNext();
         
      }
   }
   
   // looks through every node and can't find
   return false;
}

// Part 2
void DoublyList::swapLists(DoublyList& paramList)
{
   // swap first of both lists
   Node* temp = first;
   first = paramList.first;
   paramList.first = temp;
   
   // swap last
   temp = last;
   last = paramList.last;
   paramList.last = temp;
   
   // swap the count!!!
   int tempCount = count;
   count = paramList.count;
   paramList.count = tempCount;
   
}

// Part 3
void DoublyList::insertInOrder(int num)
{
   // check if empty
   if (first == nullptr)
   {
      Node* newNode = new Node(num, nullptr, nullptr);
      first = newNode;
      last = newNode;
   }
   // check for less than first node
   else if (num <= first->getData())
   {
      Node* newNode =  new Node(num, nullptr, first);
      first->setPrev(newNode);
      first = newNode;
   }
   // check for greater than last node
   else if (num >= last->getData())
   {
      Node* newNode = new Node(num, last, nullptr);
      last->setNext(newNode);
      last = newNode;
   }
   // else loop through, check each value
   else
   {
      Node* current = first->getNext();
      bool done = false;
      
      while (current != nullptr && !done)
      {
         if (current->getData() >= num)
         {
            Node* newNode = new Node(num, current->getPrev(), current);
            current->setPrev(newNode);
            newNode->getPrev()->setNext(newNode); 
            done = true;
         }

         current = current->getNext();
      }
   }
   
   // increase the count!!!
   ++count;
}

