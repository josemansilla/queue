#pragma once
#include "Node.h"

class LinkedQueue
{
public:
	LinkedQueue();
	~LinkedQueue();
	bool Add(int number);
protected:
	Node *head;
	Node *tail;
};