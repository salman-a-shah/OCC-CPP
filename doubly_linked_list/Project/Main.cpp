#include "DoublyList.h"
#include "DoublyList.cpp"
#include "Stack.h"
#include "Stack.cpp"

#include <iostream>
using namespace std;

int main()
{
	DoublyList<int> myDoublyList;

	myDoublyList.insertFront(2);
	myDoublyList.insertFront(3);
	myDoublyList.insertFront(4);
	myDoublyList.insertFront(5);
	myDoublyList.insertFront(6);

	if (myDoublyList.search(2))
		cout << "Found 2... " << endl;
	else
		cout << "Could not find 2." << endl;
	if (myDoublyList.search(3))
		cout << "Found 3... " << endl;
	else
		cout << "Could not find 3." << endl;
	if (myDoublyList.search(4))
		cout << "Found 4... " << endl;
	else
		cout << "Could not find 4." << endl;
	if (myDoublyList.search(5))
		cout << "Found 5... " << endl;
	else
		cout << "Could not find 5." << endl;
	if (myDoublyList.search(6))
		cout << "Found 6... " << endl;
	else
		cout << "Could not find 6." << endl;
	if (myDoublyList.search(100))
		cout << "Found 100... " << endl;
	else
		cout << "Could not find 100." << endl;

	cout << endl;

	myDoublyList.deleteNode(2);
	myDoublyList.deleteNode(6);   
	myDoublyList.deleteNode(4);  
	myDoublyList.deleteNode(100);

	cout << endl;

	DoublyList<int> myEmptyList;
	myEmptyList.deleteNode(3);	

	cout << endl;
	system("Pause");
	return 0;
}
