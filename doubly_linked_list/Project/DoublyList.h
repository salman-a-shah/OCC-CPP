#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include "Node.h"
using namespace std;

template <class T>
class DoublyList
{
public:
	DoublyList(); 
	~DoublyList(); 

	void insertFront(const T&);
	bool search(const T&) const;
	void deleteNode(const T&);
      
private:
    Node<T> *first; 
    Node<T> *last;  
	int count;
};

#endif