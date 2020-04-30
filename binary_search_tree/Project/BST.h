#ifndef BST_H
#define BST_H

#include <string>		
#include <iostream>
using namespace std;

template<class U>
class Node
{
	template<class U>
	friend class BST;
public:
	Node(){}
	~Node(){}
private:
    U data;
    Node<U> *rlink, *llink;
};

template<class T>
class BST
{
public:

	BST();
		//Default constructor

	~BST();   
		//Destructor  

    void destroyTree();
		//Deallocates the memory space occupied by the BST

	void inorderTraversal() const;
		//Prints nodes of the BT in the inorder sequence
	
	int totalNodes() const;
		//Determines the number of nodes in the BST	

	// Declaration function insert
	// Your code here... 
	void insert(const T& item);

	// Declaration function treeHeight()
	// Your code here... 
	int treeHeight() const;
	
private:	
	Node<T> *root; //Pointer to the root

	void insert(const T& item, Node<T> * &p);

	void destroyTree(Node<T>* &p);
		//Destroy the BST to which p points
	
	// Declaration function inorderTraversal(Node<T>*)
	// Your code here... 
	void inorderTraversal(Node<T>*) const;


	// Declaration function treeHeight(Node<T>*)
	// Your code here... 
	int treeHeight(Node<T>*) const;


	// Declaration totalNodes(Node<T>*)
	// Your code here... 
	int totalNodes(Node<T>*) const;

	/*BST<T>& operator=(const BST<T> &rhs);*/

};

#endif