#include "Node.h"


Node::Node()
{
	value = 0;
	this->prev = nullptr;
	this->next = nullptr;
}
Node::Node(int n)
{
	value = n;
	this->prev = nullptr;
	this->next = nullptr;
}

Node::~Node()
{
}


Node * Node::getNext()
{
	return this->next;
}


void Node::setNext(Node*  n)
{
	this->next = n;
}

Node * Node::getPrev()
{
	return this->prev;
}


void Node::setPrev(Node*  n)
{
	this->prev = n;
}


void Node::setValue(int number)
{
	this->value = number;
}
