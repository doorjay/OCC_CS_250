/**
 * This is a back up file for my Lab 1 Code check assignments
 * Hopefully this will not be needed at all!
 */

// Problem 1, write a function that returns the last element in a linked list
int AnyList::getLastElem() const
{
   Node* current = ptrToFirst;
   
   while (current->getPtrToNext() != nullptr)
   {
      current = current->getPtrToNext();
   }
   
   return current->getData();
}

// Problem 2, wirte a function that returns true if all the elements in a list are odd
bool AnyList::allOdds() const
{
   Node* current = ptrToFirst;
   
   while (current != nullptr)
   {
      // check for even number
      if (current->getData() % 2 == 0) return false;
      
      // advance pointer to next in list
      current = current->getPtrToNext();
   }
   
   // if it makes it this far there are no evens!
   return true;
}

// Problem 3, write a function that deletes the first node in a linked list
void AnyList::deleteFirstNode()
{
   if (ptrToFirst == nullptr)
   { cerr << "Cannot delete from an empty list.\n"; }
   else
   {
      Node* temp = ptrToFirst;
      ptrToFirst = ptrToFirst->getPtrToNext();
      
      delete temp;
      temp = nullptr;
   }
}

// Problem 4, write a function that compares two lists and
// returns true if they have the same elemts in the same order
bool AnyList::compareLists(const AnyList& compare) const
{
   // return false if the lists don't have the same number of elements
   if (count != compare.count) 
      return false;
   
   // two pointers to navigate the elements of each linked list
   Node* current = ptrToFirst;
   Node* compCurrent = compare.ptrToFirst;
   
   // loop until out of elements
   while (current != nullptr)
   {
      //break out of function and return false if not equal data
      if (current->getData() != compCurrent->getData())
         return false; 
      
      // advance both lists
      current = current->getPtrToNext();
      compCurrent = compCurrent->getPtrToNext();
   }
   
   // if it makes it this far, all the elements are equal
   // and have same number of elements
   return true;
}
