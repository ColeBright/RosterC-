#pragma once
#include "pch.h"
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "degree.h" 
using namespace std;

class Student {

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysinCourse[3];


public:
	Student(string studentID, string firstName, string lastName,
		string  emailAddress, int age, int* daysinCourse);
	void SetStdID(string sid);
	void SetFrstNme(string fn);
	void SetLastNme(string ln);
	void SetEmail(string ea);
	void SetAge(int a);
	void SetdaysInCourse1(int* dic);
	

	string GetStdID();
	string GetFrstNme();
	string GetLastNme();
	string GetEmail();
	int GetAge();
	int* GetdaysinCourse();
	

	virtual void print();

	virtual Degree getDegreeProgram();

	~Student();
};

#endif