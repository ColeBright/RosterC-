#pragma once
#ifndef SOFSTU_H_
#define SOFSTU_H_
#include <string>
#include "student.h"


class SoftwareStudent : public Student
{
	private:
		Degree degreetyp;
	public: 
		SoftwareStudent(string sid, string fn, string ln,
			string  ea, int a, int* dic, Degree d);
		void print();
		Degree getDegreeProgram();
		~SoftwareStudent();
};

#endif