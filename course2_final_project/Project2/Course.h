/*
	Shah, Salman
	CSA250
	March 10, 2014

	Project 1
*/
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Course
{
public:

	// default constructor
	Course();


	// setCourseInfo
	void setCourseInfo(const string &cName,
			const string &cNumber,
			char cGrade,
			int cCredits);


	// printCourseInfo
	void printCourseInfo(bool print) const;


	// getCourseCredits
	int getCourseCredits() const;


	// getCourseNumber
	string getCourseNumber() const;


	// getCourseName
	string getCourseName() const;


	// getCourseGrade
	char getCourseGrade() const;


	// destructor
	~Course();


private:
    string courseName; 	
    string courseNo; 	
    char courseGrade;	
    int courseCredits;	
};

#endif
