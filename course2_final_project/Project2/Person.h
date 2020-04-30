/*
	Shah, Salman
	CSA250
	March 10, 2014

	Project 1
*/
/* Interface of the class Person */
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(const string& fName, const string& lName);
	void setName(const string& fName, const string& lName);
	string getLastName() const;
	void getName(string& first, string& last);
	void printName() const;
	~Person();

private:
	string lastName;
	string firstName;
};

#endif
