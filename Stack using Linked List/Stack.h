#include"Integer.h"
class Node {
	Integer * mData;
	Node * mNext;
public:
	Node(Integer*);
	Integer* getData();
	void setData(Integer*);
	Node* getNext();
	void setNext(Node*);
	~Node();
};

class Stack
{
	Node *top;
	int size;
public:
	Stack();
	bool push(Integer*);
	void pop();
	Integer* peek();
	bool isEmpty();
	int getSize();
	~Stack();
};

