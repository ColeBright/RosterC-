#pragma once
#ifndef SECSTU_H_
#define SECSTU_H_
#include <string>
#include "student.h"
using namespace std;


class SecurityStudent : public Student
{
	private:
		Degree degreetyp;
	public: 
	
		SecurityStudent(string sid, string fn, string ln,
			string  ea, int a, int* dic, Degree d);
		void print();
		Degree getDegreeProgram();
		~SecurityStudent();
};
#endif