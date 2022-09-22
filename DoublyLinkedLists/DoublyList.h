#include <string>

#ifndef DOUBLY_LIST_H
#define DOUBLY_LIST_H

class Node
{
public:
    Node() : data(0), prev(nullptr), next(nullptr) {}
    Node(int theData, Node* prevLink, Node* nextLink)
        : data(theData), prev(prevLink), next(nextLink) {}

    // getters
    int getData() const { return data; }
    Node* getPrev() const { return prev; }
    Node* getNext() const { return next; }

    // setters
    void setData(int theData) { data = theData; }
    void setPrev(Node* prevLink) { prev = prevLink; }
    void setNext(Node* nextLink) { next = nextLink; }

    // deconstructor
    ~Node() {}
    
private:
    int data;
    Node* prev;
    Node* next;
};

class DoublyList
{
public:
    DoublyList() : first(nullptr), last(nullptr), count(0) {}

    void insertFront(int newData);

    void printForward() const;
    void printReverse() const;

    void clearList();
    void deleteNode(int element);
    ~DoublyList() {}

private:
    Node* first;
    Node* last;
    int count;
};

#endif