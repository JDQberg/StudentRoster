#pragma once
#include<string>
#include "Student.h"
class SecurityStudent :
	public Student
{
public:
	SecurityStudent();
	SecurityStudent(
		string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int numDays[],
		DegreeProgram program
	);

	DegreeProgram getDegreeProgram();
	void print();
	~SecurityStudent();
};

