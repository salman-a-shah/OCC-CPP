/*
	Shah, Salman
	CSA250
	March 10, 2014

	Project 1
*/
#include "Student.h"

// default constructor
Student::Student()
{
	studentID = 0;
	numberOfCourses = 0;
	tuitionWasPaid = false;

}


// setStudentInfo
void Student::setStudentInfo(const string &fName,
		const string &lName,
		int id,
		bool tuitionPaid,
		const vector<Course> &courses)
{
	setName(fName, lName);
	studentID = id;
	tuitionWasPaid = tuitionPaid;
	numberOfCourses = courses.size();
	coursesEnrolled = courses;
}

// getID
int Student::getID() const
{
	return studentID;
}


// getNumberOfCourses
int Student::getNumberOfCourses() const
{
	return coursesEnrolled.size();
}


// getCreditsEnrolled
int Student::getCreditsEnrolled() const
{
	int totalCredits = 0;
	int cap = coursesEnrolled.size();

	for (int i = 0; i < cap; i++)
	{
		Course temp = coursesEnrolled[i];
		totalCredits += temp.getCourseCredits();
	}

	return totalCredits;
}


// isTuitionPaid
bool Student::isTuitionPaid() const
{
	if (tuitionWasPaid) return true;
	else return false;
}


// isEnrolledInCourse
bool Student::isEnrolledInCourse(const string &courseNo) const
{
	if (numberOfCourses > 0)
	{
		int i = 0;
		bool found = false;
		while (!found && i < numberOfCourses)
		{
			if (courseNo == coursesEnrolled[i].getCourseNumber())
			{
				return true;
			}

			i++;
		}
	}

	return false;
}


// getGpa //DO
double Student::getGpa() const
{
	double totalCredits = getCreditsEnrolled();
	double totalGrade = 0.0;
	double totalPossibleGrade = 0.0;

	for (int i = 0; i < numberOfCourses; i++)
	{
		char temp = coursesEnrolled.at(i).getCourseGrade();
		switch (temp)
		{
		case 'A':
			totalGrade += 4.0;
			break;
		case 'B':
			totalGrade += 3.0;
			break;
		case 'C':
			totalGrade += 2.0;
			break;
		case 'D':
			totalGrade += 1.0;
			break;
		default:
			break;
		}

		totalPossibleGrade += 4.0;
	}

	return (4.0 * ((totalGrade / totalPossibleGrade)));
}


// billingAmount
double Student::billingAmount(double tuitionRate) const
{
	return (getCreditsEnrolled() * tuitionRate);
}

// printStudentInfo
void Student::printStudentInfo() const
{
	cout << studentID << "-";
	printName();
}


// printStudentInfo (overloaded)
void Student::printStudentInfo(double tuitionRate) const
{
	cout << "Student Name: ";
	printName();
	cout << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "Number of courses enrolled: " << getNumberOfCourses() << endl;
	cout << endl;
	cout << "Course No  CourseName  Credits Grade" << endl;

	for (int i = 0; i < numberOfCourses; i++)
	{
		coursesEnrolled.at(i).printCourseInfo(tuitionWasPaid);
	}

	cout << endl;
	cout << "Total number of credit hours: " << getCreditsEnrolled() << endl;
	if (tuitionWasPaid)
	{
		cout << "Current Term GPA: " << getGpa() << endl;
	}
	else
	{
		cout << "*** Grades are being held for not paying the tuition. ***" << endl;
		cout << "Amount Due: $" << billingAmount(tuitionRate) << endl;
	}
	cout << endl;
	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;

}


// getCoursesEnrolled
vector<Course> Student::getCoursesEnrolled() const
{
	return coursesEnrolled;
}


//printStudentsInfoToFile
void Student::printStudentInfoToFile(ofstream& out, double tuitionRate)
{
	string firstName, lastName;
	getName(firstName, lastName);
	out << "Student Name: ";
	out << lastName << ", " << firstName << endl;
	out << endl;
	out << "Student ID: " << studentID << endl;
	out << "Number of courses enrolled: " << getNumberOfCourses() << endl;
	out << endl;
	out << "Course No CourseName  Credits Grade" << endl;

	for (int i = 0; i < numberOfCourses; i++)
	{
		out << left <<
				setw(11) << coursesEnrolled.at(i).getCourseNumber() <<
				setw(15) << coursesEnrolled.at(i).getCourseName() <<
				right <<
				setw(3) << coursesEnrolled.at(i).getCourseCredits();

		if (tuitionWasPaid)
		{
			out << setw(7) << right << coursesEnrolled.at(i).getCourseGrade()<< endl;
		}
		else
		{
			out << setw(7) << right << "***" << endl;
		}
		coursesEnrolled.at(i).printCourseInfo(tuitionWasPaid);
	}

	out << endl;
	out << "Total number of credit hours: " << getCreditsEnrolled() << endl;
	if (tuitionWasPaid)
	{
		out << "Current Term GPA: " << getGpa() << endl;
	}
	else
	{
		out << "*** Grades are being held for not paying the tuition. ***" << endl;
		out << "Amount Due: $" << billingAmount(tuitionRate) << endl;
	}
	out << endl;
	out << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
}


// destructor
Student::~Student()
{

}
