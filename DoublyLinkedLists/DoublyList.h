#include <string>

#ifndef DOUBLY_LIST_H
#define DOUBLY_LIST_H

class Node
{
public:
    // Constructors
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int theData, Node* prevLink, Node* nextLink)
        : data(theData), prev(prevLink), next(nextLink) {}
    
    // Functions
    int getData() const { return data; }
    Node* getPrev() const { return prev; }
    Node* getNext() const { return next; }

    void setData(int newData) { data = newData; }
    void setPrev(Node* prevLink) { prev = prevLink; }
    void setNext(Node* nextLink) { next = nextLink; }

    // Deconstructor
    ~Node();

private:
    // can hold multiple instances of data ei a string and an int
    int data;
    Node* prev;
    Node* next;
};

class DoublyList
{
    DoublyList() : first(nullptr), last(nullptr), count(0) {}

    void insertFront(int newData);

    void printForward() const;
    void printReverse() const;

    void clearList();
    ~DoublyList();

private:
    Node* first;
    Node* last;
    int count;
};

#endif