#include "functions.h"
#include <iostream>

using namespace std;

// Problem # 1
void DArray::rotate(int rotateIdx)
{
   if (rotateIdx > numOfElements)
   {
      cerr << "\nRotation index exceeds number of elements.";
   }
   else if (rotateIdx == numOfElements)
   {
      cout << "\nNo need to rotate.";
   }
   else
   {
      int tempArr[numOfElements]; 
      
      for (int i = 0; i < numOfElements; ++i)
      {
         tempArr[i] = a[rotateIdx];
         
         if (rotateIdx < numOfElements - 1)
         {
            rotateIdx++;
         }
         else
         {
            rotateIdx = 0;
         }
      }
      
      for (int i = 0; i < numOfElements; ++i)
      {
         a[i] = tempArr[i];
      }
   }
}

// Problem # 2
void DArray::rotateRange(int first, int middle, int last)
{
   int range = last - first + 1;
   int tempArr[range];
   
   int index = 0; // index for tempArr
   for (index = 0; index < last - middle + 1; ++index)
   {
      tempArr[index] = a[middle + index];
   }
   
   for (int x = 0; x < middle; ++x)
   {
      tempArr[index] = a[first + x];
      ++index;
   }
   
   for (int j = 0; j < range; ++j)
   {
      a[first + j] = tempArr[j];
   }
}


// maybe a solution with an if statement?

// void DArray::rotateRange(int first, int middle, int last)
// {
//    int range = last - first;
//    int tempArr[range];
   
//    for (int i = 0; i < range; ++i)
//    {
//       tempArr[i] = a[middle + i - 1];
      
//       if (middle + i == last)
//       {
//          middle = first;
//       }
//    }
   
//    for (int i = 0; i < range; ++i)
//    {
//       a[first + i - 1] = tempArr[i];
//    }
// }