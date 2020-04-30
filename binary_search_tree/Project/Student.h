#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	void setStudentInfo(int,
						const string&,
						const string&);
	~Student();

	bool operator==(const Student &other) const;
	bool operator<(const Student &other) const;
	bool operator>(const Student &other) const;

private:
	int ID;
	string fName;
	string lName;
};


#endif