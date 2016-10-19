#include "LinkedQueue.h"



LinkedQueue::LinkedQueue()
{
}

LinkedQueue::~LinkedQueue() {

}

bool LinkedQueue::Add(int value) {
	if (this->head == nullptr && this->tail == nullptr) {
		Node * temp = new Node(value);
		this->head = temp;
		this->tail = temp;
		return false;
	}
	else {
		Node * pivot = this->tail;
		while (pivot->getNext() != nullptr)
		{
			pivot = pivot->getNext();
		}
		Node * p = new Node(value);
		pivot->setNext(p);
		return true;
	}
	return false;
}