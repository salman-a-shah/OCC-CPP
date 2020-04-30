/**************************************************************

	Stack STL
	The program asks the user to enter whole numbers and
	inserts all the numbers into stack1, and then transfer
	them to stack2, so that the elements in stack2 are in
	the same order as in stack1. 
	Cannot use a third stack to move elements.
	Can have only two variables: One to hold an element of 
	the stack and the other to hold the length of the stack.

**************************************************************/

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

// Declaration function fillStack
void fillStack(stack<int> &s1);

// Declaration function transferStackElements
void transferStackElements(stack<int> &s1, stack<int> &s2);

int main()
{
	stack<int> s1;
	stack<int> s2;

	fillStack(s1);
	
	transferStackElements(s1,s2);

	while (!s2.empty())
	{
		cout << "Pop item from S2: " << s2.top() << endl;
		s2.pop();
	}

	cout << endl;
	system("Pause");
	return 0;
}

// Definition function fillStack
void fillStack(stack<int> &s1)
{
	int temp = 0;
	cout << "Enter whole numbers (enter 0 to quit): ";
	while (cin >> temp && temp != 0)
	{
		s1.push(temp);
	}
}

// Definition function trransferStackElements
void transferStackElements(stack<int> &s1, stack<int> &s2)
{
	int theOnlyVariable = 0;
	while (s1.top() > 0)
	{
		theOnlyVariable = s1.top() * -1;
		s1.pop();

		while ((!s1.empty()) && (s1.top() > 0))
		{
			s2.push(s1.top());
			s1.pop();
		}

		s1.push(theOnlyVariable);

		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
	}

	while (!s1.empty())
	{
		s2.push(s1.top() * -1);
		s1.pop();
	}
}