#include "Student.h"

Student::Student()
{
	ID = 0;
	fName = "";
	lName = "";
}


void Student::setStudentInfo(int newID, 
	const string& newFirstName,
	const string& newLastName)
{
	ID = newID;
	fName = newFirstName;
	lName = newLastName;
}


Student::~Student()
{
	ID = 0;
	fName = "";
	lName = "";
}

bool Student::operator==(const Student &other) const
{
	return (ID == other.ID);
}

bool Student::operator<(const Student &other) const
{
	return (ID < other.ID);
}

bool Student::operator>(const Student &other) const
{
	return (ID > other.ID);
}

