/*
	Shah, Salman
	CSA250
	March 10, 2014

	Project 1
*/
/* Implementation of the class Person */
#include "Person.h"

Person::Person()
{
	firstName = "N/A";
	lastName = "N/A";
}
Person::Person(const string& fName, const string& lName)
{
	firstName = fName;
	lastName = lName;
}
void Person::setName(const string& fName, const string& lName)
{
	firstName = fName;
	lastName = lName;
}
string Person::getLastName() const
{
	return lastName;

}
void Person::getName(string& first, string& last)
{
	first = firstName;
	last = lastName;
}
void Person::printName() const
{
	cout << lastName << ", " << firstName << endl;
}
Person::~Person()
{

}
