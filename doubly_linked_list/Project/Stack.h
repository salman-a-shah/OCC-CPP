#ifndef STACK_H
#define STACK_H

#include "Node.h"

template<class T>
class Stack
{
public:
	Stack();

	void push(T item);
	void pop();
	T top();
	int size();
	void print();
	bool empty();

	~Stack();
private:
	Node<T> * topItem;
};


#endif