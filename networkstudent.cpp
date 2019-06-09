#include"pch.h"
#include "networkStudent.h"
#include <iostream>




NetworkStudent::NetworkStudent(string sid, string fn, string ln,
	string  ea, int a, int* dic, Degree d) : Student(sid, fn, ln,
		ea, a, dic)
{
	degreetyp = d;
}

void NetworkStudent::print()
{
	cout << GetStdID() << "\tFirst Name: " << GetFrstNme() << "\tLast Name: " << GetLastNme() << "\tAge: " << GetAge()
		<< "\tDays in course: " << GetdaysinCourse()[0] <<", " << GetdaysinCourse()[1] << ", " << GetdaysinCourse()[2] << "\tDegree program: Network " << endl;
}

Degree NetworkStudent::getDegreeProgram()
{
	return degreetyp;
}

NetworkStudent::~NetworkStudent()
{
}
