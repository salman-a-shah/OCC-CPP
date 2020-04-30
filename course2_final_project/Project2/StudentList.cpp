/*
	Shah, Salman
	CSA250
	March 10, 2014

	Project 1
*/

#include "StudentList.h"



// default constructor
StudentList::StudentList()
{
	studentList = new vector<Student>;
}


// addStudent
void StudentList::addStudent(Student student)
{
	studentList->push_back(student);
}



// getNoOfStudents
int StudentList::getNoOfStudents() const
{
	return (int) (studentList->size());
}



// printStudentByID
void StudentList::printStudentByID(int studentID, double tuitionRate) const
{
	int size = studentList->size();
	if (size <= 0)
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		vector<Student>::const_iterator iter = studentList->cbegin();
		bool found = false;

		while (!found && iter != studentList->cend())
		{
			if (iter->getID() == studentID)
			{
				iter->printStudentInfo(tuitionRate);
				found = true;
			}

			iter++;
		}

		if (found == false)
		{
			cout << "No student with ID " <<
					studentID <<
					" found in the list." << endl;
		}
	}

}


// printStudentsByCourse
void StudentList::printStudentsByCourse(const string &courseNo) const
{
	int size = studentList->size();
	if (size <= 0)
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		vector<Student>::const_iterator iter;

		for (iter = studentList->cbegin(); iter != studentList->cend(); iter++)
		{
			if (iter->isEnrolledInCourse(courseNo))
			{
				iter->printStudentInfo();
			}
			else
			{
				cout << "No student enrolled in " << courseNo << endl;
			}
		}
	}
}



// printStudentsByName
void StudentList::printStudentsByName(const string &lastName) const
{
	int size = studentList->size();
	if (size <= 0)
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		vector<Student>::const_iterator iter;
		bool found = false;

		for (iter = studentList->cbegin(); iter != studentList->cend(); iter++)
		{
			if (iter->getLastName() == lastName)
			{
				iter->printStudentInfo();
				found = true;
			}
		}

		if (found == false)
		{
			cout << "No student with last name " <<
					lastName <<
					" is in the list." << endl;
		}
	}
}



// printStudentsOnHold
void StudentList::printStudentsOnHold(double tuitionRate) const
{
	int size = studentList->size();
	if (size <= 0)
	{
		cerr << "No students in the list." << endl;
	}
	else
	{
		vector<Student>::const_iterator iter;
		bool foundHold = false;

		for (iter = studentList->cbegin(); iter != studentList->cend(); iter++)
		{
			if (! (iter->isTuitionPaid()))
			{
				iter->printStudentInfo(tuitionRate);
				foundHold = true;
			}
		}

		if (foundHold == false)
		{
			cout << "There are no students on hold." << endl;
		}
	}
}



// printAllStudents
void StudentList::printAllStudents(double tuitionRate) const
{
	int size = studentList->size();
	if (size <= 0)
	{
		cerr << "List is empty." << endl;
	}
	else
	{
		vector<Student>::const_iterator iter;

		for (iter = studentList->cbegin(); iter != studentList->cend(); iter++)
		{
			iter->printStudentInfo(tuitionRate);
		}
	}
}


// printStudentsToFile
void StudentList::printStudentsToFile(ofstream& outp, double tuitionRate) const
{
	int size = studentList->size();
	if (size <= 0)
	{
		cerr << "Cannot print. No students in the list." << endl;
	}
	else
	{
		vector<Student>::iterator iter;

		for (iter = studentList->begin(); iter != studentList->end(); iter++)
		{
			iter->printStudentInfoToFile(outp, tuitionRate);
		}
	}
}


// destroyStudentList
void StudentList::destroyStudentList()
{
	delete studentList;
	studentList = NULL;
}



// destructor
StudentList::~StudentList()
{
	destroyStudentList();
}

