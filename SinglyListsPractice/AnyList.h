#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>	

class Node
{
public:
	Node() : data(0), next(nullptr) {}
	Node(int theData, Node *newNext) : data(theData), next(newNext){}
	Node* getNext() const { return next; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
	void setNext(Node *newNext) { next = newNext; }

	~Node(){}
private:
    int data;		
    Node *next;	
};


class AnyList
{	
public:
	AnyList() : first(nullptr), count(0) {}

	// member functions
	int getCount() const { return count; } 
	void printList() const;


	void insertNodeFront(int value);
	void insertNodeEnd(int value);

	void clearList();
	~AnyList();

private:
	Node *first;	
	int count;		
};

#endif