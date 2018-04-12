#include "Stack.h"

Node::Node(Integer *data):mData(data), mNext(nullptr){}

Integer * Node::getData()
{
	return mData;
}

void Node::setData(Integer *data)
{
	mData = data;
}

Node * Node::getNext()
{
	return mNext;
}

void Node::setNext(Node *next)
{
	mNext = next;
}

Node::~Node()
{
	delete mData;
}

Stack::Stack()
{
	top = nullptr;
	size = 0;
}

bool Stack::push(Integer *newData)
{
	Node *newNode = new Node(newData);
	if (newNode == nullptr) {
		return false;
	}
	if (top == nullptr) {
		top = newNode;
		size++;
		return true;
	}
	newNode->setNext(top);
	top = newNode;
	size++;
	return true;
}

void Stack::pop()
{
	if(top==nullptr)
		return;
	
	Node *temp = top;
	top = top->getNext();
	size--;
}

Integer * Stack::peek()
{
	return top->getData();
}


bool Stack::isEmpty()
{
	return top==nullptr;
}

int Stack::getSize()
{
	return size;
}

Stack::~Stack()
{
}

