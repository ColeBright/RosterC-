#include "pch.h"
#include <iostream>
#include <sstream>
#include <cctype>
#include "roster.h"
#include "student.h"
using namespace std;
Degree convert(string);

const string  studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Cole,Bright,colebbright@gmail.com,27,20,30,40,SOFTWARE" };


int main() 
{
	cout << "Scripting and Programming - Applications -C867, C++, 001090252, Cole Bright";cout << endl;cout << endl;

	

	Roster classRoster;
	for (int i = 0; i < 5; i++)
	{


		string s = studentData[i];
		string delim = ",";
		string temp_arr[9];
		int j = 0;


		auto start = 0U;
		auto end = s.find(delim);
		while (end != string::npos)
		{

			temp_arr[j] = s.substr(start, end - start);
			start = end + delim.length();
			end = s.find(delim, start);
			j++;


		}

		temp_arr[8] = s.substr(start, end);
		int a;
		int b;
		int c;
		int d;
	
		istringstream(temp_arr[4]) >> a;
		istringstream(temp_arr[5]) >> b;
		istringstream(temp_arr[6]) >> c;
		istringstream(temp_arr[7]) >> d;
		Degree e = convert(temp_arr[8]);
		classRoster.add(temp_arr[0], temp_arr[1], temp_arr[2], temp_arr[3], a, b, c, d, e);

	}
	
	classRoster.printAll();
	classRoster.printInvalidEmails();
	int q;
	for (q = 0; q < 5; q++)
	{
		classRoster.printAVGdaysInCourse(classRoster.getroster()[q]->GetStdID());
	}
	classRoster.printbyDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	classRoster.~Roster();
		return 0;
}

Roster::Roster()
{
}

void Roster::add(string studentID, string firstName, string lastName,
 string  emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram)
{

	int arr[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

		switch (degreeProgram)
		{
		case NETWORK:
			classrosterArray[q] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, arr, degreeProgram); 
			break;
		case SOFTWARE:
			classrosterArray[q] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, arr, degreeProgram);
			break;
		case SECURITY:
			classrosterArray[q]= new SecurityStudent(studentID, firstName, lastName, emailAddress, age, arr, degreeProgram);
			break;
	
		}
		q++;

}

void Roster::printAll()
{	
	int i;
	for (i = 0; i < 5; i++)
	{
		if (classrosterArray[i] != nullptr)
		{

			classrosterArray[i]->print();
		}
	}

}


void Roster::printInvalidEmails()
{
	int i;
	
	for (i = 0; i < 5; i++)
	{
		string x = classrosterArray[i]->GetEmail();
		size_t space = x.find(' ');
		size_t at = x.find('@');
		size_t dot = x.find('.');

		if (space != string::npos || at == string::npos || dot == string::npos)
		{
			cout << classrosterArray[i]->GetEmail();
			cout << " is an invalid email.";
			cout << endl;
		
			
		}
		
		else
		{
			break;
		}
		
	}
	i++;
}

void Roster::printbyDegreeProgram(Degree degreeProgram)
{
	for(q = 0; q < 5; q++)

	{
		if (classrosterArray[q]->getDegreeProgram() == degreeProgram)
		{
			classrosterArray[q]->print();
		}

	}

}
void Roster::printAVGdaysInCourse(string studentID)
{
	for (q = 0; q < 5; q++)
	{
		if (classrosterArray[q]->GetStdID() == studentID)
		{
			float avg;
			avg = (classrosterArray[q]->GetdaysinCourse()[0] + classrosterArray[q]->GetdaysinCourse()[1] + classrosterArray[q]->GetdaysinCourse()[2]) / 3.0;

			std::cout << studentID << ": " << avg << " average days in each course." << endl;
		}
	}

}

void Roster::remove(string studentID)
{
	int q = 0;
	while (q < 5)
	{
		if(classrosterArray[q] != nullptr)
		{
			if (classrosterArray[q]->GetStdID() == studentID)
			{
				delete classrosterArray[q];
				classrosterArray[q] = nullptr;
				return;
			}
		}
		q++;
	}
	cout << "Student not found.";
	
}

Student ** Roster::getroster()
{
	return classrosterArray;
}

Roster::~Roster() 
{
	int i;
	for (i = 0; i < 5; i++)
	{
		if (classrosterArray[i] != nullptr)
		{
			delete classrosterArray[i];
			classrosterArray[i] = nullptr;
		}
	}
}



Degree convert(string str)
{
	if (str == "SOFTWARE") return SOFTWARE;
	else if (str == "SECURITY") return SECURITY;
	else if (str == "NETWORK") return NETWORK;
}
