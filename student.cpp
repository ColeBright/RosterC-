#include "pch.h"
#include <iostream>
#include "student.h"


using std::string;


Student::Student(string sid, string fn, string ln, string  ea, int a, int* dic)
{
	studentID = sid;
	firstName = fn;
	lastName = ln;
	emailAddress = ea;
	age = a;
	daysinCourse[0] = dic[0];
	daysinCourse[1] = dic[1];
	daysinCourse[2] = dic[2];

	

}

void Student::SetStdID(string sid)
{
	studentID = sid;
}

void Student::SetFrstNme(string fn)
{
	firstName = fn;
}

void Student::SetLastNme(string ln)
{
	lastName = ln;
}

void Student::SetEmail(string ea)
{
	emailAddress = ea;
}

void Student::SetAge(int a)
{
	age = a;
}

void Student::SetdaysInCourse1(int * dic)
{
	daysinCourse[0] = dic[0];
	daysinCourse[1] = dic[1];
	daysinCourse[2] = dic[2];

}

std::string Student::GetStdID()
{
	return studentID;
}

std::string Student::GetFrstNme()
{
	return firstName;
}

std::string Student::GetLastNme()
{
	return lastName;
}

std::string Student::GetEmail()
{
	return emailAddress;
}

int Student::GetAge()
{
	return age;
}

int * Student::GetdaysinCourse()
{
	return daysinCourse;
}

void Student::print()
{

}

  Degree Student::getDegreeProgram()
{
	return SOFTWARE ;
}

Student::~Student()
{
}


