#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>
using namespace std;

class Student
{
public:
    Student( );
    Student(int, string);

    void setID(int);
    void setMajor(string);

	int getID() const;
	string getMajor() const;

	void print() const;

	~Student( ); 

private:
	int id;
	string major;
};

#endif