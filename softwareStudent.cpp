#include "pch.h"
#include "softwareStudent.h"
#include <iostream>

 

SoftwareStudent::SoftwareStudent(string sid, string fn, string ln,
	string  ea, int a, int* dic, Degree d) : Student(sid, fn, ln,
		ea, a, dic)
{
	degreetyp = d;
}
void SoftwareStudent::print() {
	cout << GetStdID() << "\tFirst Name: " << GetFrstNme() << "\tLast Name: " << GetLastNme() << "\tAge: " << GetAge()
		<< "\tDays in course: " << GetdaysinCourse()[0] << ", " << GetdaysinCourse()[1] << ", " << GetdaysinCourse()[2] << "\tDegree program: Software "  << endl;
}

Degree SoftwareStudent::getDegreeProgram()
{
	return degreetyp;
}

SoftwareStudent::~SoftwareStudent()
{
}

