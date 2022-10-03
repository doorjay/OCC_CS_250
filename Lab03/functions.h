#include <string>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class DArray
{
public:
    DArray() : a(nullptr), capacity(0), numOfElements(0) {}
    DArray(int* arr, int cap, int noe) : a(arr), capacity(cap), numOfElements(noe) {}

    void rotate(int rotateIdx);
    void rotateRange(int first, int middle, int last);
    void rotateRange2(int first, int middle, int last);

private:
    int *a;
    int capacity;
    int numOfElements;
};

#endif