/*
	Shah, Salman
	CSA250
	March 10, 2014

	Project 1
*/
#include "Course.h"

// default constructor
Course::Course()
{
	courseCredits = 0;
	courseGrade = '*';
}


// setCourseInfo
void Course::setCourseInfo(const string &cName,
		const string &cNumber,
		char cGrade,
		int cCredits)
{
	courseName = cName;
	courseNo = cNumber;
	courseGrade = cGrade;
	courseCredits = cCredits;
}


// printCourseInfo
void Course::printCourseInfo(bool print) const
{
	cout << left <<
			setw(11) << courseNo <<
			setw(15) << courseName <<
			right <<
			setw(3) << courseCredits;

	if (print)
	{
		cout << setw(7) << right << courseGrade << endl;
	}
	else
	{
		cout << setw(7) << right << "***" << endl;
	}
}


// getCourseCredits
int Course::getCourseCredits() const
{
	return courseCredits;
}


// getCourseNumber
string Course::getCourseNumber() const
{
	return courseNo;
}


// getCourseName
string Course::getCourseName() const
{
	return courseName;
}


// getCourseGrade
char Course::getCourseGrade() const
{
	return courseGrade;
}


// destructor
Course::~Course()
{

}

