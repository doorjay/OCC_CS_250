#include <string>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Node
{
public:
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int theData, Node* nextLink, Node* prevLink) 
        : data(theData), next(nextLink), prev(prevLink) {}
    
    // getters
    int getData() { return data; }
    Node* getNext() { return next; }
    Node* getPrev() { return prev; }

    // setters
    void setData(int theData) { data = theData; }
    void setNext(Node* nextLink) { next = nextLink; }
    void setPrev(Node* prevLink) { prev = prevLink; }

    ~Node() {}

private:
    int data;
    Node* next;
    Node* prev;
};

class DoublyList
{
public:
    DoublyList() : count(0), first(nullptr), last(nullptr) {}
    DoublyList(int num, Node* firstLink, Node* lastLink)
        : count(num), first(firstLink), last(lastLink) {}

    bool search(int value) const;
    void swapLists(DoublyList& paramList);
    void insertInOrder(int num);

    ~DoublyList() {}

private:
    int count;
    Node* first;
    Node* last;
};

#endif