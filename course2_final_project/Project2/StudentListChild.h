/*
 * StudentListChild.h
 *
 *  Created on: Apr 28, 2014
 *      Author: Valkyrie
 */

#ifndef STUDENTLISTCHILD_H_
#define STUDENTLISTCHILD_H_

#include <map>
#include <vector>
#include "StudentList.h"
#include <utility>

using namespace std;

class StudentListChild : public StudentList
{
public:
	StudentListChild();

	void printStudentsInOrder() const;

	~StudentListChild();
};


#endif /* STUDENTLISTCHILD_H_ */
