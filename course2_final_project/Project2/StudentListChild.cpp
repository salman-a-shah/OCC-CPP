/*
* StudentListChild.cpp

*
*  Created on: Apr 28, 2014
*      Author: Valkyrie
*/

#include "StudentListChild.h"

StudentListChild::StudentListChild() { }

void StudentListChild::printStudentsInOrder() const
{
	map<string, int> listMap;
	vector<Student>::iterator iter;

	for (iter = studentList->begin(); iter != studentList->end(); iter++)
	{
		string first, last, temp;

		iter->getName(first, last);
		temp = last + ", " + first;

		listMap.insert(make_pair(temp, iter->getID()));
	}

	map<string, int>::const_iterator mIter;

	for (mIter = listMap.cbegin(); mIter != listMap.cend(); mIter++)
	{
		cout << mIter->first << " - " << mIter->second << endl;
	}
}

StudentListChild::~StudentListChild() { }
