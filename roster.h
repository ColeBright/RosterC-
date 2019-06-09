#pragma once
#ifndef ROSTER_H_
#define ROSTER_H_
#include <string>
#include "networkstudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "degree.h"
#include "student.h"


class Roster
{
public:

	Roster();
	void add(string studentID, string firstName, string lastName,
		string  emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
	void printAll();
	void printInvalidEmails();
	void printbyDegreeProgram(Degree);
	void printAVGdaysInCourse(string);
	void remove(std::string studentID);
	Student** getroster();
	~Roster();
private:
	Student* classrosterArray[5];
	int q = 0;

}
;
#endif