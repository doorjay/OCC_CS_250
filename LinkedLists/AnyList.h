#ifndef ANYLIST_H
#define ANYLIST_H

#include <string> // need to include for nullptr

class Node
{
public:
    // Defualt constructor
    Node() : data(0), ptrToNext(nullptr) {}
    
    // Overloaded constructor
    Node(int newData, Node *newPtrToNext)
        : data(newData), ptrToNext(newPtrToNext) {}

    // Function getData returns the int value stored in this node
    int getData() const { return data; }

    // Function returns the a pointer to the next Node
    Node* getPtrToNext() const { return ptrToNext; }

    // Function setPtrToNext overwrites the address stored in 
    // the node with a given address
    void setPtrToNext(Node *newPtrToNext)
        { ptrToNext = newPtrToNext; }

    // Function setData overwrites the int value stored in this node
    // with a given int
    void setData(int newData) { data = newData; }

    // Destructor
    ~Node(){}

private:
    // An int stored in the node
    int data;

    // A pointer to the next node
    Node *ptrToNext;
};

class AnyList
{
public:
    // Constructor
    AnyList() : ptrToFirst(nullptr), count(0) {}

    // Functions
    void insertFront(int);

    void print() const;

    void clearList();

    // Destructor
    ~AnyList();

private:
    // pointer to the first node in the list
    Node *ptrToFirst;

    // Variable to keep track of the numbre of nodes in the list
    int count;
};

#endif