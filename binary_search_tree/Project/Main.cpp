#include "BST.h"
#include "BST.cpp"
#include "Student.h"

#include <iostream>
#include <fstream>
using namespace std;

template<class T>
void processTree(BST<T>&,char fileName[]);

void processStudentTree(BST<Student>&, char fileName[]);

template<class T>
void testTree(const BST<T>& bst);

int main()
{
	cout << "TESTING: int_1 BST\n\n";
	BST<int> int1BST;
	char fileNameInt1[] = "data_int_1.txt";
	processTree(int1BST,fileNameInt1);
	testTree(int1BST);

	//cout << "\n\n---------------------------------------------------\n";
	//cout << "TESTING: int_2 BST\n\n";
	//BST<int> int2BST;
	//char fileNameInt2[] = "data_int_2.txt";
	//processTree(int2BST,fileNameInt2);
	//testTree(int2BST);

	//cout << "\n\n---------------------------------------------------\n";
	//cout << "TESTING: int_3 BST\n\n";
	//BST<int> int3BST;
	//char fileNameInt3[] = "data_int_3.txt";
	//processTree(int3BST, fileNameInt3);
	//testTree(int3BST);

	cout << "\n\n---------------------------------------------------\n";
	cout << "TESTING: chars...\n\n";
	BST<Student> student1BST;
	char fileNameChar1[] = "data_student_1.txt";
	processStudentTree(student1BST, fileNameChar1);
	//testTree(student1BST);

	cout << "\n\n---------------------------------------------------\n";
	cout << "TESTING: Deleting tree...\n\n";
	int1BST.destroyTree();
	testTree(int1BST);

	cout << endl << endl;
	system("Pause");
	return 0;
}

template<class T>
void processTree(BST<T>& bst, char fileName[])
{
	ifstream infile;
	infile.open(fileName);

	if(!infile)
        cerr << "Cannot open the input file." << endl;
	else
	{
		T data;	
		infile >> data;
		
		while (!infile.eof())
        {
			bst.insert(data);
			infile >> data;
        }

		infile.clear(); //reset eof for next input
     }

     infile.close();
}

void processStudentTree(BST<Student>& bst, char fileName[])
{
	ifstream infile;
	infile.open(fileName);

	if (!infile)
		cerr << "Cannot open the input file." << endl;
	else
	{
		int tempID;
		string s1, s2;

		while (!infile.eof()) {
			infile >> tempID >> s1 >> s2;

			Student stud;
			stud.setStudentInfo(tempID, s1, s2);
			bst.insert(stud);
		}

		infile.clear();
	}

	infile.close();
}

template<class T>
void testTree(const BST<T>& bst)
{
	//TEST: inorderTraversal
	cout << "Inorder traversal: ";
	bst.inorderTraversal();

	//TEST: treeHeight
	cout << "\nHeight: " << bst.treeHeight();

	//TEST: totalNodes
	cout << "\nTotal nodes: " << bst.totalNodes();
}
