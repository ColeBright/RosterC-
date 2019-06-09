#include "pch.h"
#include "securityStudent.h"
#include <iostream>



SecurityStudent::SecurityStudent(string sid, string fn, string ln,
	string  ea, int a, int* dic, Degree d) : Student(sid, fn, ln,
		ea, a, dic) {
	degreetyp = d;
}

void SecurityStudent::print()
{
	cout << GetStdID() << "\tFirst Name: " << GetFrstNme() << "\tLast Name: " << GetLastNme() << "\tAge: " << GetAge()
		<< "\tDays in course: " << GetdaysinCourse()[0] <<", " << GetdaysinCourse()[1] << ", " << GetdaysinCourse()[2] << "\tDegree program: Security " << endl;
}

Degree SecurityStudent::getDegreeProgram()
{
	return degreetyp;
}

SecurityStudent::~SecurityStudent()
{
}
