#include <iostream> 
#include <vector> 
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

/**
 * Dorje Pradhan
 * November 6, 2022
 * C++ 2, CS 250
 * Lab 7, Backup Submission
*/


// Question 1 ---------------------------------------------------------------------------------
sort(scores.begin(), scores.end(), [] (int a, int b) { return a > b; } );

for_each(scores.begin(), scores.end(), [] (int element) { cout << element << " "; } );

cout << *max_element(scores.begin(), scores.end());

cout << *max_element(scores.begin(), scores.end());

cout << *min_element(scores.begin(), scores.end());

cout << count(scores.begin(), scores.end(), 100);

cout << scores.size(); 

// Question 2 -----------------------------------------------------------------------------------
auto firstListBeginIter = firstList.begin();
auto firstListEndIter = firstList.end(); 

if ( find(firstListBeginIter, firstListEndIter, value1) != firstListEndIter)
{
    cout << "Found.";
}
else 
{
    cout << "Not found.";
}


replace(firstListBeginIter, firstListEndIter, value2, value3);

firstList.erase( find(firstListBeginIter, firstListEndIter, value3) );

firstList.sort();

auto fListIter = firstList.begin();
advance(fListIter, 2);
reverse( fListIter, firstListEndIter );

auto secondListIter = secondList.begin();
advance(secondListIter, secondList.size() - 3);
auto fListBegin = firstList.begin();
advance(fListBegin, 3);

firstList.splice(fListBegin, secondList, secondListIter, secondList.end());

// Question 3 -------------------------------------------------------------------------------------
vector2.resize(vector1.size());
copy_if(vector1.begin(), vector1.end(), vector2.begin(), [] (int value) { return value > 0; });

size_t newSize = count_if(vector2.begin(), vector2.end(), [] (int value) { return value != 0; });

vector2.resize(newSize);

for_each(vector1.begin(), vector1.end(), [&sumOfOdds] (int value) 
                                         { 
                                            if (value % 2 == 1 || value % 2 == -1) sumOfOdds += value; 
                                         } );

for_each(vector2.begin(), vector2.end(), [] (int& value) { value *= 2; });