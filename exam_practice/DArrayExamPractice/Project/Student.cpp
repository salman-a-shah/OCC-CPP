#include "Student.h"

Student::Student( )
{
	id = 0;
	//no need to initialize string
	//  because it belongs to the string
	//  class which has a constructor
}

Student::Student(int newID, string newMajor)
{
	id = newID;
	major = newMajor;
}

void Student::setID(int newID)
{
	id = newID;
}

void Student::setMajor(string newMajor)
{
	major = newMajor;
}

int Student::getID() const
{
	return id;
}

string Student::getMajor() const
{
	return major;
}

void Student::print() const
{
	cout << "Student ID: " << id 
		<< "\nStudent major: " << major << endl;
}

Student::~Student( )
{
}