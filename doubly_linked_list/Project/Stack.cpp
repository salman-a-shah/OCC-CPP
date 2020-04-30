#include "Stack.h"

template<class T>
Stack<T>::Stack()
{
	topItem = NULL;
}

template<class T>
void Stack<T>::push(T item)
{
	if (topItem == NULL) {
		topItem = new Node<T>();
		topItem->setData(item);
		topItem->setNextLink(NULL);
		topItem->setPreviousLink(NULL);
	}
	else {
		Node<T> * newNode = new Node<T>();
		newNode->setData(item);
		newNode->setPreviousLink(topItem);
		topItem = newNode;
	}
}

template<class T>
void Stack<T>::pop()
{
	if (topItem == NULL) {
		cout << "No Items" << endl;
	}
	else {
		Node<T> * newNode = topItem;
		topItem = topItem->getPreviousLink();
		delete newNode;
		newNode = NULL;
	}
}

template<class T>
T Stack<T>::top()
{
	return topItem->getData();
}

template<class T>
int Stack<T>::size()
{
	return 0;
}

template<class T>
void Stack<T>::print()
{
	if (topItem == NULL) {
		cout << "No items" << endl;
	}
	else {
		while (topItem != NULL) {
			cout << top() << endl;
			pop();
		}
	}
}


template<class T>
bool Stack<T>::empty()
{
	return false;
}


template<class T>
Stack<T>::~Stack()
{

}