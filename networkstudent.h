#pragma once
#ifndef NETSTU_H_
#define NETSTU_H_
#include <string>
#include "student.h"


class NetworkStudent : public Student
{
	private: 
		Degree degreetyp;
	public:
		NetworkStudent(string sid, string fn, string ln,
			string  ea, int a, int* dic, Degree d);
		void print();
		Degree getDegreeProgram();
		~NetworkStudent();

};

#endif