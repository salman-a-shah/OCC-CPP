#include "BST.h"

	//default constructor

template<class T>
BST<T>::BST()
{
	root = NULL;
}

	//destructor

template<class T>
BST<T>::~BST()
{
	destroyTree(root);
}

	//destroyTree

template<class T>
void  BST<T>::destroyTree()
{
	destroyTree(root);
}

//destroy
template<class T>
void BST<T>::destroyTree(Node<T>* &p)
{
	if (p != NULL)
	{
		destroyTree(p->llink);
		destroyTree(p->rlink);
		delete p;
		p = NULL;
	}
}

//inorderTraversal
template<class T>
void BST<T>::inorderTraversal() const
{
	if (root == NULL)
		cerr << "There is no tree.";
	else
	{
		inorderTraversal(root);
	}
}

//totalNodes
template<class T>
int BST<T>::totalNodes() const
{
	if (root == NULL)
		return 0;
	else
		return totalNodes(root);
}

/***************************************************************

	Implement your functions below this line.

***************************************************************/

// Definition function insert
// Your code here...
template<class T>
void BST<T>::insert(const T& item)
{
	insert(item, root);
}


// Definition function insert(int, Node*)
template<class T>
void BST<T>::insert(const T& item, Node<T>* &p)
{
	if (p == NULL) {
		p = new Node<T>();
		p->data = item;
		p->llink = NULL;
		p->rlink = NULL;
	}
	else {
		if (item == p->data) {
			cout << "The item to insert is already in the list"
				<< " - duplicates are not allowed." << endl;
		}
		else {
			(item < p->data) ? insert(item, p->llink) : insert(item, p->rlink);
		}
	}
}



// Definition function inorderTraversal(Node*)
// Your code here... 
template<class T>
void BST<T>::inorderTraversal(Node<T>* node) const
{
	if (node != NULL) {
		inorderTraversal(node->llink);
		cout << node->data << " ";
		inorderTraversal(node->rlink);
	}
}



// Definition function treeHeight()
// Your code here... 
template<class T>
int BST<T>::treeHeight() const
{
	if (root != NULL) {
		return treeHeight(root) - 1;
	}
	
	return 0;
}


// Definition function treeHeight(Node*)
// Your code here... 
template<class T>
int BST<T>::treeHeight(Node<T>* node) const
{
	if (node != NULL) {
		int left = 1 + treeHeight(node->llink);
		int right = 1 + treeHeight(node->rlink);

		return ((left > right) ? left : right);
	}

	return 0;
}


// Definition totalNodes(Node*)
// Your code here... 
template<class T>
int BST<T>::totalNodes(Node<T>* node) const
{
	if (node != NULL) {
		return (1 + totalNodes(node->llink) + totalNodes(node->rlink));
	}

	return 0;
}

//template<class T>
//BST<T>& BST<T>::operator=(const BST<T> &rhs) {
//	if (this != &rhs) {
//		this->data = rhs->data;
//	}
//
//	return *this;
//}

