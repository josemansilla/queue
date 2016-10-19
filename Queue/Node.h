#pragma once

class Node
{
public:
	Node();
	virtual ~Node();
	Node(int number);
	Node * getNext();
	Node * getPrev();
	void setValue(int number);
	void setNext(Node * p);
	void setPrev(Node * p);
protected:
	int value;
	Node * prev;
	Node * next;
};

