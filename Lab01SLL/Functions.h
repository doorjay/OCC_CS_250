#include <string>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Node
{
public: 
    Node() : ptrToNext(nullptr), data(0) {}
    Node(Node* ptr, int num) : ptrToNext(ptr), data(num) {}

    Node* getPtrToNext() { return ptrToNext; }
    int getData() { return data; }


private:
    Node* ptrToNext;
    int data;
};

class AnyList
{
public:
    AnyList() {}

    int getLastElem() const;
    bool allOdds() const;
    void deleteFirstNode();
    bool compareLists(const AnyList& compare) const;

private:
    Node* ptrToFirst;
    int count;
};

#endif