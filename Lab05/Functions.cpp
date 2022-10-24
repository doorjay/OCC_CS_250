#include "functions.h"


using namespace std;

int processSuitors(vector<int>& suitors, list<int>& eliminated)
{
   int  index = 0;
   
   while (suitors.size() > 1)
   {
      index = (index + 2) % suitors.size();
      
      eliminated.push_back(suitors[index]);
      suitors.erase(suitors.begin() + index);
   }
   
   
   return suitors[0];
}

