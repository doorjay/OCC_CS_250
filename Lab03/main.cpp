#include "functions.h"
#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    DArray test = DArray(a, 10, 9);

    for (int i = 0; i < 9; ++i)
    {
        cout << a[i] << " ";
    }

    test.rotateRange(2, 4, 6);

    for (int i = 0; i < 9; ++i)
    {
        cout << a[i] << " ";
    }

    return 0;
}
