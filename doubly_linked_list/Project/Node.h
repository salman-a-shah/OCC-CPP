#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
	Node(){}
	Node(T theData, Node<T> *previous, Node<T> *next)
		: data(theData), nextLink(next), previousLink(previous) {}
	Node<T> *getNextLink() const { return nextLink; }
	Node<T> *getPreviousLink() const { return previousLink; }
	T getData() const { return data; }
	void setData(const T& theData) { data = theData; }
	void setNextLink(Node<T> *pointer) { nextLink = pointer; }
	void setPreviousLink(Node<T> *pointer) { previousLink = pointer; }
private:
	T data;
	Node<T> *nextLink;
	Node<T> *previousLink;
};

#endif